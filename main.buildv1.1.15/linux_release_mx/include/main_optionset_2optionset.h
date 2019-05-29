
#ifndef MX2_MAIN_OPTIONSET_2OPTIONSET_H
#define MX2_MAIN_OPTIONSET_2OPTIONSET_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"

BB_CLASS(t_std_collections_Map_1sTt_std_optionset_Option_2)

BB_CLASS(t_std_optionset_Option)
BB_CLASS(t_std_optionset_OptionSet)

struct t_std_optionset_Option : public t_std_collections_Stack_1s{
  typedef t_std_optionset_Option *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_optionset_Option";}

  bbString m_cmd{};
  bbString m_text{};
  bbFunction<void(t_std_optionset_Option*)> m_func{};
  bbInt m_argIndex{};
  bbInt m_argCount{};

  void gcMark();

  t_std_optionset_Option(bbString l_command,bbInt l_argCount,bbFunction<void(t_std_optionset_Option*)> l_func);
  ~t_std_optionset_Option();

  void m_Execute(t_std_optionset_Option* l_option);

  bbString m_Command(){
    return this->m_cmd;
  }
  void m_ArgIndex(bbInt l_value);

  bbInt m_ArgIndex(){
    return this->m_argIndex;
  }

  bbInt m_ArgCount(){
    return this->m_argCount;
  }

  t_std_optionset_Option(){
  }
};

struct t_std_optionset_OptionSet : public bbObject{
  typedef t_std_optionset_OptionSet *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_optionset_OptionSet";}

  bbGCVar<t_std_collections_Map_1sTt_std_optionset_Option_2> m_options{};
  bbArray<bbString> m_args{};

  void gcMark();

  t_std_optionset_OptionSet(bbArray<bbString> l_args);
  ~t_std_optionset_OptionSet();

  void m_Parse();
  t_std_optionset_Option* m_Get(bbString l_id);
  void m_Add(bbString l_cmd,bbInt l_argc,bbFunction<void(t_std_optionset_Option*)> l_func);

  t_std_optionset_OptionSet(){
  }
};

#endif
