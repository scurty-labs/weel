
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2git_2m2git.h"

#include "libc/libc.buildv1.1.15/linux_debug_mx/include/libc_libc.h"
#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2stp_2m2stp.h"

extern void g_std_filesystem_ChangeDir(bbString l_path);
extern bbString g_std_filesystem_CurrentDir();
void g_m2git_GitPull(bbString l_destination){
  bbDBFrame db_f{"GitPull:Void(destination:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2git/m2git.monkey2"};
  bbDBLocal("destination",&l_destination);
  bbDBStmt(77831);
  bbString l_curDir=g_std_filesystem_CurrentDir();
  bbDBLocal("curDir",&l_curDir);
  bbDBStmt(81921);
  g_std_filesystem_ChangeDir(l_destination);
  bbDBStmt(86023);
  static bbString g_cmd=bbString(L"git clone -b develop --single-branch https://github.com/blitz-research/monkey2.git",82);
  bbDBStmt(90113);
  system_utf8(bbCString(g_cmd));
  bbDBStmt(94209);
  g_std_filesystem_ChangeDir(l_curDir);
}

void g_m2git_GitClone(bbString l_link,bbBool l_limit,bbString l_destination){
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString* l_code{};
    void gcMark(){
      bbGCMark(l_code);
    }
  }f0{};
  bbDBFrame db_f{"GitClone:Void(link:monkey.types.String,limit:monkey.types.Bool,destination:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2git/m2git.monkey2"};
  bbDBLocal("link",&l_link);
  bbDBLocal("limit",&l_limit);
  bbDBLocal("destination",&l_destination);
  bbDBStmt(36871);
  f0.l_code=bbGCNew<t_m2stp_StpString>(true);
  bbDBLocal("code",&f0.l_code);
  bbDBStmt(40967);
  static bbString g_cmd=bbString(L"git clone %LIMIT% %LINK% %DIR%",30);
  bbDBStmt(45057);
  f0.l_code->m_SetVar(bbString(L"LINK",4),(l_link+bbString(L".git",4)));
  bbDBStmt(49153);
  f0.l_code->m_SetVar(bbString(L"DIR",3),l_destination);
  bbDBStmt(53249);
  f0.l_code->m_SetVar(bbString(L"LIMIT",5),(l_limit ? bbString(L"--depth 1",9) : bbString{}));
  bbDBStmt(57345);
  system_utf8(bbCString(f0.l_code->m_Format(g_cmd)));
}

void mx2_main_m2git_2m2git_init_f(){
}
