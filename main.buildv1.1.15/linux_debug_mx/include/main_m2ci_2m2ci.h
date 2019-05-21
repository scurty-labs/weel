
#ifndef MX2_MAIN_M2CI_2M2CI_H
#define MX2_MAIN_M2CI_2M2CI_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"

BB_CLASS(t_m2ci_M2CI)

struct t_m2ci_M2CI : public bbObject{
  typedef t_m2ci_M2CI *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2ci_M2CI";}

  bbString m_MX2CC{};
  void dbEmit();

  t_m2ci_M2CI();
  ~t_m2ci_M2CI();

  void m_RebuildMX2CC();
  void m_BuildProject(bbString l_mainFileName,bbBool l_clean,bbBool l_release,bbBool l_gui,bbString l_target,bbString l_name);
  void m_BuildModules(bbString l_mods,bbBool l_clean,bbBool l_release,bbString l_target);
  void m_BuildDocs(bbString l_modules);
  void m_BuildDocs();
};

#endif
