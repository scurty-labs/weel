
#include "main.buildv1.1.15/linux_release_mx/include/main_project.h"

#include "libc/libc.buildv1.1.15/linux_release_mx/include/libc_libc.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2ci_2m2ci.h"

extern bbGCVar<t_m2ci_M2CI> g_APPLICATION_0WEEL_PROC;

extern void g_std_filesystem_ChangeDir(bbString l_path);
extern bbBool g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target);
extern bbString g_std_filesystem_CurrentDir();
extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
void g_APPLICATION_0WEEL_WeelBuildProject(bbString l_title,bbBool l_clean,bbBool l_release,bbString l_target){
  struct f0_t : public bbGCFrame{
    t_APPLICATION_0WEEL_ProjectConf* l_proj{};
    void gcMark(){
      bbGCMark(l_proj);
    }
  }f0{};
  f0.l_proj=bbGCNew<t_APPLICATION_0WEEL_ProjectConf>();
  bbString l_projectPath=(g_std_filesystem_CurrentDir()+l_title);
  bb_print((bbString(L"Locating Project: ",18)+l_projectPath));
  if(f0.l_proj->m_LoadJson(l_projectPath)){
    bbString l_curDir=g_std_filesystem_CurrentDir();
    g_std_filesystem_ChangeDir(l_projectPath);
    if(g_APPLICATION_0WEEL_FileExists((f0.l_proj->m_MainFileName+bbString(L".monkey2",8)))){
      struct f2_t : public bbGCFrame{
        t_std_collections_Stack_1Tt_std_json_JsonValue_2* t0{};
        t_m2ci_M2CI* t1{};
        void gcMark(){
          bbGCMark(t0);
          bbGCMark(t1);
        }
      }f2{};
      g_APPLICATION_0WEEL_CheckDependencies(f2.t0=f0.l_proj->m_Depends.get(),l_target);
      if(((f0.l_proj->m_PreDebug!=bbString{})&&!l_release)){
        system_utf8(bbCString(f0.l_proj->m_PreDebug));
      }
      if(((f0.l_proj->m_PreRelease!=bbString{})&&l_release)){
        system_utf8(bbCString(f0.l_proj->m_PreRelease));
      }
      (f2.t1=g_APPLICATION_0WEEL_PROC.get())->m_BuildProject((f0.l_proj->m_MainFileName+bbString(L".monkey2",8)),l_clean,l_release,((f0.l_proj->m_Type==bbString(L"gui",3)) ? true : false),l_target,f0.l_proj->m_Name);
      if(((f0.l_proj->m_PostDebug!=bbString{})&&!l_release)){
        system_utf8(bbCString(f0.l_proj->m_PostDebug));
      }
      if(((f0.l_proj->m_PostRelease!=bbString{})&&l_release)){
        system_utf8(bbCString(f0.l_proj->m_PostRelease));
      }
    }else{
      bb_print((((bbString(L"Couldn't find '",15)+f0.l_proj->m_MainFileName)+bbString(L".monkey2",8))+bbString(L"'",1)));
    }
    g_std_filesystem_ChangeDir(l_curDir);
  }else{
    bb_print(bbString(L"Couldn't load 'project.json'",28));
  }
}

void t_APPLICATION_0WEEL_ProjectConf::gcMark(){
  bbGCMark(m_Depends);
}

t_APPLICATION_0WEEL_ProjectConf::t_APPLICATION_0WEEL_ProjectConf(){
}
t_APPLICATION_0WEEL_ProjectConf::~t_APPLICATION_0WEEL_ProjectConf(){
}

bbBool t_APPLICATION_0WEEL_ProjectConf::m_LoadJson(bbString l_path){
  bbBool l_result=false;
  if(g_APPLICATION_0WEEL_FileExists((l_path+bbString(L"/project.json",13)))){
    struct f1_t : public bbGCFrame{
      t_std_json_JsonObject* l_obj{};
      t_std_json_JsonValue* t0{};
      void gcMark(){
        bbGCMark(l_obj);
        bbGCMark(t0);
      }
    }f1{};
    this->m_Directory=l_path;
    f1.l_obj=g_std_json_JsonObject_Load((l_path+bbString(L"/project.json",13)),true);
    this->m_MainFileName=(f1.t0=f1.l_obj->m__idx(bbString(L"main",4)))->m_ToString();
    this->m_Name=(f1.t0=f1.l_obj->m__idx(bbString(L"name",4)))->m_ToString();
    this->m_Type=(f1.t0=f1.l_obj->m__idx(bbString(L"type",4)))->m_ToString();
    this->m_Depends=(f1.t0=f1.l_obj->m__idx(bbString(L"depends",7)))->m_ToArray();
    this->m_PreDebug=(f1.t0=f1.l_obj->m__idx(bbString(L"preDebug",8)))->m_ToString();
    this->m_PostDebug=(f1.t0=f1.l_obj->m__idx(bbString(L"postDebug",9)))->m_ToString();
    this->m_PreRelease=(f1.t0=f1.l_obj->m__idx(bbString(L"preRelease",10)))->m_ToString();
    this->m_PostRelease=(f1.t0=f1.l_obj->m__idx(bbString(L"postRelease",11)))->m_ToString();
  }
  return true;
}

void mx2_main_project_init_f(){
}
