
#include "main.buildv1.1.15/linux_release_mx/include/main_funcs.h"

#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"

BB_ENUM(t_std_filesystem_FileType)

extern t_std_filesystem_FileType g_std_filesystem_GetFileType(bbString l_path);
bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path){
  return ((g_std_filesystem_GetFileType(l_path)!=t_std_filesystem_FileType(0)) ? true : false);
}

bbBool g_APPLICATION_0WEEL_ElementExists_1s(bbArray<bbString> l_collection,bbString l_element){
  bbBool l_result=false;
  {
    bbInt l_0=bbInt(0);
    bbInt l_1=l_collection.length();
    for(;(l_0<l_1);l_0+=1){
      bbString l_el=l_collection[l_0];
      if((l_el==l_element)){
        l_result=true;
      }
    }
  }
  return l_result;
}

void mx2_main_funcs_init_f(){
}
