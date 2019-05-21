
#include "main.buildv1.1.15/linux_debug_mx/include/main_project.h"

#include "libc/libc.buildv1.1.15/linux_debug_mx/include/libc_libc.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2ci_2m2ci.h"

extern bbGCVar<t_m2ci_M2CI> g_APPLICATION_0WEEL_PROC;

extern void g_std_filesystem_ChangeDir(bbString l_path);
extern void g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target);
extern bbString g_std_filesystem_CurrentDir();
extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
void g_APPLICATION_0WEEL_WeelBuildProject(bbString l_title,bbBool l_clean,bbBool l_release,bbString l_target){
  struct f0_t : public bbGCFrame{
    t_APPLICATION_0WEEL_ProjectConf* l_proj{};
    void gcMark(){
      bbGCMark(l_proj);
    }
  }f0{};
  bbDBFrame db_f{"WeelBuildProject:Void(title:monkey.types.String,clean:monkey.types.Bool,release:monkey.types.Bool,target:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/project.monkey2"};
  bbDBLocal("title",&l_title);
  bbDBLocal("clean",&l_clean);
  bbDBLocal("release",&l_release);
  bbDBLocal("target",&l_target);
  bbDBStmt(20487);
  f0.l_proj=bbGCNew<t_APPLICATION_0WEEL_ProjectConf>();
  bbDBLocal("proj",&f0.l_proj);
  bbDBStmt(24583);
  bbString l_projectPath=(g_std_filesystem_CurrentDir()+l_title);
  bbDBLocal("projectPath",&l_projectPath);
  bbDBStmt(32769);
  bb_print((bbString(L"Locating Project: ",18)+l_projectPath));
  bbDBStmt(36865);
  if(f0.l_proj->m_LoadJson(l_projectPath)){
    bbDBBlock db_blk;
    bbDBStmt(45064);
    bbString l_curDir=g_std_filesystem_CurrentDir();
    bbDBLocal("curDir",&l_curDir);
    bbDBStmt(49154);
    g_std_filesystem_ChangeDir(l_projectPath);
    bbDBStmt(57346);
    if(g_APPLICATION_0WEEL_FileExists((f0.l_proj->m_MainFileName+bbString(L".monkey2",8)))){
      struct f2_t : public bbGCFrame{
        t_std_collections_Stack_1Tt_std_json_JsonValue_2* t0{};
        t_m2ci_M2CI* t1{};
        void gcMark(){
          bbGCMark(t0);
          bbGCMark(t1);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(65539);
      g_APPLICATION_0WEEL_CheckDependencies(f2.t0=f0.l_proj->m_Depends.get(),l_target);
      bbDBStmt(73731);
      if(((f0.l_proj->m_PreDebug!=bbString{})&&!l_release)){
        bbDBBlock db_blk;
        system_utf8(bbCString(f0.l_proj->m_PreDebug));
      }
      bbDBStmt(77827);
      if(((f0.l_proj->m_PreRelease!=bbString{})&&l_release)){
        bbDBBlock db_blk;
        system_utf8(bbCString(f0.l_proj->m_PreRelease));
      }
      bbDBStmt(86019);
      (f2.t1=g_APPLICATION_0WEEL_PROC.get())->m_BuildProject((f0.l_proj->m_MainFileName+bbString(L".monkey2",8)),l_clean,l_release,((f0.l_proj->m_Type==bbString(L"gui",3)) ? true : false),l_target,f0.l_proj->m_Name);
      bbDBStmt(94211);
      if(((f0.l_proj->m_PostDebug!=bbString{})&&!l_release)){
        bbDBBlock db_blk;
        system_utf8(bbCString(f0.l_proj->m_PostDebug));
      }
      bbDBStmt(98307);
      if(((f0.l_proj->m_PostRelease!=bbString{})&&l_release)){
        bbDBBlock db_blk;
        system_utf8(bbCString(f0.l_proj->m_PostRelease));
      }
    }else{
      bbDBStmt(106498);
      bbDBBlock db_blk;
      bbDBStmt(114691);
      bb_print((((bbString(L"Couldn't find '",15)+f0.l_proj->m_MainFileName)+bbString(L".monkey2",8))+bbString(L"'",1)));
    }
    bbDBStmt(131074);
    g_std_filesystem_ChangeDir(l_curDir);
  }else{
    bbDBStmt(139265);
    bbDBBlock db_blk;
    bbDBStmt(143362);
    bb_print(bbString(L"Couldn't load 'project.json'",28));
  }
}

void t_APPLICATION_0WEEL_ProjectConf::gcMark(){
  bbGCMark(m_Depends);
}

void t_APPLICATION_0WEEL_ProjectConf::dbEmit(){
  puts( "[APPLICATION_WEEL.ProjectConf]");
  bbDBEmit("Directory",&m_Directory);
  bbDBEmit("MainFileName",&m_MainFileName);
  bbDBEmit("Name",&m_Name);
  bbDBEmit("Type",&m_Type);
  bbDBEmit("Depends",&m_Depends);
  bbDBEmit("PreDebug",&m_PreDebug);
  bbDBEmit("PostDebug",&m_PostDebug);
  bbDBEmit("PreRelease",&m_PreRelease);
  bbDBEmit("PostRelease",&m_PostRelease);
}

t_APPLICATION_0WEEL_ProjectConf::t_APPLICATION_0WEEL_ProjectConf(){
  bbDBFrame db_f{"new:Void()","/home/scott/Documents/Monkey/Projects/weel2/project.monkey2"};
  t_APPLICATION_0WEEL_ProjectConf*self=this;
  bbDBLocal("Self",&self);
}
t_APPLICATION_0WEEL_ProjectConf::~t_APPLICATION_0WEEL_ProjectConf(){
}

bbBool t_APPLICATION_0WEEL_ProjectConf::m_LoadJson(bbString l_path){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"LoadJson:monkey.types.Bool(path:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/project.monkey2"};
  t_APPLICATION_0WEEL_ProjectConf*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("path",&l_path);
  bbDBStmt(303112);
  bbBool l_result=false;
  bbDBLocal("result",&l_result);
  bbDBStmt(307202);
  if(g_APPLICATION_0WEEL_FileExists((l_path+bbString(L"/project.json",13)))){
    struct f1_t : public bbGCFrame{
      t_std_json_JsonObject* l_obj{};
      t_std_json_JsonValue* t0{};
      void gcMark(){
        bbGCMark(l_obj);
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(315395);
    this->m_Directory=l_path;
    bbDBStmt(327689);
    f1.l_obj=g_std_json_JsonObject_Load((l_path+bbString(L"/project.json",13)),true);
    bbDBLocal("obj",&f1.l_obj);
    bbDBStmt(331779);
    this->m_MainFileName=(f1.t0=f1.l_obj->m__idx(bbString(L"main",4)))->m_ToString();
    bbDBStmt(335875);
    this->m_Name=(f1.t0=f1.l_obj->m__idx(bbString(L"name",4)))->m_ToString();
    bbDBStmt(339971);
    this->m_Type=(f1.t0=f1.l_obj->m__idx(bbString(L"type",4)))->m_ToString();
    bbDBStmt(344067);
    this->m_Depends=(f1.t0=f1.l_obj->m__idx(bbString(L"depends",7)))->m_ToArray();
    bbDBStmt(356355);
    this->m_PreDebug=(f1.t0=f1.l_obj->m__idx(bbString(L"preDebug",8)))->m_ToString();
    bbDBStmt(360451);
    this->m_PostDebug=(f1.t0=f1.l_obj->m__idx(bbString(L"postDebug",9)))->m_ToString();
    bbDBStmt(364547);
    this->m_PreRelease=(f1.t0=f1.l_obj->m__idx(bbString(L"preRelease",10)))->m_ToString();
    bbDBStmt(368643);
    this->m_PostRelease=(f1.t0=f1.l_obj->m__idx(bbString(L"postRelease",11)))->m_ToString();
  }
  bbDBStmt(380930);
  return true;
}
bbString bbDBType(t_APPLICATION_0WEEL_ProjectConf**){
  return "APPLICATION_WEEL.ProjectConf";
}
bbString bbDBValue(t_APPLICATION_0WEEL_ProjectConf**p){
  return bbDBObjectValue(*p);
}

void mx2_main_project_init_f(){
}
