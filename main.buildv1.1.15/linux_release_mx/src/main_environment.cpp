
#include "main.buildv1.1.15/linux_release_mx/include/main_environment.h"

#include "libc/libc.buildv1.1.15/linux_release_mx/include/libc_libc.h"
#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_filesystem_2filesystem.h"

void g_APPLICATION_0WEEL_GetTed2Go(){
}

void g_APPLICATION_0WEEL_UpdateMonkey2(){
  bbString l_curDir=g_std_filesystem_CurrentDir();
  g_std_filesystem_ChangeDir(bbFileSystem::appDir());
  g_std_filesystem_ChangeDir(bbString(L"../",3));
  system_utf8(bbCString(bbString(L"git pull develop",16)));
  g_std_filesystem_ChangeDir(bbString(L"scripts/",8));
  system_utf8(bbCString(bbString(L"./updatemx2cc.sh",16)));
  system_utf8(bbCString(bbString(L"./updatemods.sh",15)));
  system_utf8(bbCString(bbString(L"./makedocs.sh",13)));
  g_std_filesystem_ChangeDir(l_curDir);
  bb_print(bbString(L"Done.",5));
}

void mx2_main_environment_init_f(){
}
