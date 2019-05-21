
#ifndef MX2_MAIN_MODULE_H
#define MX2_MAIN_MODULE_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"

BB_CLASS(t_std_collections_Stack_1Tt_std_json_JsonValue_2)

BB_CLASS(t_APPLICATION_0WEEL_ModuleConf)

void g_APPLICATION_0WEEL_WeelBuildModule(bbString l_name,bbBool l_clean,bbString l_target);

struct t_APPLICATION_0WEEL_ModuleConf : public bbObject{
  typedef t_APPLICATION_0WEEL_ModuleConf *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_APPLICATION_0WEEL_ModuleConf";}

  bbString m_Name{};
  bbString m_About{};
  bbString m_Author{};
  bbString m_Version{};
  bbGCVar<t_std_collections_Stack_1Tt_std_json_JsonValue_2> m_Depends{};

  void gcMark();

  t_APPLICATION_0WEEL_ModuleConf();
  ~t_APPLICATION_0WEEL_ModuleConf();

  void m_PrintInfo();
  bbBool m_LoadJson(bbString l_path);
};

#endif
