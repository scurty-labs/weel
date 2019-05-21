
#include "main.buildv1.1.15/linux_debug_mx/include/main_funcs.h"

#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"

BB_ENUM(t_std_filesystem_FileType)

extern t_std_filesystem_FileType g_std_filesystem_GetFileType(bbString l_path);
bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path){
  bbDBFrame db_f{"FileExists:monkey.types.Bool(path:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/funcs.monkey2"};
  bbDBLocal("path",&l_path);
  bbDBStmt(16385);
  return ((g_std_filesystem_GetFileType(l_path)!=t_std_filesystem_FileType(0)) ? true : false);
}

bbBool g_APPLICATION_0WEEL_ElementExists_1s(bbArray<bbString> l_collection,bbString l_element){
  bbDBFrame db_f{"ElementExists<monkey.types.String>:monkey.types.Bool(collection:monkey.types.String[],element:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/funcs.monkey2"};
  bbDBLocal("collection",&l_collection);
  bbDBLocal("element",&l_element);
  bbDBStmt(32775);
  bbBool l_result=false;
  bbDBLocal("result",&l_result);
  bbDBStmt(36865);
  {
    bbDBLoop db_loop;
    bbInt l_0=bbInt(0);
    bbDBLocal("0",&l_0);
    bbInt l_1=l_collection.length();
    bbDBLocal("1",&l_1);
    for(;(l_0<l_1);l_0+=1){
      bbDBBlock db_blk;
      bbString l_el=l_collection[l_0];
      bbDBLocal("el",&l_el);
      bbDBStmt(40962);
      if((l_el==l_element)){
        bbDBBlock db_blk;
        l_result=true;
      }
    }
  }
  bbDBStmt(49153);
  return l_result;
}

void mx2_main_funcs_init_f(){
}
