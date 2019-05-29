
#include "main.buildv1.1.15/linux_release_mx/include/main_module.h"

#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_filesystem_2filesystem.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2ci_2m2ci.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2conio_2m2conio.h"

extern bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;
extern bbGCVar<t_m2ci_M2CI> g_APPLICATION_0WEEL_PROC;

extern bbBool g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target);
extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
void g_APPLICATION_0WEEL_WeelBuildModule(bbString l_name,bbBool l_clean,bbString l_target){
  struct f0_t : public bbGCFrame{
    t_APPLICATION_0WEEL_ModuleConf* l_module{};
    void gcMark(){
      bbGCMark(l_module);
    }
  }f0{};
  f0.l_module=bbGCNew<t_APPLICATION_0WEEL_ModuleConf>();
  bbString l_modulePath=(((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_name);
  bb_print(l_modulePath);
  if(f0.l_module->m_LoadJson(l_modulePath)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Stack_1Tt_std_json_JsonValue_2* t0{};
      t_m2ci_M2CI* t1{};
      void gcMark(){
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    g_APPLICATION_0WEEL_CheckDependencies(f1.t0=f0.l_module->m_Depends.get(),l_target);
    (f1.t1=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(l_name,l_clean,false,l_target);
    (f1.t1=g_APPLICATION_0WEEL_PROC.get())->m_BuildModules(l_name,l_clean,true,l_target);
  }else{
    bb_print(bbString(L"Couldn't load 'module.json'",27));
  }
}

void t_APPLICATION_0WEEL_ModuleConf::gcMark(){
  bbGCMark(m_Depends);
}

t_APPLICATION_0WEEL_ModuleConf::t_APPLICATION_0WEEL_ModuleConf(){
}
t_APPLICATION_0WEEL_ModuleConf::~t_APPLICATION_0WEEL_ModuleConf(){
}

void t_APPLICATION_0WEEL_ModuleConf::m_PrintInfo(){
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
  g_m2conio_Console.m_Write(bbString(L"--- MODULE INFO ---\n",20),false);
  g_m2conio_Console.m_Write(bbString(L"Name: ",6),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Blue);
  g_m2conio_Console.m_Write((this->m_Name+bbString(L"\n",1)),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
  g_m2conio_Console.m_Write(bbString(L"Authors: ",9),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Blue);
  g_m2conio_Console.m_Write((this->m_Author+bbString(L"\n",1)),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
  g_m2conio_Console.m_Write(bbString(L"Version: ",9),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Blue);
  g_m2conio_Console.m_Write((this->m_Version+bbString(L"\n",1)),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
  g_m2conio_Console.m_Write(bbString(L"Dependencies: ",14),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Blue);
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_Stack_1Tt_std_json_JsonValue_2_Iterator l_0{};
      t_std_collections_Stack_1Tt_std_json_JsonValue_2* t0{};
      void gcMark(){
        bbGCMark(l_0);
        bbGCMark(t0);
      }
    }f1{};
    f1.l_0=(f1.t0=this->m_Depends.get())->m_All();
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_std_json_JsonValue* l_d{};
        void gcMark(){
          bbGCMark(l_d);
        }
      }f2{};
      f2.l_d=f1.l_0.m_Current();
      g_m2conio_Console.m_Write((f2.l_d->m_ToString()+bbString(L" ",1)),false);
    }
  }
  g_m2conio_Console.m_Write(bbString(L"\n",1),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
  g_m2conio_Console.m_Write(bbString(L"\n- DESCRIPTION - \n",18),false);
  g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Blue);
  g_m2conio_Console.m_Write((this->m_About+bbString(L"\n",1)),false);
}

bbBool t_APPLICATION_0WEEL_ModuleConf::m_LoadJson(bbString l_path){
  bbBool l_result=false;
  if(g_APPLICATION_0WEEL_FileExists((l_path+bbString(L"/module.json",12)))){
    struct f1_t : public bbGCFrame{
      t_std_json_JsonObject* l_obj{};
      t_std_json_JsonValue* t0{};
      void gcMark(){
        bbGCMark(l_obj);
        bbGCMark(t0);
      }
    }f1{};
    f1.l_obj=g_std_json_JsonObject_Load((l_path+bbString(L"/module.json",12)),true);
    this->m_Name=(f1.t0=f1.l_obj->m__idx(bbString(L"module",6)))->m_ToString();
    this->m_About=(f1.t0=f1.l_obj->m__idx(bbString(L"about",5)))->m_ToString();
    this->m_Version=(f1.t0=f1.l_obj->m__idx(bbString(L"version",7)))->m_ToString();
    this->m_Author=(f1.t0=f1.l_obj->m__idx(bbString(L"author",6)))->m_ToString();
    this->m_Depends=(f1.t0=f1.l_obj->m__idx(bbString(L"depends",7)))->m_ToArray();
    l_result=true;
  }
  return l_result;
}

void mx2_main_module_init_f(){
}
