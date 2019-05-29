
#include "main.buildv1.1.15/linux_release_mx/include/main_main.h"

#include "libc/libc.buildv1.1.15/linux_release_mx/include/libc_libc.h"
#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_filesystem_2filesystem.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2ci_2m2ci.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_module.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_optionset_2optionset.h"

extern bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;

extern bbBool g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target);
extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
extern void g_APPLICATION_0WEEL_GenerateTemplate(bbString l_name,bbString l_type);
extern void g_APPLICATION_0WEEL_GetModule(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_destination);
extern void g_m2git_GitBranch(bbString l_link,bbString l_destination);
extern t_std_json_JsonObject* g_APPLICATION_0WEEL_LoadSources();
extern bbBool g_APPLICATION_0WEEL_ModuleInstalled(bbString l_name);
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
  f0.l_OPTIONS=bbGCNew<t_std_optionset_OptionSet>(f0.t0=bbFileSystem::appArgs());
  g_APPLICATION_0WEEL_PROC=bbGCNew<t_m2ci_M2CI>();
  struct lambda0 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bb_print(((g_APPLICATION_0WEEL_APPTITLE+bbString(L" version: ",10))+g_APPLICATION_0WEEL_VERSION));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"version",7),bbInt(0),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda0));
  struct lambda1 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      g_APPLICATION_0WEEL_WeelBuildModule(l_this->m__idx(bbInt(0)),true,l_this->m__idx(1));
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs(l_this->m__idx(bbInt(0)));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"rebuildmod",10),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda1));
  struct lambda2 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      g_APPLICATION_0WEEL_WeelBuildModule(l_this->m__idx(bbInt(0)),false,l_this->m__idx(1));
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs(l_this->m__idx(bbInt(0)));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"buildmod",8),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda2));
  struct lambda3 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},false,false,l_this->m__idx(1));
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},false,true,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"buildmods",9),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda3));
  struct lambda4 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,false,l_this->m__idx(1));
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,true,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"rebuildmods",11),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda4));
  struct lambda5 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      if(g_APPLICATION_0WEEL_ModuleInstalled(l_this->m__idx(bbInt(0)))){
        struct f2_t : public bbGCFrame{
          t_APPLICATION_0WEEL_ModuleConf* l_conf{};
          void gcMark(){
            bbGCMark(l_conf);
          }
        }f2{};
        f2.l_conf=bbGCNew<t_APPLICATION_0WEEL_ModuleConf>();
        f2.l_conf->m_LoadJson((((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_this->m__idx(bbInt(0))));
        f2.l_conf->m_PrintInfo();
      }
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"info",4),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda5));
  struct lambda6 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      if(g_APPLICATION_0WEEL_ModuleInstalled(l_this->m__idx(bbInt(0)))){
        struct f2_t : public bbGCFrame{
          t_APPLICATION_0WEEL_ModuleConf* l_conf{};
          t_std_collections_Stack_1Tt_std_json_JsonValue_2* t0{};
          void gcMark(){
            bbGCMark(l_conf);
            bbGCMark(t0);
          }
        }f2{};
        bb_print(((bbString(L"Module '",8)+l_this->m__idx(bbInt(0)))+bbString(L"' is installed.",15)));
        f2.l_conf=bbGCNew<t_APPLICATION_0WEEL_ModuleConf>();
        f2.l_conf->m_LoadJson((((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_this->m__idx(bbInt(0))));
        if(g_APPLICATION_0WEEL_CheckDependencies(f2.t0=f2.l_conf->m_Depends.get(),l_this->m__idx(bbInt(0)))){
          bb_print(bbString(L"No missing dependencies.",24));
        }else{
          bb_print(bbString(L"Missing dependency.",19));
        }
      }else{
        bb_print(bbString(L"Module is not Installed.",24));
      }
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"check",5),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda6));
  struct lambda7 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      g_APPLICATION_0WEEL_WeelBuildProject(l_this->m__idx(bbInt(0)),false,false,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"build",5),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda7));
  struct lambda8 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      g_APPLICATION_0WEEL_WeelBuildProject(l_this->m__idx(bbInt(0)),false,true,l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"buildr",6),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda8));
  struct lambda9 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs();
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"builddocs",9),bbInt(0),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda9));
  struct lambda10 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs(l_this->m__idx(bbInt(0)));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"builddoc",8),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda10));
  struct lambda11 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      g_APPLICATION_0WEEL_GenerateTemplate(l_this->m__idx(bbInt(0)),l_this->m__idx(1));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"new",3),2,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda11));
  struct lambda12 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_std_json_JsonObject* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      g_APPLICATION_0WEEL_GetModule(f1.t0=g_APPLICATION_0WEEL_LoadSources(),l_this->m__idx(bbInt(0)),bbString{});
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"get",3),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda12));
  struct lambda13 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      if((l_this->m__idx(bbInt(0))!=bbString(L"monkey2",7))){
        struct f2_t : public bbGCFrame{
          t_std_json_JsonObject* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f2{};
        g_APPLICATION_0WEEL_GetModule(f2.t0=g_APPLICATION_0WEEL_LoadSources(),l_this->m__idx(bbInt(0)),(bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER));
      }else{
        struct f2_t : public bbGCFrame{
          t_m2ci_M2CI* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f2{};
        g_m2git_GitBranch(bbString(L"https://github.com/blitz-research/monkey2",41),bbString(L"monkey2",7));
        bbString l_curDir=g_std_filesystem_CurrentDir();
        g_APPLICATION_0WEEL_PROC.get()->m_MX2CC=(g_std_filesystem_CurrentDir()+bbString(L"/monkey2/bin/mx2cc_linux",24));
        g_std_filesystem_ChangeDir(bbString(L"monkey2/",8));
        system_utf8(bbCString(bbString(L"chmod 755 bin/mx2cc_linux && echo \"Activating compiler.\"",56)));
        system_utf8(bbCString(bbString(L"chmod 755 scripts/*.sh && echo \"Activating shell scripts.\"",58)));
        g_APPLICATION_0WEEL_PROC.get()->m_MX2CC=(g_std_filesystem_CurrentDir()+bbString(L"bin/mx2cc_linux",15));
        (f2.t0=g_APPLICATION_0WEEL_PROC.get())->m_RebuildMX2CC(true);
        (f2.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,false,g_m2ci_M2CI_GetHost());
        (f2.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,true,g_m2ci_M2CI_GetHost());
        (f2.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs();
        g_std_filesystem_ChangeDir(l_curDir);
      }
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"install",7),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda13));
  struct lambda14 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_std_json_JsonObject* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbString l_oldMod=(((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_this->m__idx(bbInt(0)));
      if(g_APPLICATION_0WEEL_FileExists(l_oldMod)){
        g_std_filesystem_DeleteDir(l_oldMod,true);
      }
      g_APPLICATION_0WEEL_GetModule(f1.t0=g_APPLICATION_0WEEL_LoadSources(),l_this->m__idx(bbInt(0)),(bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER));
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"reinstall",9),1,f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda14));
  struct lambda15 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbString l_curDir=g_std_filesystem_CurrentDir();
      g_std_filesystem_ChangeDir((bbFileSystem::appDir()+bbString(L"../",3)));
      system_utf8(bbCString(bbString(L"chmod +x bin/mx2cc_linux && echo \"Activating compiler.\"",55)));
      system_utf8(bbCString(bbString(L"chmod +x scripts/*.sh && echo \"Activating shell scripts.\"",57)));
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_RebuildMX2CC(true);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,false,g_m2ci_M2CI_GetHost());
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,true,g_m2ci_M2CI_GetHost());
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs();
      g_std_filesystem_ChangeDir(l_curDir);
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"setup",5),bbInt(0),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda15));
  struct lambda16 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      struct f1_t : public bbGCFrame{
        t_m2ci_M2CI* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      if(!g_APPLICATION_0WEEL_FileExists((bbFileSystem::appDir()+bbString(L"tmp",3)))){
        g_std_filesystem_CreateDir((bbFileSystem::appDir()+bbString(L"tmp",3)),true,true);
      }
      if(g_APPLICATION_0WEEL_FileExists((bbFileSystem::appDir()+bbString(L"tmp/monkey2",11)))){
        g_std_filesystem_DeleteDir((bbFileSystem::appDir()+bbString(L"tmp/monkey2",11)),true);
      }
      g_std_filesystem_ChangeDir((bbFileSystem::appDir()+bbString(L"tmp",3)));
      g_m2git_GitBranch(bbString(L"https://github.com/blitz-research/monkey2",41),bbString(L"monkey2",7));
      g_std_filesystem_ChangeDir((bbFileSystem::appDir()+bbString(L"../../",6)));
      g_std_filesystem_CopyDir(bbString(L"bin/tmp/monkey2",15),bbString(L"monkey",6),true);
      g_std_filesystem_ChangeDir(bbFileSystem::appDir());
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_RebuildMX2CC(true);
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,false,g_m2ci_M2CI_GetHost());
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(bbString{},true,true,g_m2ci_M2CI_GetHost());
      (f1.t0=g_APPLICATION_0WEEL_PROC.get())->m_BuildDocs();
      if(g_APPLICATION_0WEEL_FileExists((bbFileSystem::appDir()+bbString(L"tmp/monkey2",11)))){
        g_std_filesystem_DeleteDir((bbFileSystem::appDir()+bbString(L"tmp/monkey2",11)),true);
      }
    }
    void gcMark(){
    }
  };
  f0.l_OPTIONS->m_Add(bbString(L"update",6),bbInt(0),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda16));
  struct lambda17 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bb_print(bbString(L"usage: weel [--help] [new <template> <name>] [get <package>] [install <package>] [reinstall <package>]",102));
      bb_print(bbString(L"            [build <project> <platform>] [buildr <project> <platform>] [buildmod <module> <platform>]",101));
      bb_print(bbString(L"            [buildmods] [rebuildmod <module> <platform>] [rebuildmods] [info <module>] [check <module>]",103));
      bb_print(bbString(L"            [builddocs] [builddoc <module>] [setup] [update]",60));
      bb_print(bbString{});
      bb_print(bbString(L"<template> = [empty] [console] [gui] [2d] [3d] [module]",55));
      bb_print(bbString(L"<platform> = [windows] [macos] [linux] [android] [ios] [wasm] [emscripten]",74));
      bb_print(bbString(L"\n\n[setup] - Builds Monkey2 from source, activates 'scripts/' folder, builds all modules/documentation.",102));
      bb_print(bbString(L"\n[update] - Updates Monkey2 to the latest version and rebuilds mx2cc, all modules and documentation.",100));
      bb_print(bbString(L"\n[new <template> <name>] - Creates a new project folder and project configuration file.",87));
      bb_print(bbString(L"\n[get <package>] - Downloads a package from the repository into your working directory.",87));
      bb_print(bbString(L"\n[install <package>] - Downloads target module package into the main 'modules' folder.",86));
      bb_print(bbString(L"\n[reinstall <package>] - Removes old module and re-downloads target module package.",83));
      bb_print(bbString(L"\n[build <project> <platform>] - Builds project in *debug* mode for specified platform.",86));
      bb_print(bbString(L"\n[buildr <project> <platform>] - Builds target project in *release* mode.",73));
      bb_print(bbString(L"\n[buildmod <module> <platform>] - Builds module and its documentation in debug and release mode.",96));
      bb_print(bbString(L"\n[buildmods] - Builds all installed modules for target platform",63));
      bb_print(bbString(L"\n[rebuildmod <module> <platform>] - Cleans and builds target module.",68));
      bb_print(bbString(L"\n[rebuildmods] - Cleans and rebuilds *ALL* existing modules.",60));
      bb_print(bbString(L"\n[builddoc <module>] - Assemles documentation for given module.",63));
      bb_print(bbString(L"\n[builddocs - Assemles *ALL* documentation for *ALL* modules.",61));
      bb_print(bbString(L"\n[check <module>] - Checks target modules existence and validity.",65));
      bb_print(bbString(L"\n[info <module>] - Displays module information from the modules conf.",69));
      bb_print(bbString(L"\n[update] - Updates Monkey2 from GIT and rebuilds mx2cc, all modules, and documentation.",88));
    }
    void gcMark(){
    }
  };
  f0.l__0help=bbFunction<void(t_std_optionset_Option*)>(new lambda17);
  f0.l_OPTIONS->m_Add(bbString(L"help",4),bbInt(0),f0.l__0help);
  f0.l_OPTIONS->m_Add(bbString(L"-h",2),bbInt(0),f0.l__0help);
  if(((f0.t0=bbFileSystem::appArgs()).length()>1)){
    f0.l_OPTIONS->m_Parse();
  }else{
    struct f1_t : public bbGCFrame{
      t_std_optionset_Option* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
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
