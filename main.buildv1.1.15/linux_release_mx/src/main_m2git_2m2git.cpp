
#include "main.buildv1.1.15/linux_release_mx/include/main_m2git_2m2git.h"

#include "libc/libc.buildv1.1.15/linux_release_mx/include/libc_libc.h"
#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2m2stp.h"

void g_m2git_GitBranch(bbString l_link,bbString l_destination){
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString* l_code{};
    void gcMark(){
      bbGCMark(l_code);
    }
  }f0{};
  f0.l_code=bbGCNew<t_m2stp_StpString>(true);
  static bbString g_cmd=bbString(L"git clone --single-branch %LINK% %DIR%",38);
  f0.l_code->m_SetVar(bbString(L"LINK",4),(l_link+bbString(L".git",4)));
  f0.l_code->m_SetVar(bbString(L"DIR",3),l_destination);
  system_utf8(bbCString(f0.l_code->m_Format(g_cmd)));
}

void g_m2git_GitClone(bbString l_link,bbBool l_depth,bbString l_destination){
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString* l_code{};
    void gcMark(){
      bbGCMark(l_code);
    }
  }f0{};
  f0.l_code=bbGCNew<t_m2stp_StpString>(true);
  static bbString g_cmd=bbString(L"git clone %LIMIT% %LINK% %DIR%",30);
  f0.l_code->m_SetVar(bbString(L"LINK",4),(l_link+bbString(L".git",4)));
  f0.l_code->m_SetVar(bbString(L"DIR",3),l_destination);
  f0.l_code->m_SetVar(bbString(L"LIMIT",5),(l_depth ? bbString(L"--depth 1",9) : bbString{}));
  system_utf8(bbCString(f0.l_code->m_Format(g_cmd)));
}

void mx2_main_m2git_2m2git_init_f(){
}
