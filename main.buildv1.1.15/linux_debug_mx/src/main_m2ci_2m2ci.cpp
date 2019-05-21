
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2ci_2m2ci.h"

#include "libc/libc.buildv1.1.15/linux_debug_mx/include/libc_libc.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2stp_2m2stp.h"

extern bbString g_std_filesystem_CurrentDir();
extern bbString g_std_filesystem_StripExt(bbString l_path);
void t_m2ci_M2CI::dbEmit(){
  puts( "[m2ci.M2CI]");
  bbDBEmit("MX2CC",&m_MX2CC);
}

t_m2ci_M2CI::t_m2ci_M2CI(){
  bbDBFrame db_f{"new:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2ci/m2ci.monkey2"};
  t_m2ci_M2CI*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(69635);
  this->m_MX2CC=bbString(L"mx2cc_linux",11);
}
t_m2ci_M2CI::~t_m2ci_M2CI(){
}

void t_m2ci_M2CI::m_RebuildMX2CC(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RebuildMX2CC:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2ci/m2ci.monkey2"};
  t_m2ci_M2CI*self=this;
  bbDBLocal("Self",&self);
}

void t_m2ci_M2CI::m_BuildProject(bbString l_mainFileName,bbBool l_clean,bbBool l_release,bbBool l_gui,bbString l_target,bbString l_name){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString* l_code{};
    void gcMark(){
      bbGCMark(l_code);
    }
  }f0{};
  bbDBFrame db_f{"BuildProject:Void(mainFileName:monkey.types.String,clean:monkey.types.Bool,release:monkey.types.Bool,gui:monkey.types.Bool,target:monkey.types.String,name:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2ci/m2ci.monkey2"};
  t_m2ci_M2CI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("mainFileName",&l_mainFileName);
  bbDBLocal("clean",&l_clean);
  bbDBLocal("release",&l_release);
  bbDBLocal("gui",&l_gui);
  bbDBLocal("target",&l_target);
  bbDBLocal("name",&l_name);
  bbDBStmt(163848);
  bbString l_cmd=((((this->m_MX2CC+bbString(L" makeapp -apptype=%TYPE% -build -config=%MODE% -target=%TARGET% -product=",73))+g_std_filesystem_CurrentDir())+bbString(L"%MAIN%",6))+bbString(L".products/%PRODUCT%/%NAME% %PATH%",33));
  bbDBLocal("cmd",&l_cmd);
  bbDBStmt(167944);
  f0.l_code=bbGCNew<t_m2stp_StpString>(true);
  bbDBLocal("code",&f0.l_code);
  bbDBStmt(172034);
  f0.l_code->m_SetVar(bbString(L"NAME",4),l_name);
  bbDBStmt(176130);
  f0.l_code->m_SetVar(bbString(L"TARGET",6),l_target);
  bbDBStmt(180226);
  f0.l_code->m_SetVar(bbString(L"PRODUCT",7),l_target.capitalize());
  bbDBStmt(184322);
  f0.l_code->m_SetVar(bbString(L"TYPE",4),(l_gui ? bbString(L"gui",3) : bbString(L"console",7)));
  bbDBStmt(188418);
  f0.l_code->m_SetVar(bbString(L"MODE",4),(l_release ? bbString(L"release",7) : bbString(L"debug",5)));
  bbDBStmt(192514);
  f0.l_code->m_SetVar(bbString(L"MAIN",4),g_std_filesystem_StripExt(l_mainFileName));
  bbDBStmt(196610);
  f0.l_code->m_SetVar(bbString(L"PATH",4),l_mainFileName);
  bbDBStmt(204802);
  system_utf8(bbCString(f0.l_code->m_Format(l_cmd)));
}

void t_m2ci_M2CI::m_BuildModules(bbString l_mods,bbBool l_clean,bbBool l_release,bbString l_target){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString* l_code{};
    void gcMark(){
      bbGCMark(l_code);
    }
  }f0{};
  bbDBFrame db_f{"BuildModules:Void(mods:monkey.types.String,clean:monkey.types.Bool,release:monkey.types.Bool,target:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2ci/m2ci.monkey2"};
  t_m2ci_M2CI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("mods",&l_mods);
  bbDBLocal("clean",&l_clean);
  bbDBLocal("release",&l_release);
  bbDBLocal("target",&l_target);
  bbDBStmt(114696);
  bbString l_cmd=(this->m_MX2CC+bbString(L" makemods %CLEAN% -target=%TARGET% -config=%MODE% %MODS%",56));
  bbDBLocal("cmd",&l_cmd);
  bbDBStmt(118792);
  f0.l_code=bbGCNew<t_m2stp_StpString>(true);
  bbDBLocal("code",&f0.l_code);
  bbDBStmt(122882);
  f0.l_code->m_SetVar(bbString(L"CLEAN",5),(l_clean ? bbString(L"-clean",6) : bbString{}));
  bbDBStmt(126978);
  f0.l_code->m_SetVar(bbString(L"TARGET",6),l_target);
  bbDBStmt(131074);
  f0.l_code->m_SetVar(bbString(L"MODE",4),(l_release ? bbString(L"release",7) : bbString(L"debug",5)));
  bbDBStmt(135170);
  f0.l_code->m_SetVar(bbString(L"MODS",4),l_mods);
  bbDBStmt(139266);
  system_utf8(bbCString(f0.l_code->m_Format(l_cmd)));
}

void t_m2ci_M2CI::m_BuildDocs(bbString l_modules){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"BuildDocs:Void(modules:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2ci/m2ci.monkey2"};
  t_m2ci_M2CI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("modules",&l_modules);
  bbDBStmt(237570);
  system_utf8(bbCString(((this->m_MX2CC+bbString(L" makedocs ",10))+l_modules)));
}

void t_m2ci_M2CI::m_BuildDocs(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"BuildDocs:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2ci/m2ci.monkey2"};
  t_m2ci_M2CI*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(221186);
  system_utf8(bbCString((this->m_MX2CC+bbString(L" makedocs ",10))));
}
bbString bbDBType(t_m2ci_M2CI**){
  return "m2ci.M2CI";
}
bbString bbDBValue(t_m2ci_M2CI**p){
  return bbDBObjectValue(*p);
}

void mx2_main_m2ci_2m2ci_init_f(){
}
