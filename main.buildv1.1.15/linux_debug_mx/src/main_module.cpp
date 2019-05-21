
#include "main.buildv1.1.15/linux_debug_mx/include/main_module.h"

#include "std/std.buildv1.1.15/linux_debug_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_filesystem_2filesystem.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2ci_2m2ci.h"

extern bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;
extern bbGCVar<t_m2ci_M2CI> g_APPLICATION_0WEEL_PROC;

extern void g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target);
extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
void g_APPLICATION_0WEEL_WeelBuildModule(bbString l_name,bbBool l_clean,bbString l_target){
  struct f0_t : public bbGCFrame{
    t_APPLICATION_0WEEL_ModuleConf* l_module{};
    void gcMark(){
      bbGCMark(l_module);
    }
  }f0{};
  bbDBFrame db_f{"WeelBuildModule:Void(name:monkey.types.String,clean:monkey.types.Bool,target:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/module.monkey2"};
  bbDBLocal("name",&l_name);
  bbDBLocal("clean",&l_clean);
  bbDBLocal("target",&l_target);
  bbDBStmt(20487);
  f0.l_module=bbGCNew<t_APPLICATION_0WEEL_ModuleConf>();
  bbDBLocal("module",&f0.l_module);
  bbDBStmt(24583);
  bbString l_modulePath=(((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_name);
  bbDBLocal("modulePath",&l_modulePath);
  bbDBStmt(28673);
  bb_print(l_modulePath);
  bbDBStmt(32769);
  if(f0.l_module->m_LoadJson(l_modulePath)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Stack_1Tt_std_json_JsonValue_2* t0{};
      t_m2ci_M2CI* t1{};
      void gcMark(){
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(36866);
    g_APPLICATION_0WEEL_CheckDependencies(f1.t0=f0.l_module->m_Depends.get(),l_target);
    bbDBStmt(40962);
    (f1.t1=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(l_name,l_clean,false,l_target);
    bbDBStmt(45058);
    (f1.t1=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(l_name,l_clean,true,l_target);
  }else{
    bbDBStmt(49153);
    bbDBBlock db_blk;
    bbDBStmt(53250);
    bb_print(bbString(L"Couldn't load 'module.json'",27));
  }
}

void t_APPLICATION_0WEEL_ModuleConf::gcMark(){
  bbGCMark(m_Depends);
}

void t_APPLICATION_0WEEL_ModuleConf::dbEmit(){
  puts( "[APPLICATION_WEEL.ModuleConf]");
  bbDBEmit("Name",&m_Name);
  bbDBEmit("About",&m_About);
  bbDBEmit("Author",&m_Author);
  bbDBEmit("Version",&m_Version);
  bbDBEmit("Depends",&m_Depends);
}

t_APPLICATION_0WEEL_ModuleConf::t_APPLICATION_0WEEL_ModuleConf(){
  bbDBFrame db_f{"new:Void()","/home/scott/Documents/Monkey/Projects/weel2/module.monkey2"};
  t_APPLICATION_0WEEL_ModuleConf*self=this;
  bbDBLocal("Self",&self);
}
t_APPLICATION_0WEEL_ModuleConf::~t_APPLICATION_0WEEL_ModuleConf(){
}

bbBool t_APPLICATION_0WEEL_ModuleConf::m_LoadJson(bbString l_path){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"LoadJson:monkey.types.Bool(path:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/module.monkey2"};
  t_APPLICATION_0WEEL_ModuleConf*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("path",&l_path);
  bbDBStmt(167944);
  bbBool l_result=false;
  bbDBLocal("result",&l_result);
  bbDBStmt(172034);
  if(g_APPLICATION_0WEEL_FileExists((l_path+bbString(L"/module.json",12)))){
    struct f1_t : public bbGCFrame{
      t_std_json_JsonObject* l_obj{};
      t_std_json_JsonValue* t0{};
      void gcMark(){
        bbGCMark(l_obj);
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(184329);
    f1.l_obj=g_std_json_JsonObject_Load((l_path+bbString(L"/module.json",12)),true);
    bbDBLocal("obj",&f1.l_obj);
    bbDBStmt(188419);
    this->m_Name=(f1.t0=f1.l_obj->m__idx(bbString(L"module",6)))->m_ToString();
    bbDBStmt(192515);
    this->m_About=(f1.t0=f1.l_obj->m__idx(bbString(L"about",5)))->m_ToString();
    bbDBStmt(196611);
    this->m_Version=(f1.t0=f1.l_obj->m__idx(bbString(L"version",7)))->m_ToString();
    bbDBStmt(200707);
    this->m_Author=(f1.t0=f1.l_obj->m__idx(bbString(L"author",6)))->m_ToString();
    bbDBStmt(204803);
    this->m_Depends=(f1.t0=f1.l_obj->m__idx(bbString(L"depends",7)))->m_ToArray();
    bbDBStmt(208899);
    l_result=true;
  }
  bbDBStmt(221186);
  return l_result;
}
bbString bbDBType(t_APPLICATION_0WEEL_ModuleConf**){
  return "APPLICATION_WEEL.ModuleConf";
}
bbString bbDBValue(t_APPLICATION_0WEEL_ModuleConf**p){
  return bbDBObjectValue(*p);
}

void mx2_main_module_init_f(){
}
