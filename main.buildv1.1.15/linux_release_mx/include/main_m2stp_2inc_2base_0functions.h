
#ifndef MX2_MAIN_M2STP_2INC_2BASE_0FUNCTIONS_H
#define MX2_MAIN_M2STP_2INC_2BASE_0FUNCTIONS_H

#include <bbmonkey.h>

#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2m2stp.h"

BB_CLASS(t_std_collections_Stack_1s)

BB_CLASS(t_m2stp_StpAdd)
BB_CLASS(t_m2stp_StpSub)
BB_CLASS(t_m2stp_StpDiv)
BB_CLASS(t_m2stp_StpMul)

struct t_m2stp_StpAdd : public t_m2stp_StpString_Func{
  typedef t_m2stp_StpAdd *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2stp_StpAdd";}

  ~t_m2stp_StpAdd();

  bbString m_OnCall(t_std_collections_Stack_1s* l_param);

  t_m2stp_StpAdd(){
  }
};

struct t_m2stp_StpSub : public t_m2stp_StpString_Func{
  typedef t_m2stp_StpSub *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2stp_StpSub";}

  ~t_m2stp_StpSub();

  bbString m_OnCall(t_std_collections_Stack_1s* l_param);

  t_m2stp_StpSub(){
  }
};

struct t_m2stp_StpDiv : public t_m2stp_StpString_Func{
  typedef t_m2stp_StpDiv *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2stp_StpDiv";}

  ~t_m2stp_StpDiv();

  bbString m_OnCall(t_std_collections_Stack_1s* l_param);

  t_m2stp_StpDiv(){
  }
};

struct t_m2stp_StpMul : public t_m2stp_StpString_Func{
  typedef t_m2stp_StpMul *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2stp_StpMul";}

  ~t_m2stp_StpMul();

  bbString m_OnCall(t_std_collections_Stack_1s* l_param);

  t_m2stp_StpMul(){
  }
};

#endif
