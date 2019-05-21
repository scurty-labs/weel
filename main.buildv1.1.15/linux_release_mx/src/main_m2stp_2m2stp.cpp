
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2m2stp.h"

#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2map.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2inc_2base_0functions.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_std_collections_2map.h"

void t_m2stp_StpString::init(){
  m__0escSymbol=bbString(L"'",1);
  m__0conLeftSymbol=bbString(L"[",1);
  m__0conRightSymbol=bbString(L"]",1);
  m__0varSymbol=bbString(L"%",1);
  m__0funcSymbol=bbString(L"$",1);
  m__0funcParamSepSymbol=bbString(L",",1);
  m__0funcParamLeftSymbol=bbString(L"(",1);
  m__0funcParamRightSymbol=bbString(L")",1);
  m__0funcs=bbGCNew<t_std_collections_Map_1sTt_m2stp_StpString_Func_2>();
  m__0vars=bbGCNew<t_std_collections_Map_1ss>();
}

void t_m2stp_StpString::gcMark(){
  bbGCMark(m__0funcs);
  bbGCMark(m__0vars);
}

t_m2stp_StpString::t_m2stp_StpString(bbBool l_loadBase){
  init();
  if(l_loadBase){
    this->m_LoadBase();
  }
}
t_m2stp_StpString::~t_m2stp_StpString(){
}

void t_m2stp_StpString::m_SetVar(bbString l_name,bbString l_v){
  l_name=l_name.toLower();
  if(bbBool(l_name)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1ss* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    if((f1.t0=this->m__0vars.get())->m_Contains(l_name)){
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1ss* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      (f2.t0=this->m__0vars.get())->m_Update(l_name,l_v);
    }else{
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1ss* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      (f2.t0=this->m__0vars.get())->m_Add(l_name,l_v);
    }
  }
}

void t_m2stp_StpString::m_LoadBase(){
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString_Func* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  this->m_AddFunc(bbString(L"add",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpAdd>())));
  this->m_AddFunc(bbString(L"sub",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpSub>())));
  this->m_AddFunc(bbString(L"div",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpDiv>())));
  this->m_AddFunc(bbString(L"mul",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpMul>())));
  this->m_SetVar(bbString(L"stp_version",11),bbString(L"1",1));
}

bbString t_m2stp_StpString::m_GetVar(bbString l_name){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1ss* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  l_name=l_name.toLower();
  if((f0.t0=this->m__0vars.get())->m_Contains(l_name)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1ss* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    return (f1.t0=this->m__0vars.get())->m_Get(l_name);
  }
  return bbString{};
}

