
#ifndef MX2_MAIN_M2GIT_2M2GIT_H
#define MX2_MAIN_M2GIT_2M2GIT_H

#include <bbmonkey.h>

void g_m2git_GitPull(bbString l_destination);
void g_m2git_GitClone(bbString l_link,bbBool l_limit,bbString l_destination);

#endif
