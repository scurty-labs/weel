
#include "main.buildv1.1.15/linux_debug_mx/include/main_package.h"

#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_filesystem_2filesystem.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2conio_2m2conio.h"

extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
extern void g_m2git_GitClone(bbString l_link,bbBool l_limit,bbString l_destination);
extern void g_APPLICATION_0WEEL_WeelBuildModule(bbString l_name,bbBool l_clean,bbString l_target);
bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;

void g_APPLICATION_0WEEL_GetModule(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_destination){
  struct f0_t : public bbGCFrame{
    t_std_json_JsonValue* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"GetModule:Void(sources:std.json.JsonObject,name:monkey.types.String,destination:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/package.monkey2"};
  bbDBLocal("sources",&l_sources);
  bbDBLocal("name",&l_name);
  bbDBLocal("destination",&l_destination);
  bbDBStmt(311297);
  bb_print(bbString(L"Checking...",11));
  bbDBStmt(315393);
  if(!l_sources->m_Contains(l_name)){
    bbDBBlock db_blk;
    bbDBStmt(319490);
    bb_print(((bbString(L"Module '",8)+l_name)+bbString(L"' not found in repository",25)));
    bbDBStmt(323586);
    return;
  }
  bbDBStmt(335873);
  bb_print(bbString(L"Downloading...",14));
  bbDBStmt(339975);
  bbString l_link=(f0.t0=l_sources->m__idx(l_name))->m_ToString();
  bbDBLocal("link",&l_link);
  bbDBStmt(348161);
  bb_print(bbString(L"...",3));
  bbDBStmt(356359);
  bbString l_curDir=g_std_filesystem_CurrentDir();
  bbDBLocal("curDir",&l_curDir);
  bbDBStmt(360449);
  if((l_destination.length()>bbInt(0))){
    bbDBBlock db_blk;
    g_std_filesystem_ChangeDir(l_destination);
  }
  bbDBStmt(368641);
  g_m2git_GitClone(l_link,true,bbString{});
  bbDBStmt(376833);
  if((l_destination.length()>bbInt(0))){
    bbDBBlock db_blk;
    g_std_filesystem_ChangeDir(l_curDir);
  }
  bbDBStmt(380929);
  bb_print(bbString(L"Finished",8));
}

void g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target){
  struct f0_t : public bbGCFrame{
    t_std_json_JsonObject* l_sources{};
    void gcMark(){
      bbGCMark(l_sources);
    }
  }f0{};
  bbDBFrame db_f{"CheckDependencies:Void(libs:std.collections.Stack<std.json.JsonValue>,target:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/package.monkey2"};
  bbDBLocal("libs",&l_libs);
  bbDBLocal("target",&l_target);
  bbDBStmt(118791);
  f0.l_sources=g_APPLICATION_0WEEL_LoadSources();
  bbDBLocal("sources",&f0.l_sources);
  bbDBStmt(122881);
  if((l_libs->m_Length()!=bbInt(0))){
    bbDBBlock db_blk;
    bbDBStmt(131074);
    bb_print(bbString(L"Checking Dependencies...",24));
    bbDBStmt(135170);
    {
      struct f2_t : public bbGCFrame{
        t_std_collections_Stack_1Tt_std_json_JsonValue_2_Iterator l_0{};
        void gcMark(){
          bbGCMark(l_0);
        }
      }f2{};
      bbDBLoop db_loop;
      f2.l_0=l_libs->m_All();
      bbDBLocal("0",&f2.l_0);
      for(;!f2.l_0.m_AtEnd();f2.l_0.m_Bump()){
        struct f3_t : public bbGCFrame{
          t_std_json_JsonValue* l_lib{};
          void gcMark(){
            bbGCMark(l_lib);
          }
        }f3{};
        bbDBBlock db_blk;
        f3.l_lib=f2.l_0.m_Current();
        bbDBLocal("lib",&f3.l_lib);
        bbDBStmt(139267);
        g_m2conio_Ansi.m_ResetColors();
        bbDBStmt(147465);
        bbString l_depend=f3.l_lib->m_ToString();
        bbDBLocal("depend",&l_depend);
        bbDBStmt(151561);
        bbString l__0listStr=((bbString(L"\t ",2)+l_depend)+bbString(L" - ",3));
        bbDBLocal("_listStr",&l__0listStr);
        bbDBStmt(159747);
        if(g_APPLICATION_0WEEL_ModuleInstalled(l_depend)){
          bbDBBlock db_blk;
          bbDBStmt(167940);
          g_m2conio_Console.m_Write(l__0listStr,false);
          bbDBStmt(172036);
          g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Blue);
          bbDBStmt(176132);
          g_m2conio_Console.m_Write(bbString(L"Ready\n",6),false);
        }else{
          bbDBStmt(184323);
          bbDBBlock db_blk;
          bbDBStmt(192516);
          g_m2conio_Console.m_Write(l__0listStr,false);
          bbDBStmt(196612);
          g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Red);
          bbDBStmt(200708);
          g_m2conio_Console.m_Write(bbString(L"Not Ready\n",10),false);
          bbDBStmt(204804);
          g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
          bbDBStmt(208900);
          g_m2conio_Console.m_Write(bbString{},false);
          bbDBStmt(217092);
          if(g_APPLICATION_0WEEL_ResolveDependency(f0.l_sources,l_depend,l_target)){
            bbDBBlock db_blk;
            bbDBStmt(225285);
            g_m2conio_Console.m_Write(l__0listStr,false);
            bbDBStmt(229381);
            g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_Green);
            bbDBStmt(233477);
            g_m2conio_Console.m_Write(bbString(L"Resolved\n",9),false);
          }else{
            bbDBStmt(241668);
            bbDBBlock db_blk;
            bbDBStmt(245765);
            g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
            bbDBStmt(249861);
            g_m2conio_Console.m_Write(bbString{},false);
            bbDBStmt(253957);
            bb_print(((bbString(L"WARNING: Couldn't resolve '",27)+l_depend)+bbString(L"'",1)));
          }
        }
        bbDBStmt(270339);
        g_m2conio_Ansi.m_Foreground(g_m2conio_AnsiHandler_Color_White);
        bbDBStmt(274435);
        g_m2conio_Console.m_Write(bbString{},false);
      }
    }
  }
}

