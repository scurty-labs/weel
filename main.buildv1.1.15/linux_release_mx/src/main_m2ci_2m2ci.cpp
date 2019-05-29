
#include "main.buildv1.1.15/linux_release_mx/include/main_m2ci_2m2ci.h"

#include "libc/libc.buildv1.1.15/linux_release_mx/include/libc_libc.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_filesystem_2filesystem.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2m2stp.h"

bbString g_m2ci_M2CI_GetHost(){
  bbString l_platform{};
  l_platform=bbString(L"Linux",5);
  return l_platform;
}

t_m2ci_M2CI::t_m2ci_M2CI(){
  this->m_MX2CC=bbString(L"mx2cc_linux",11);
}
t_m2ci_M2CI::~t_m2ci_M2CI(){
}

void t_m2ci_M2CI::m_RebuildMX2CC(bbBool l_clean){
  bbString l_host=g_m2ci_M2CI_GetHost().toLower();
  this->m_BuildModules(bbString(L"monkey libc miniz stb-image stb-image-write stb-vorbis zlib",59),l_clean,true,l_host);
  bbString l_curDir=g_std_filesystem_CurrentDir();
  g_std_filesystem_ChangeDir((bbFileSystem::appDir()+bbString(L"../src/mx2cc/",13)));
  this->m_BuildProject(bbString(L"mx2cc.monkey2",13),l_clean,true,false,l_host,bbString(L"mx2cc",5));
  bbFileSystem::copyFile(bbString(L"mx2cc.products/mx2cc",20),(bbString(L"../../bin/mx2cc_",16)+l_host));
  g_std_filesystem_ChangeDir(l_curDir);
}

void t_m2ci_M2CI::m_BuildProject(bbString l_mainFileName,bbBool l_clean,bbBool l_release,bbBool l_gui,bbString l_target,bbString l_name){
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString* l_code{};
    void gcMark(){
      bbGCMark(l_code);
    }
  }f0{};
  bbString l_cmd=((((this->m_MX2CC+bbString(L" makeapp -apptype=%TYPE% -build -config=%MODE% -target=%TARGET% -product=",73))+g_std_filesystem_CurrentDir())+bbString(L"%MAIN%",6))+bbString(L".products/%PRODUCT%/%NAME% %PATH%",33));
  f0.l_code=bbGCNew<t_m2stp_StpString>(true);
  f0.l_code->m_SetVar(bbString(L"NAME",4),l_name);
  f0.l_code->m_SetVar(bbString(L"TARGET",6),l_target);
  f0.l_code->m_SetVar(bbString(L"PRODUCT",7),l_target.capitalize());
  f0.l_code->m_SetVar(bbString(L"TYPE",4),(l_gui ? bbString(L"gui",3) : bbString(L"console",7)));
  f0.l_code->m_SetVar(bbString(L"MODE",4),(l_release ? bbString(L"release",7) : bbString(L"debug",5)));
  f0.l_code->m_SetVar(bbString(L"MAIN",4),g_std_filesystem_StripExt(l_mainFileName));
  f0.l_code->m_SetVar(bbString(L"PATH",4),l_mainFileName);
  system_utf8(bbCString(f0.l_code->m_Format(l_cmd)));
}

void t_m2ci_M2CI::m_BuildModules(bbString l_mods,bbBool l_clean,bbBool l_release,bbString l_target){
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString* l_code{};
    void gcMark(){
      bbGCMark(l_code);
    }
  }f0{};
  bbString l_cmd=(this->m_MX2CC+bbString(L" makemods %CLEAN% -target=%TARGET% -config=%MODE% %MODS%",56));
  f0.l_code=bbGCNew<t_m2stp_StpString>(true);
  f0.l_code->m_SetVar(bbString(L"CLEAN",5),(l_clean ? bbString(L"-clean",6) : bbString{}));
  f0.l_code->m_SetVar(bbString(L"TARGET",6),l_target);
  f0.l_code->m_SetVar(bbString(L"MODE",4),(l_release ? bbString(L"release",7) : bbString(L"debug",5)));
  f0.l_code->m_SetVar(bbString(L"MODS",4),l_mods);
  system_utf8(bbCString(f0.l_code->m_Format(l_cmd)));
}

void t_m2ci_M2CI::m_BuildDocs(bbString l_modules){
  system_utf8(bbCString(((this->m_MX2CC+bbString(L" makedocs ",10))+l_modules)));
}

void t_m2ci_M2CI::m_BuildDocs(){
  system_utf8(bbCString((this->m_MX2CC+bbString(L" makedocs ",10))));
}

void mx2_main_m2ci_2m2ci_init_f(){
}
