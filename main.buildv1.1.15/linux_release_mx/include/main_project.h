
#ifndef MX2_MAIN_PROJECT_H
#define MX2_MAIN_PROJECT_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"

BB_CLASS(t_std_collections_Stack_1Tt_std_json_JsonValue_2)

BB_CLASS(t_APPLICATION_0WEEL_ProjectConf)

void g_APPLICATION_0WEEL_WeelBuildProject(bbString l_title,bbBool l_clean,bbBool l_release,bbString l_target);

struct t_APPLICATION_0WEEL_ProjectConf : public bbObject{
  typedef t_APPLICATION_0WEEL_ProjectConf *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_APPLICATION_0WEEL_ProjectConf";}

  bbString m_Directory{};
  bbString m_MainFileName{};
  bbString m_Name{};
  bbString m_Type{};
  bbGCVar<t_std_collections_Stack_1Tt_std_json_JsonValue_2> m_Depends{};
  bbString m_PreDebug{};
  bbString m_PostDebug{};
  bbString m_PreRelease{};
  bbString m_PostRelease{};

  void gcMark();

  t_APPLICATION_0WEEL_ProjectConf();
  ~t_APPLICATION_0WEEL_ProjectConf();

  bbBool m_LoadJson(bbString l_path);
};

#endif