bbString t_m2stp_StpString::m_FormatVar(bbString l_str){
  bbBool l_inVar{};
  bbString l_name{};
  bbBool l_inEsc{};
  bbString l_result{};
  bbString l_chr{};
  bbString l_nextChr{};
  bbString l_thirdChr{};
  {
    bbInt l_i=bbInt(0);
    for(;(l_i<l_str.length());l_i+=1){
      l_chr=bbString::fromChar(l_str[l_i]);
      l_nextChr=bbString{};
      if((l_i<(l_str.length()-1))){
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      l_thirdChr=bbString{};
      if((l_i<(l_str.length()-2))){
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      if(l_inVar){
        if((l_chr==this->m__0varSymbol)){
          l_result+=this->m_GetVar(l_name);
          l_inVar=false;
          l_name=bbString{};
        }else{
          l_name+=l_chr;
        }
      }else{
        if(!l_inEsc){
          if((l_chr==this->m__0escSymbol)){
            if(((l_nextChr==this->m__0escSymbol)&&(l_thirdChr==this->m__0escSymbol))){
              l_inEsc=false;
              l_result+=l_chr.dup(3);
              l_i+=2;
            }else{
              l_inEsc=true;
              l_result+=l_chr;
            }
          }else if((l_chr==this->m__0varSymbol)){
            l_inVar=true;
          }else{
            l_result+=l_chr;
          }
        }else{
          if((l_chr==this->m__0escSymbol)){
            l_inEsc=false;
            l_result+=l_chr;
          }else{
            l_result+=l_chr;
          }
        }
      }
    }
  }
  return l_result;
}

bbString t_m2stp_StpString::m_FormatFunc(bbString l_str){
  struct f0_t : public bbGCFrame{
    t_std_collections_Stack_1s* l_params{};
    void gcMark(){
      bbGCMark(l_params);
    }
  }f0{};
  bbString l_name{};
  bbString l_paramData{};
  f0.l_params=bbGCNew<t_std_collections_Stack_1s>();
  bbBool l_inEsc{};
  bbString l_result{};
  bbString l_chr{};
  bbString l_nextChr{};
  bbString l_thirdChr{};
  bbInt l_nested{};
  {
    bbInt l_i=bbInt(0);
    for(;(l_i<l_str.length());l_i+=1){
      l_chr=bbString::fromChar(l_str[l_i]);
      l_nextChr=bbString{};
      if((l_i<(l_str.length()-1))){
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      l_thirdChr=bbString{};
      if((l_i<(l_str.length()-2))){
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      if(!l_inEsc){
        if((l_chr==this->m__0funcSymbol)){
          {
            bbInt l_fi=(l_i+1);
            for(;(l_fi<l_str.length());l_fi+=1){
              l_chr=bbString::fromChar(l_str[l_fi]);
              if((l_chr==this->m__0funcParamLeftSymbol)){
                {
                  bbInt l_pi=(l_fi+1);
                  for(;(l_pi<l_str.length());l_pi+=1){
                    l_chr=bbString::fromChar(l_str[l_pi]);
                    if((l_chr==this->m__0funcSymbol)){
                      l_nested+=1;
                    }
                    if(bbBool(l_nested)){
                      l_paramData+=l_chr;
                      if((l_chr==this->m__0funcParamRightSymbol)){
                        l_nested-=1;
                      }
                    }else{
                      if(((l_chr==this->m__0funcParamSepSymbol)||(l_chr==this->m__0funcParamRightSymbol))){
                        if(bbBool(l_paramData)){
                          f0.l_params->m_Add(l_paramData);
                        }
                        l_paramData=bbString{};
                        if((l_chr==this->m__0funcParamRightSymbol)){
                          {
                            bbInt l_pfi=bbInt(0);
                            for(;(l_pfi<f0.l_params->m_Length());l_pfi+=1){
                              if(this->m_ContainsFunc(f0.l_params->m__idx(l_pfi))){
                                f0.l_params->m__idxeq(l_pfi,this->m_FormatFunc(f0.l_params->m__idx(l_pfi)));
                              }
                            }
                          }
                          l_result+=this->m_CallFunc(l_name,f0.l_params);
                          l_i=l_pi;
                          l_name=bbString{};
                          l_paramData=bbString{};
                          f0.l_params->m_Clear();
                          break;
                        }
                      }else{
                        l_paramData+=l_chr;
                      }
                    }
                  }
                }
                break;
              }else{
                l_name+=l_chr;
              }
            }
          }
        }else if((l_chr==this->m__0escSymbol)){
          if(((l_nextChr==this->m__0escSymbol)&&(l_thirdChr==this->m__0escSymbol))){
            l_inEsc=false;
            l_result+=l_chr.dup(3);
            l_i+=2;
          }else{
            l_inEsc=true;
            l_result+=l_chr;
          }
        }else{
          l_result+=l_chr;
        }
      }else{
        if((l_chr==this->m__0escSymbol)){
          l_inEsc=false;
          l_result+=l_chr;
        }else{
          l_result+=l_chr;
        }
      }
    }
  }
  return l_result;
}

bbString t_m2stp_StpString::m_Format(bbString l_str){
  this->m__0f_0string=this->m_FormatVar(l_str);
  if(this->m_ContainsFunc(this->m__0f_0string)){
    this->m__0result=this->m_FormatFunc(this->m__0f_0string);
  }else{
    this->m__0result=this->m__0f_0string;
  }
  this->m__0result=this->m_CleanEsc(this->m__0result);
  return this->m__0result;
}

bbBool t_m2stp_StpString::m_ContainsFunc(bbString l_str){
  bbBool l_inEsc{};
  bbString l_chr{};
  bbString l_nextChr{};
  bbString l_thirdChr{};
  {
    bbInt l_i=bbInt(0);
    for(;(l_i<l_str.length());l_i+=1){
      l_chr=bbString::fromChar(l_str[l_i]);
      l_nextChr=bbString{};
      if((l_i<(l_str.length()-1))){
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      l_thirdChr=bbString{};
      if((l_i<(l_str.length()-2))){
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      if((l_chr==this->m__0escSymbol)){
        if(((l_nextChr==this->m__0escSymbol)&&(l_thirdChr==this->m__0escSymbol))){
          l_inEsc=false;
          l_i+=2;
        }else{
          l_inEsc=!l_inEsc;
        }
      }
      if((!l_inEsc&&(l_chr==this->m__0funcSymbol))){
        return true;
      }
    }
  }
  return false;
}

bbString t_m2stp_StpString::m_CleanEsc(bbString l_str){
  bbString l_result{};
  bbString l_chr{};
  bbString l_nextChr{};
  bbString l_thirdChr{};
  {
    bbInt l_i=bbInt(0);
    for(;(l_i<l_str.length());l_i+=1){
      l_chr=bbString::fromChar(l_str[l_i]);
      l_nextChr=bbString{};
      if((l_i<(l_str.length()-1))){
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      l_thirdChr=bbString{};
      if((l_i<(l_str.length()-2))){
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      if((l_chr==this->m__0escSymbol)){
        if((((l_chr==this->m__0escSymbol)&&(l_nextChr==this->m__0escSymbol))&&(l_thirdChr==this->m__0escSymbol))){
          l_result+=l_chr;
        }
        continue;
      }
      l_result+=l_chr;
    }
  }
  return l_result;
}

bbString t_m2stp_StpString::m_CallFunc(bbString l_name,t_std_collections_Stack_1s* l_param){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  l_name=l_name.toLower();
  if((f0.t0=this->m__0funcs.get())->m_Contains(l_name)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
      t_m2stp_StpString_Func* t1{};
      void gcMark(){
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    {
      bbInt l_i=bbInt(0);
      for(;(l_i<l_param->m_Length());l_i+=1){
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).trim());
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).replace(bbString(L"\n",1),bbString{}));
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).replace(bbString(L"\r",1),bbString{}));
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).replace(bbString(L"\t",1),bbString{}));
      }
    }
    return (f1.t1=(f1.t0=this->m__0funcs.get())->m_Get(l_name))->m_OnCall(l_param);
  }
  return bbString{};
}

void t_m2stp_StpString::m_AddFunc(bbString l_name,t_m2stp_StpString_Func* l_f){
  if(bbBool(l_f)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    (f1.t0=this->m__0funcs.get())->m_Add(l_name.toLower(),l_f);
  }
}

t_m2stp_StpString_Func::~t_m2stp_StpString_Func(){
}

bbString t_m2stp_StpString_Func::m_OnCall(t_std_collections_Stack_1s* l_param){
  return bbString{};
}

void mx2_main_m2stp_2m2stp_init_f(){
}
