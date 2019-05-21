
#include "main.buildv1.1.15/linux_release_mx/include/main_package.h"

#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_filesystem_2filesystem.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2conio_2m2conio.h"

extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
extern void g_m2git_GitClone(bbString l_link,bbBool l_depth,bbString l_destination);
extern void g_APPLICATION_0WEEL_WeelBuildModule(bbString l_name,bbBool l_clean,bbString l_target);
bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;

void g_APPLICATION_0WEEL_GetModule(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_destination){
  struct f0_t : public bbGCFrame{
    t_std_json_JsonValue* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bb_print(bbString(L"Checking...",11));
  if(!l_sources->m_Contains(l_name)){
    bb_print(((bbString(L"Module '",8)+l_name)+bbString(L"' not found in repository",25)));
    return;
  }
  bb_print(bbString(L"Downloading...",14));
  bbString l_link=(f0.t0=l_sources->m__idx(l_name))->m_ToString();
  bb_print(bbString(L"...",3));
  bbString l_curDir=g_std_filesystem_CurrentDir();
  if((l_destination.length()>bbInt(0))){
    g_std_filesystem_ChangeDir(l_destination);
  }
  g_m2git_GitClone(l_link,true,bbString{});
  if((l_destination.length()>bbInt(0))){
    g_std_filesystem_ChangeDir(l_curDir);
  }
  bb_print(bbString(L"Finished",8));
}

bbBool g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target){
  struct f0_t : public bbGCFrame{
    t_std_json_JsonObject* l_sources{};
    void gcMark(){
      bbGCMark(l_sources);
    }
  }f0{};
  bbBool l_isOk=true;
  f0.l_sources=g_APPLICATION_0WEEL_LoadSources();
  if((l_libs->m_Length()!=bbInt(0))){
    bb_print(bbString(L"Checking Dependencies...",24));
    {
      struct f2_t : public bbGCFrame{
        t_std_collections_Stack_1Tt_std_json_JsonValue_2_Iterator l_0{};
        void gcMark(){
          bbGCMark(l_0);
        }
      }f2{};
      f2.l_0=l_libs->m_All();
      for(;!f2.l_0.m_AtEnd();f2.l_0.m_Bump()){
        struct f3_t : public bbGCFrame{
          t_std_json_JsonValue* l_lib{};
          void gcMark(){
            bbGCMark(l_lib);
          }
        }f3{};
        f3.l_lib=f2.l_0.m_Current();
        g_m2conio_Ansi.m_ResetColors();
        bbString l_depend=f3.l_lib->m_ToString();
        bbString l__0listStr=((bbString(L"\t ",2)+l_depend)+bbString(L" - ",3));
        if(g_APPLICATION_0WEEL_ModuleInstalled(l_depend)){
          g_m2conio_Console.m_Write(l__0listStr,false);
          g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Blue);
          g_m2conio_Console.m_Write(bbString(L"Ready\n",6),false);
        }else{
          g_m2conio_Console.m_Write(l__0listStr,false);
          g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Red);
          g_m2conio_Console.m_Write(bbString(L"Not Ready\n",10),false);
          g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
          g_m2conio_Console.m_Write(bbString{},false);
          if(g_APPLICATION_0WEEL_ResolveDependency(f0.l_sources,l_depend,l_target)){
            g_m2conio_Console.m_Write(l__0listStr,false);
            g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Green);
            g_m2conio_Console.m_Write(bbString(L"Resolved\n",9),false);
          }else{
            g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
            g_m2conio_Console.m_Write(bbString{},false);
            bb_print(((bbString(L"WARNING: Couldn't resolve '",27)+l_depend)+bbString(L"'",1)));
            l_isOk=false;
          }
        }
        g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
        g_m2conio_Console.m_Write(bbString{},false);
      }
    }
  }
  return l_isOk;
}

bbBool g_APPLICATION_0WEEL_ResolveDependency(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_target){
  bbBool l_ok=false;
  if(l_sources->m_Contains(l_name)){
    g_APPLICATION_0WEEL_GetModule(l_sources,l_name,(bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER));
    g_APPLICATION_0WEEL_WeelBuildModule(l_name,true,l_target);
    l_ok=true;
  }
  return l_ok;
}

bbBool g_APPLICATION_0WEEL_ModuleInstalled(bbString l_name){
  if(g_APPLICATION_0WEEL_FileExists((((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_name))){
    struct f1_t : public bbGCFrame{
      bbArray<bbString> l_modDir{};
      void gcMark(){
        bbGCMark(l_modDir);
      }
    }f1{};
    f1.l_modDir=g_std_filesystem_LoadDir((((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_name));
    {
      bbInt l_0=bbInt(0);
      bbInt l_1=f1.l_modDir.length();
      for(;(l_0<l_1);l_0+=1){
        bbString l_file=f1.l_modDir[l_0];
        if(l_file.contains(bbString(L".buildv",7))){
          return true;
        }
      }
    }
  }
  return false;
}

t_std_json_JsonObject* g_APPLICATION_0WEEL_LoadSources(){
  return g_std_json_JsonObject_Load(bbString(L"asset::sources.json",19),false);
}

void mx2_main_package_init_f(){
  g_APPLICATION_0WEEL_MODULE_0FOLDER=bbString(L"../modules",10);
}
