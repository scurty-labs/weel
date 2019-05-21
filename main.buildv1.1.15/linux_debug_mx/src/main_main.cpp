
#include "main.buildv1.1.15/linux_debug_mx/include/main_main.h"

#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_filesystem_2filesystem.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2ci_2m2ci.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_optionset_2optionset.h"

extern bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;

extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
extern void g_APPLICATION_0WEEL_GenerateTemplate(bbString l_name,bbString l_type);
extern void g_APPLICATION_0WEEL_GetModule(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_destination);
extern t_std_json_JsonObject* g_APPLICATION_0WEEL_LoadSources();
extern void g_APPLICATION_0WEEL_UpdateMonkey2();
extern void g_APPLICATION_0WEEL_WeelBuildModule(bbString l_name,bbBool l_clean,bbString l_target);
extern void g_APPLICATION_0WEEL_WeelBuildProject(bbString l_title,bbBool l_clean,bbBool l_release,bbString l_target);
bbString g_APPLICATION_0WEEL_APPTITLE;
bbString g_APPLICATION_0WEEL_VERSION;
bbGCVar<t_m2ci_M2CI> g_APPLICATION_0WEEL_PROC;

void bbMain(){
  static bool done;
  if(done) return;
  done=true;
  void mx2_monkey_main();mx2_monkey_main();
  void mx2_libc_main();mx2_libc_main();
  void mx2_std_main();mx2_std_main();
  void mx2_main_std_collections_2map_init_f();mx2_main_std_collections_2map_init_f();
  void mx2_main_m2stp_2inc_2base_0functions_init_f();mx2_main_m2stp_2inc_2base_0functions_init_f();
  void mx2_main_m2stp_2m2stp_init_f();mx2_main_m2stp_2m2stp_init_f();
  void mx2_main_m2conio_2m2conio_init_f();mx2_main_m2conio_2m2conio_init_f();
  void mx2_main_optionset_2optionset_init_f();mx2_main_optionset_2optionset_init_f();
  void mx2_main_m2ci_2m2ci_init_f();mx2_main_m2ci_2m2ci_init_f();
  void mx2_main_m2git_2m2git_init_f();mx2_main_m2git_2m2git_init_f();
  void mx2_main_funcs_init_f();mx2_main_funcs_init_f();
  void mx2_main_templates_init_f();mx2_main_templates_init_f();
  void mx2_main_package_init_f();mx2_main_package_init_f();
  void mx2_main_project_init_f();mx2_main_project_init_f();
  void mx2_main_module_init_f();mx2_main_module_init_f();
  void mx2_main_environment_init_f();mx2_main_environment_init_f();
  void mx2_main_main_init_f();mx2_main_main_init_f();
  struct f0_t : public bbGCFrame{
    t_std_optionset_OptionSet* l_OPTIONS{};
    bbFunction<void(t_std_optionset_Option*)> l__0help{};
    bbArray<bbString> t0{};
    bbFunction<void(t_std_optionset_Option*)> t1{};
    void gcMark(){
      bbGCMark(l_OPTIONS);
      bbGCMark(l__0help);
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Main:Void()","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
  bbDBStmt(172039);
  f0.l_OPTIONS=bbGCNew<t_std_optionset_OptionSet>(f0.t0=bbFileSystem::appArgs());
  bbDBLocal("OPTIONS",&f0.l_OPTIONS);
  bbDBStmt(176129);
  g_APPLICATION_0WEEL_PROC=bbGCNew<t_m2ci_M2CI>();
  bbDBStmt(192513);
  struct lambda0 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(196610);
      bb_print(((g_APPLICATION_0WEEL_APPTITLE+bbString(L" version: ",10))+g_APPLICATION_0WEEL_VERSION));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"version",7),bbInt(0),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda0));
  bbDBStmt(221185);
  struct lambda1 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(233474);
      g_APPLICATION_0WEEL_WeelBuildModule(l_this->m__idx(bbInt(0)),true,l_this->m__idx(1));
      bbDBStmt(237570);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs(l_this->m__idx(bbInt(0)));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"rebuildmod",10),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda1));
  bbDBStmt(249857);
  struct lambda2 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(262146);
      g_APPLICATION_0WEEL_WeelBuildModule(l_this->m__idx(bbInt(0)),false,l_this->m__idx(1));
      bbDBStmt(266242);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs(l_this->m__idx(bbInt(0)));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"buildmod",8),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda2));
  bbDBStmt(282625);
  struct lambda3 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(286722);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},false,false,l_this->m__idx(1));
      bbDBStmt(290818);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},false,true,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"buildmods",9),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda3));
  bbDBStmt(307201);
  struct lambda4 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(311298);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,false,l_this->m__idx(1));
      bbDBStmt(315394);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,true,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"rebuildmods",11),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda4));
  bbDBStmt(344065);
  struct lambda5 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(348162);
      g_APPLICATION_0WEEL_WeelBuildProject(l_this->m__idx(bbInt(0)),false,false,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"build",5),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda5));
  bbDBStmt(364545);
  struct lambda6 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(368642);
      g_APPLICATION_0WEEL_WeelBuildProject(l_this->m__idx(bbInt(0)),false,true,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"buildr",6),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda6));
  bbDBStmt(397313);
  struct lambda7 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(401410);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs();
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"builddocs",9),bbInt(0),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda7));
  bbDBStmt(417793);
  struct lambda8 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(421890);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs(l_this->m__idx(bbInt(0)));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"builddoc",8),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda8));
  bbDBStmt(446465);
  struct lambda9 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(450562);
      g_APPLICATION_0WEEL_GenerateTemplate(l_this->m__idx(bbInt(0)),l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"new",3),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda9));
  bbDBStmt(475137);
  struct lambda10 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_std_json_JsonObject* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(479234);
      g_APPLICATION_0WEEL_GetModule(f1.t0=g_APPLICATION_0WEEL_LoadSources(),l_this->m__idx(bbInt(0)),bbString{});
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"get",3),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda10));
  bbDBStmt(491521);
  struct lambda11 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_std_json_JsonObject* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(495618);
      g_APPLICATION_0WEEL_GetModule(f1.t0=g_APPLICATION_0WEEL_LoadSources(),l_this->m__idx(bbInt(0)),(bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"install",7),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda11));
  bbDBStmt(507905);
  struct lambda12 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_std_json_JsonObject* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(512008);
      bbString l_oldMod=(((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_this->m__idx(bbInt(0)));
      bbDBLocal("oldMod",&l_oldMod);
      bbDBStmt(516098);
      if(g_APPLICATION_0WEEL_FileExists(l_oldMod)){
        bbDBBlock db_blk;
        g_std_filesystem_DeleteDir(l_oldMod,true);
      }
      bbDBStmt(520194);
      g_APPLICATION_0WEEL_GetModule(f1.t0=g_APPLICATION_0WEEL_LoadSources(),l_this->m__idx(bbInt(0)),(bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"reinstall",9),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda12));
  bbDBStmt(602113);
  struct lambda13 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(606210);
      g_APPLICATION_0WEEL_UpdateMonkey2();
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"update",6),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda13));
  bbDBStmt(634887);
  struct lambda14 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/main.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(643074);
      bb_print(bbString(L"usage: weel [--help] [new <template> <name>] [get <package>] [install <package>] [reinstall <package>]",102));
      bbDBStmt(647170);
      bb_print(bbString(L"            [build <project> <platform>] [buildr <project> <platform>] [buildmod <module> <platform>]",101));
      bbDBStmt(651266);
      bb_print(bbString(L"            [buildmods] [rebuildmod <module> <platform>] [rebuildmods] [builddocs] [builddoc <module>]",102));
      bbDBStmt(655362);
      bb_print(bbString{});
      bbDBStmt(663554);
      bb_print(bbString(L"<template> = [empty] [console] [gui] [2d] [3d] [module]",55));
      bbDBStmt(667650);
      bb_print(bbString(L"<platform> = [windows] [macos] [linux] [android] [ios] [wasm] [emscripten]",74));
      bbDBStmt(675842);
      bb_print(bbString(L"\n\n[new <template> <name>] - Creates a new project folder and project configuration file.",88));
      bbDBStmt(679938);
      bb_print(bbString(L"\n[get <package>] - Downloads a package from the repository into your working directory.",87));
      bbDBStmt(684034);
      bb_print(bbString(L"\n[install <package>] - Downloads target module package into the main 'modules' folder.",86));
      bbDBStmt(688130);
      bb_print(bbString(L"\n[reinstall <package>] - Removes old module and re-downloads target module package.",83));
      bbDBStmt(692226);
      bb_print(bbString(L"\n[build <project> <platform>] - Builds project in *debug* mode for specified platform.",86));
      bbDBStmt(696322);
      bb_print(bbString(L"\n[buildr <project> <platform>] - Builds target project in *release* mode.",73));
      bbDBStmt(700418);
      bb_print(bbString(L"\n[buildmod <module> <platform>] - Builds module and its documentation in debug and release mode.",96));
      bbDBStmt(704514);
      bb_print(bbString(L"\n[buildmods] - Builds all installed modules for target platform",63));
      bbDBStmt(708610);
      bb_print(bbString(L"\n[rebuildmod <module> <platform>] - Cleans and builds target module.",68));
      bbDBStmt(712706);
      bb_print(bbString(L"\n[rebuildmods] - Cleans and rebuilds *ALL* existing modules.",60));
      bbDBStmt(716802);
      bb_print(bbString(L"\n[builddoc <module>] - Assemles documentation for given module.",63));
      bbDBStmt(720898);
      bb_print(bbString(L"\n[builddocs - Assemles *ALL* documentation for *ALL* modules.",61));
    }
    void gcMark(){
    }
  };
  f0.l__0help=bbFunction<void(t_std_optionset_Option*)>(new lambda14);
  bbDBLocal("_help",&f0.l__0help);
  bbDBStmt(737281);
  f0.l_OPTIONS->m_Add(bbString(L"help",4),bbInt(0),f0.l__0help);
  bbDBStmt(741377);
  f0.l_OPTIONS->m_Add(bbString(L"-h",2),bbInt(0),f0.l__0help);
  bbDBStmt(757761);
  if(((f0.t0=bbFileSystem::appArgs()).length()>1)){
    bbDBBlock db_blk;
    bbDBStmt(761858);
    f0.l_OPTIONS->m_Parse();
  }else{
    bbDBStmt(765953);
    struct f1_t : public bbGCFrame{
      t_std_optionset_Option* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(770050);
    f0.l__0help(f1.t0=bbGCNew<t_std_optionset_Option>(bbString{},bbInt(0),f0.l__0help));
  }
}

void mx2_main_main_init_f(){
  g_APPLICATION_0WEEL_APPTITLE=bbString(L"weel",4);
  g_APPLICATION_0WEEL_VERSION=bbString(L"0.85a",5);
}

struct mx2_main_main_roots_t : bbGCRoot{
  void gcMark(){
    bbGCMark(g_APPLICATION_0WEEL_PROC.get());
  }
}mx2_main_main_roots;
