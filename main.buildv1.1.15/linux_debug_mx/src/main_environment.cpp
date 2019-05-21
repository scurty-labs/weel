
#include "main.buildv1.1.15/linux_debug_mx/include/main_environment.h"

#include "libc/libc.buildv1.1.15/linux_debug_mx/include/libc_libc.h"
#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"

extern void g_std_filesystem_ChangeDir(bbString l_path);
extern bbString g_std_filesystem_CurrentDir();
void g_APPLICATION_0WEEL_GetTed2Go(){
  bbDBFrame db_f{"GetTed2Go:Void()","/home/scott/Documents/Monkey/Projects/weel2/environment.monkey2"};
}

void g_APPLICATION_0WEEL_UpdateMonkey2(){
  bbDBFrame db_f{"UpdateMonkey2:Void()","/home/scott/Documents/Monkey/Projects/weel2/environment.monkey2"};
  bbDBStmt(20487);
  bbString l_curDir=g_std_filesystem_CurrentDir();
  bbDBLocal("curDir",&l_curDir);
  bbDBStmt(28673);
  g_std_filesystem_ChangeDir(bbString(L"../",3));
  bbDBStmt(32769);
  system_utf8(bbCString(bbString(L"git pull -b develop --single-branch https://github.com/blitz-research/monkey2.git",81)));
  bbDBStmt(40961);
  g_std_filesystem_ChangeDir(bbString(L"scripts/",8));
  bbDBStmt(53249);
  system_utf8(bbCString(bbString(L"./updatemx2cc.sh",16)));
  bbDBStmt(57345);
  system_utf8(bbCString(bbString(L"./updatemods.sh",15)));
  bbDBStmt(61441);
  system_utf8(bbCString(bbString(L"./makedocs.sh",13)));
  bbDBStmt(69633);
  g_std_filesystem_ChangeDir(l_curDir);
  bbDBStmt(77825);
  bb_print(bbString(L"Done.",5));
}

void mx2_main_environment_init_f(){
}
