
#include "main.buildv1.1.15/linux_release_mx/include/main_templates.h"

#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2m2stp.h"

extern bbBool g_std_filesystem_CopyDir(bbString l_srcDir,bbString l_dstDir,bbBool l_recursive);
extern bbString g_std_filesystem_CurrentDir();
extern bbBool g_APPLICATION_0WEEL_ElementExists_1s(bbArray<bbString> l_collection,bbString l_element);
extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
extern bbArray<bbString> g_std_filesystem_LoadDir(bbString l_path);
extern bbString g_std_stringio_LoadString(bbString l_path,bbBool l_fixeols);
extern bbBool g_std_stringio_SaveString(bbString l_str,bbString l_path,bbBool l_fixeols);
void g_APPLICATION_0WEEL_GenerateTemplate(bbString l_name,bbString l_type){
  bbString l_projectDir=(g_std_filesystem_CurrentDir()+l_name);
  bbString l_typeDir=(bbString(L"asset::templates/",17)+l_type);
  if(!g_APPLICATION_0WEEL_FileExists(l_projectDir)){
    struct f1_t : public bbGCFrame{
      bbArray<bbString> l_projectFiles{};
      bbArray<bbString> t0{};
      void gcMark(){
        bbGCMark(l_projectFiles);
        bbGCMark(t0);
      }
    }f1{};
    if(!g_APPLICATION_0WEEL_ElementExists_1s(f1.t0=g_std_filesystem_LoadDir(bbString(L"asset::templates/",17)),l_type)){
      bb_print(((bbString(L"Template '",10)+l_type)+bbString(L"' doesn't exist.",16)));
      return;
    }
    if(!g_std_filesystem_CopyDir(l_typeDir,l_projectDir,true)){
      bb_print((bbString(L"Couldn't create Project: ",25)+l_name));
      return;
    }
    f1.l_projectFiles=g_std_filesystem_LoadDir(l_projectDir);
    {
      bbInt l_0=bbInt(0);
      bbInt l_1=f1.l_projectFiles.length();
      for(;(l_0<l_1);l_0+=1){
        struct f3_t : public bbGCFrame{
          t_m2stp_StpString* l_code{};
          void gcMark(){
            bbGCMark(l_code);
          }
        }f3{};
        bbString l_file=f1.l_projectFiles[l_0];
        f3.l_code=bbGCNew<t_m2stp_StpString>(true);
        if((l_file==bbString(L"main.monkey2",12))){
          f3.l_code->m_SetVar(bbString(L"APPLICATION_NAME",16),l_name.toUpper());
          g_std_stringio_SaveString(f3.l_code->m_Format(g_std_stringio_LoadString(((l_projectDir+bbString(L"/",1))+l_file),false)),(l_projectDir+bbString(L"/main.monkey2",13)),false);
        }else if((l_file==bbString(L"module.monkey2",14))){
          f3.l_code->m_SetVar(bbString(L"MODULE_NAME",11),l_name);
          g_std_stringio_SaveString(f3.l_code->m_Format(g_std_stringio_LoadString(((l_projectDir+bbString(L"/",1))+l_file),false)),(((l_projectDir+bbString(L"/",1))+l_name)+bbString(L".monkey2",8)),false);
        }else if((l_file==bbString(L"module.json",11))){
          f3.l_code->m_SetVar(bbString(L"MODULE_NAME",11),l_name);
          g_std_stringio_SaveString(f3.l_code->m_Format(g_std_stringio_LoadString(((l_projectDir+bbString(L"/",1))+l_file),false)),(l_projectDir+bbString(L"/module.json",12)),false);
        }else if((l_file==bbString(L"project.json",12))){
          f3.l_code->m_SetVar(bbString(L"NAME",4),l_name);
          g_std_stringio_SaveString(f3.l_code->m_Format(g_std_stringio_LoadString(((l_projectDir+bbString(L"/",1))+l_file),false)),(l_projectDir+bbString(L"/project.json",13)),false);
        }
      }
    }
  }else{
    bb_print(((bbString(L"Project '",9)+l_name)+bbString(L"' already exists",16)));
  }
}

void mx2_main_templates_init_f(){
}
