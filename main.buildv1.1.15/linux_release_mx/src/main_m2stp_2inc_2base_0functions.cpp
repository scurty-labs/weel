
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2inc_2base_0functions.h"

#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"

t_m2stp_StpAdd::~t_m2stp_StpAdd(){
}

bbString t_m2stp_StpAdd::m_OnCall(t_std_collections_Stack_1s* l_param){
  if((l_param->m_Length()<=bbInt(0))){
    return bbString{};
  }
  bbFloat l_result{};
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_Stack_1s_Iterator l_0{};
      void gcMark(){
        bbGCMark(l_0);
      }
    }f1{};
    f1.l_0=l_param->m_All();
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      bbString l_s=f1.l_0.m_Current();
      l_result+=bbFloat(l_s);
    }
  }
  return bbString(l_result);
}

t_m2stp_StpSub::~t_m2stp_StpSub(){
}

bbString t_m2stp_StpSub::m_OnCall(t_std_collections_Stack_1s* l_param){
  if((l_param->m_Length()<=bbInt(0))){
    return bbString{};
  }
  bbFloat l_result=bbFloat(l_param->m__idx(bbInt(0)));
  {
    bbInt l_i=1;
    for(;(l_i<l_param->m_Length());l_i+=1){
      l_result-=bbFloat(l_param->m__idx(l_i));
    }
  }
  return bbString(l_result);
}

t_m2stp_StpDiv::~t_m2stp_StpDiv(){
}

bbString t_m2stp_StpDiv::m_OnCall(t_std_collections_Stack_1s* l_param){
  if((l_param->m_Length()<=bbInt(0))){
    return bbString{};
  }
  bbFloat l_result=bbFloat(l_param->m__idx(bbInt(0)));
  {
    bbInt l_i=1;
    for(;(l_i<l_param->m_Length());l_i+=1){
      l_result/=bbFloat(l_param->m__idx(l_i));
    }
  }
  return bbString(l_result);
}

t_m2stp_StpMul::~t_m2stp_StpMul(){
}

bbString t_m2stp_StpMul::m_OnCall(t_std_collections_Stack_1s* l_param){
  if((l_param->m_Length()<=bbInt(0))){
    return bbString{};
  }
  bbFloat l_result=bbFloat(l_param->m__idx(bbInt(0)));
  {
    bbInt l_i=1;
    for(;(l_i<l_param->m_Length());l_i+=1){
      l_result*=bbFloat(l_param->m__idx(l_i));
    }
  }
  return bbString(l_result);
}

void mx2_main_m2stp_2inc_2base_0functions_init_f(){
}
