
#ifndef MX2_MAIN_M2STP_2M2STP_H
#define MX2_MAIN_M2STP_2M2STP_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"

BB_CLASS(t_std_collections_Map_1sTt_m2stp_StpString_Func_2)
BB_CLASS(t_std_collections_Map_1ss)
BB_CLASS(t_std_collections_Stack_1s)

BB_CLASS(t_m2stp_StpString)
BB_CLASS(t_m2stp_StpString_Func)

struct t_m2stp_StpString : public bbObject{
  typedef t_m2stp_StpString *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2stp_StpString";}

  bbString m__0escSymbol{};
  bbString m__0conLeftSymbol{};
  bbString m__0conRightSymbol{};
  bbString m__0varSymbol{};
  bbString m__0funcSymbol{};
  bbString m__0funcParamSepSymbol{};
  bbString m__0funcParamLeftSymbol{};
  bbString m__0funcParamRightSymbol{};
  bbString m__0result{};
  bbGCVar<t_std_collections_Map_1sTt_m2stp_StpString_Func_2> m__0funcs{};
  bbGCVar<t_std_collections_Map_1ss> m__0vars{};
  bbString m__0f_0string{};

  void init();

  void gcMark();
  void dbEmit();

  t_m2stp_StpString(bbBool l_loadBase);
  ~t_m2stp_StpString();

  bbString m_to_s();
  void m_SetVar(bbString l_name,bbString l_v);
  void m_LoadBase();
  bbString m_GetVar(bbString l_name);
  bbString m_FormatVar(bbString l_str);
  bbString m_FormatFunc(bbString l_str);
  bbString m_Format(bbString l_str);
  bbBool m_ContainsFunc(bbString l_str);
  bbString m_CleanEsc(bbString l_str);
  bbString m_CallFunc(bbString l_name,t_std_collections_Stack_1s* l_param);
  void m_AddFunc(bbString l_name,t_m2stp_StpString_Func* l_f);

  t_m2stp_StpString(){
    init();
  }
};

struct t_m2stp_StpString_Func : public bbObject{
  typedef t_m2stp_StpString_Func *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2stp_StpString_Func";}

  void dbEmit();

  ~t_m2stp_StpString_Func();

  virtual bbString m_OnCall(t_std_collections_Stack_1s* l_param);

  t_m2stp_StpString_Func(){
  }
};

#endif
