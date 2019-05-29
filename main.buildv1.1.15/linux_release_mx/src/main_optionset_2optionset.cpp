
#include "main.buildv1.1.15/linux_release_mx/include/main_optionset_2optionset.h"

#include "main.buildv1.1.15/linux_release_mx/include/main_std_collections_2map.h"

void t_std_optionset_Option::gcMark(){
  t_std_collections_Stack_1s::gcMark();
  bbGCMark(m_func);
}

t_std_optionset_Option::t_std_optionset_Option(bbString l_command,bbInt l_argCount,bbFunction<void(t_std_optionset_Option*)> l_func):t_std_collections_Stack_1s(){
  this->m_cmd=this->m_cmd;
  this->m_text=this->m_text;
  this->m_func=l_func;
  this->m_argCount=l_argCount;
}
t_std_optionset_Option::~t_std_optionset_Option(){
}

void t_std_optionset_Option::m_Execute(t_std_optionset_Option* l_option){
  if((this->m_argCount==this->m_Length())){
    this->m_func(l_option);
  }else{
    bb_print(bbString(L"Invalid Arguments...",20));
  }
}

void t_std_optionset_Option::m_ArgIndex(bbInt l_value){
  this->m_argIndex=l_value;
}

void t_std_optionset_OptionSet::gcMark(){
  bbGCMark(m_options);
  bbGCMark(m_args);
}

t_std_optionset_OptionSet::t_std_optionset_OptionSet(bbArray<bbString> l_args){
  this->m_args=l_args;
  this->m_options=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2>();
}
t_std_optionset_OptionSet::~t_std_optionset_OptionSet(){
}

void t_std_optionset_OptionSet::m_Parse(){
  struct f0_t : public bbGCFrame{
    bbArray<bbString> t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  if(((f0.t0=this->m_args).length()>1)){
    {
      struct f2_t : public bbGCFrame{
        bbArray<bbString> t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbInt l_num=bbInt(0);
      for(;(l_num<=((f2.t0=this->m_args).length()-1));l_num+=1){
        struct f3_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        if((f3.t0=this->m_options.get())->m_Contains(this->m_args[l_num])){
          struct f4_t : public bbGCFrame{
            t_std_optionset_Option* l_opt{};
            t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
            void gcMark(){
              bbGCMark(l_opt);
              bbGCMark(t0);
            }
          }f4{};
          f4.l_opt=(f4.t0=this->m_options.get())->m_Get(this->m_args[l_num]);
          f4.l_opt->m_ArgIndex(l_num);
          {
            bbInt l_i=1;
            for(;(l_i<=f4.l_opt->m_ArgCount());l_i+=1){
              struct f6_t : public bbGCFrame{
                bbArray<bbString> t0{};
                void gcMark(){
                  bbGCMark(t0);
                }
              }f6{};
              if(((l_num+l_i)<=((f6.t0=this->m_args).length()-1))){
                f4.l_opt->m_Add(this->m_args[(l_num+l_i)]);
              }
            }
          }
          f4.l_opt->m_Execute(f4.l_opt);
        }
      }
    }
  }
}

t_std_optionset_Option* t_std_optionset_OptionSet::m_Get(bbString l_id){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  return (f0.t0=this->m_options.get())->m_Get(l_id);
}

void t_std_optionset_OptionSet::m_Add(bbString l_cmd,bbInt l_argc,bbFunction<void(t_std_optionset_Option*)> l_func){
  struct f0_t : public bbGCFrame{
    t_std_optionset_Option* t0{};
    t_std_collections_Map_1sTt_std_optionset_Option_2* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  (f0.t1=this->m_options.get())->m_Add(l_cmd,f0.t0=bbGCNew<t_std_optionset_Option>(l_cmd,l_argc,l_func));
}

void mx2_main_optionset_2optionset_init_f(){
}