bbBool g_APPLICATION_0WEEL_ResolveDependency(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_target){
  bbDBFrame db_f{"ResolveDependency:monkey.types.Bool(sources:std.json.JsonObject,name:monkey.types.String,target:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/package.monkey2"};
  bbDBLocal("sources",&l_sources);
  bbDBLocal("name",&l_name);
  bbDBLocal("target",&l_target);
  bbDBStmt(77831);
  bbBool l_ok=false;
  bbDBLocal("ok",&l_ok);
  bbDBStmt(81921);
  if(l_sources->m_Contains(l_name)){
    bbDBBlock db_blk;
    bbDBStmt(86018);
    g_APPLICATION_0WEEL_GetModule(l_sources,l_name,(bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER));
    bbDBStmt(90114);
    g_APPLICATION_0WEEL_WeelBuildModule(l_name,true,l_target);
    bbDBStmt(94210);
    l_ok=true;
  }
  bbDBStmt(102401);
  return l_ok;
}

bbBool g_APPLICATION_0WEEL_ModuleInstalled(bbString l_name){
  bbDBFrame db_f{"ModuleInstalled:monkey.types.Bool(name:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/package.monkey2"};
  bbDBLocal("name",&l_name);
  bbDBStmt(40961);
  if(g_APPLICATION_0WEEL_FileExists((((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_name))){
    bbDBBlock db_blk;
    bbDBStmt(45058);
    {
      struct f2_t : public bbGCFrame{
        bbArray<bbString> l_0{};
        void gcMark(){
          bbGCMark(l_0);
        }
      }f2{};
      bbDBLoop db_loop;
      f2.l_0=g_std_filesystem_LoadDir((((bbFileSystem::appDir()+g_APPLICATION_0WEEL_MODULE_0FOLDER)+bbString(L"/",1))+l_name));
      bbDBLocal("0",&f2.l_0);
      bbInt l_1=bbInt(0);
      bbDBLocal("1",&l_1);
      bbInt l_2=f2.l_0.length();
      bbDBLocal("2",&l_2);
      for(;(l_1<l_2);l_1+=1){
        bbDBBlock db_blk;
        bbString l_file=f2.l_0[l_1];
        bbDBLocal("file",&l_file);
        bbDBStmt(49155);
        if(l_file.contains(bbString(L".buildv",7))){
          bbDBBlock db_blk;
          return true;
        }
      }
    }
  }
  bbDBStmt(61441);
  return false;
}

t_std_json_JsonObject* g_APPLICATION_0WEEL_LoadSources(){
  bbDBFrame db_f{"LoadSources:std.json.JsonObject()","/home/scott/Documents/Monkey/Projects/weel2/package.monkey2"};
  bbDBStmt(24577);
  return g_std_json_JsonObject_Load(bbString(L"asset::sources.json",19),false);
}

void mx2_main_package_init_f(){
  g_APPLICATION_0WEEL_MODULE_0FOLDER=bbString(L"../modules",10);
}
