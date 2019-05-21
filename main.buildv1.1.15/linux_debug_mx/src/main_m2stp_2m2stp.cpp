
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2stp_2m2stp.h"

#include "std/std.buildv1.1.15/linux_debug_mx/include/std_collections_2map.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_collections_2stack.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2stp_2inc_2base_0functions.h"
#include "main.buildv1.1.15/linux_debug_mx/include/main_std_collections_2map.h"

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

void t_m2stp_StpString::dbEmit(){
  puts( "[m2stp.StpString]");
  bbDBEmit("_escSymbol",&m__0escSymbol);
  bbDBEmit("_conLeftSymbol",&m__0conLeftSymbol);
  bbDBEmit("_conRightSymbol",&m__0conRightSymbol);
  bbDBEmit("_varSymbol",&m__0varSymbol);
  bbDBEmit("_funcSymbol",&m__0funcSymbol);
  bbDBEmit("_funcParamSepSymbol",&m__0funcParamSepSymbol);
  bbDBEmit("_funcParamLeftSymbol",&m__0funcParamLeftSymbol);
  bbDBEmit("_funcParamRightSymbol",&m__0funcParamRightSymbol);
  bbDBEmit("_result",&m__0result);
  bbDBEmit("_funcs",&m__0funcs);
  bbDBEmit("_vars",&m__0vars);
  bbDBEmit("_f_string",&m__0f_0string);
}

t_m2stp_StpString::t_m2stp_StpString(bbBool l_loadBase){
  init();
  bbDBFrame db_f{"new:Void(loadBase:monkey.types.Bool)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("loadBase",&l_loadBase);
  bbDBStmt(139266);
  if(l_loadBase){
    bbDBBlock db_blk;
    this->m_LoadBase();
  }
}
t_m2stp_StpString::~t_m2stp_StpString(){
}

bbString t_m2stp_StpString::m_to_s(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"to:monkey.types.String()","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1343490);
  return this->m__0result;
}

void t_m2stp_StpString::m_SetVar(bbString l_name,bbString l_v){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"SetVar:Void(name:monkey.types.String,v:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("name",&l_name);
  bbDBLocal("v",&l_v);
  bbDBStmt(1298434);
  l_name=l_name.toLower();
  bbDBStmt(1302530);
  if(bbBool(l_name)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1ss* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(1306627);
    if((f1.t0=this->m__0vars.get())->m_Contains(l_name)){
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1ss* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(1310724);
      (f2.t0=this->m__0vars.get())->m_Update(l_name,l_v);
    }else{
      bbDBStmt(1314819);
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1ss* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(1318916);
      (f2.t0=this->m__0vars.get())->m_Add(l_name,l_v);
    }
  }
}

void t_m2stp_StpString::m_LoadBase(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_m2stp_StpString_Func* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"LoadBase:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1363970);
  this->m_AddFunc(bbString(L"add",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpAdd>())));
  bbDBStmt(1368066);
  this->m_AddFunc(bbString(L"sub",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpSub>())));
  bbDBStmt(1372162);
  this->m_AddFunc(bbString(L"div",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpDiv>())));
  bbDBStmt(1376258);
  this->m_AddFunc(bbString(L"mul",3),f0.t0=((t_m2stp_StpString_Func*)(bbGCNew<t_m2stp_StpMul>())));
  bbDBStmt(1388546);
  this->m_SetVar(bbString(L"stp_version",11),bbString(L"1",1));
}

bbString t_m2stp_StpString::m_GetVar(bbString l_name){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1ss* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"GetVar:monkey.types.String(name:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("name",&l_name);
  bbDBStmt(1257474);
  l_name=l_name.toLower();
  bbDBStmt(1261570);
  if((f0.t0=this->m__0vars.get())->m_Contains(l_name)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1ss* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(1269763);
    return (f1.t0=this->m__0vars.get())->m_Get(l_name);
  }
  bbDBStmt(1277954);
  return bbString{};
}

bbString t_m2stp_StpString::m_FormatVar(bbString l_str){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FormatVar:monkey.types.String(str:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("str",&l_str);
  bbDBStmt(913416);
  bbBool l_inVar{};
  bbDBLocal("inVar",&l_inVar);
  bbDBStmt(917512);
  bbString l_name{};
  bbDBLocal("name",&l_name);
  bbDBStmt(921608);
  bbBool l_inEsc{};
  bbDBLocal("inEsc",&l_inEsc);
  bbDBStmt(925704);
  bbString l_result{};
  bbDBLocal("result",&l_result);
  bbDBStmt(929800);
  bbString l_chr{};
  bbDBLocal("chr",&l_chr);
  bbDBStmt(933896);
  bbString l_nextChr{};
  bbDBLocal("nextChr",&l_nextChr);
  bbDBStmt(937992);
  bbString l_thirdChr{};
  bbDBLocal("thirdChr",&l_thirdChr);
  bbDBStmt(946178);
  {
    bbDBLoop db_loop;
    bbInt l_i=bbInt(0);
    bbDBLocal("i",&l_i);
    for(;(l_i<l_str.length());l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(950275);
      l_chr=bbString::fromChar(l_str[l_i]);
      bbDBStmt(954371);
      l_nextChr=bbString{};
      bbDBStmt(958467);
      if((l_i<(l_str.length()-1))){
        bbDBBlock db_blk;
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      bbDBStmt(962563);
      l_thirdChr=bbString{};
      bbDBStmt(966659);
      if((l_i<(l_str.length()-2))){
        bbDBBlock db_blk;
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      bbDBStmt(974851);
      if(l_inVar){
        bbDBBlock db_blk;
        bbDBStmt(978948);
        if((l_chr==this->m__0varSymbol)){
          bbDBBlock db_blk;
          bbDBStmt(983045);
          l_result+=this->m_GetVar(l_name);
          bbDBStmt(987141);
          l_inVar=false;
          bbDBStmt(991237);
          l_name=bbString{};
        }else{
          bbDBStmt(995332);
          bbDBBlock db_blk;
          bbDBStmt(999429);
          l_name+=l_chr;
        }
      }else{
        bbDBStmt(1007619);
        bbDBBlock db_blk;
        bbDBStmt(1011716);
        if(!l_inEsc){
          bbDBBlock db_blk;
          bbDBStmt(1015813);
          if((l_chr==this->m__0escSymbol)){
            bbDBBlock db_blk;
            bbDBStmt(1024006);
            if(((l_nextChr==this->m__0escSymbol)&&(l_thirdChr==this->m__0escSymbol))){
              bbDBBlock db_blk;
              bbDBStmt(1028103);
              l_inEsc=false;
              bbDBStmt(1032199);
              l_result+=l_chr.dup(3);
              bbDBStmt(1036295);
              l_i+=2;
            }else{
              bbDBStmt(1040390);
              bbDBBlock db_blk;
              bbDBStmt(1044487);
              l_inEsc=true;
              bbDBStmt(1048583);
              l_result+=l_chr;
            }
          }else if(bbDBStmt(1060869),(l_chr==this->m__0varSymbol)){
            bbDBBlock db_blk;
            bbDBStmt(1064966);
            l_inVar=true;
          }else{
            bbDBStmt(1069061);
            bbDBBlock db_blk;
            bbDBStmt(1073158);
            l_result+=l_chr;
          }
        }else{
          bbDBStmt(1081348);
          bbDBBlock db_blk;
          bbDBStmt(1085445);
          if((l_chr==this->m__0escSymbol)){
            bbDBBlock db_blk;
            bbDBStmt(1089542);
            l_inEsc=false;
            bbDBStmt(1093638);
            l_result+=l_chr;
          }else{
            bbDBStmt(1097733);
            bbDBBlock db_blk;
            bbDBStmt(1101830);
            l_result+=l_chr;
          }
        }
      }
    }
  }
  bbDBStmt(1126402);
  return l_result;
}

bbString t_m2stp_StpString::m_FormatFunc(bbString l_str){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Stack_1s* l_params{};
    void gcMark(){
      bbGCMark(l_params);
    }
  }f0{};
  bbDBFrame db_f{"FormatFunc:monkey.types.String(str:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("str",&l_str);
  bbDBStmt(331784);
  bbString l_name{};
  bbDBLocal("name",&l_name);
  bbDBStmt(335880);
  bbString l_paramData{};
  bbDBLocal("paramData",&l_paramData);
  bbDBStmt(339976);
  f0.l_params=bbGCNew<t_std_collections_Stack_1s>();
  bbDBLocal("params",&f0.l_params);
  bbDBStmt(344072);
  bbBool l_inEsc{};
  bbDBLocal("inEsc",&l_inEsc);
  bbDBStmt(348168);
  bbString l_result{};
  bbDBLocal("result",&l_result);
  bbDBStmt(352264);
  bbString l_chr{};
  bbDBLocal("chr",&l_chr);
  bbDBStmt(356360);
  bbString l_nextChr{};
  bbDBLocal("nextChr",&l_nextChr);
  bbDBStmt(360456);
  bbString l_thirdChr{};
  bbDBLocal("thirdChr",&l_thirdChr);
  bbDBStmt(364552);
  bbInt l_nested{};
  bbDBLocal("nested",&l_nested);
  bbDBStmt(372738);
  {
    bbDBLoop db_loop;
    bbInt l_i=bbInt(0);
    bbDBLocal("i",&l_i);
    for(;(l_i<l_str.length());l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(376835);
      l_chr=bbString::fromChar(l_str[l_i]);
      bbDBStmt(380931);
      l_nextChr=bbString{};
      bbDBStmt(385027);
      if((l_i<(l_str.length()-1))){
        bbDBBlock db_blk;
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      bbDBStmt(389123);
      l_thirdChr=bbString{};
      bbDBStmt(393219);
      if((l_i<(l_str.length()-2))){
        bbDBBlock db_blk;
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      bbDBStmt(401411);
      if(!l_inEsc){
        bbDBBlock db_blk;
        bbDBStmt(405508);
        if((l_chr==this->m__0funcSymbol)){
          bbDBBlock db_blk;
          bbDBStmt(421893);
          {
            bbDBLoop db_loop;
            bbInt l_fi=(l_i+1);
            bbDBLocal("fi",&l_fi);
            for(;(l_fi<l_str.length());l_fi+=1){
              bbDBBlock db_blk;
              bbDBStmt(425990);
              l_chr=bbString::fromChar(l_str[l_fi]);
              bbDBStmt(438278);
              if((l_chr==this->m__0funcParamLeftSymbol)){
                bbDBBlock db_blk;
                bbDBStmt(450567);
                {
                  bbDBLoop db_loop;
                  bbInt l_pi=(l_fi+1);
                  bbDBLocal("pi",&l_pi);
                  for(;(l_pi<l_str.length());l_pi+=1){
                    bbDBBlock db_blk;
                    bbDBStmt(454664);
                    l_chr=bbString::fromChar(l_str[l_pi]);
                    bbDBStmt(466952);
                    if((l_chr==this->m__0funcSymbol)){
                      bbDBBlock db_blk;
                      bbDBStmt(471049);
                      l_nested+=1;
                    }
                    bbDBStmt(483336);
                    if(bbBool(l_nested)){
                      bbDBBlock db_blk;
                      bbDBStmt(487433);
                      l_paramData+=l_chr;
                      bbDBStmt(491529);
                      if((l_chr==this->m__0funcParamRightSymbol)){
                        bbDBBlock db_blk;
                        bbDBStmt(495626);
                        l_nested-=1;
                      }
                    }else{
                      bbDBStmt(503816);
                      bbDBBlock db_blk;
                      bbDBStmt(507913);
                      if(((l_chr==this->m__0funcParamSepSymbol)||(l_chr==this->m__0funcParamRightSymbol))){
                        bbDBBlock db_blk;
                        bbDBStmt(512010);
                        if(bbBool(l_paramData)){
                          bbDBBlock db_blk;
                          f0.l_params->m_Add(l_paramData);
                        }
                        bbDBStmt(516106);
                        l_paramData=bbString{};
                        bbDBStmt(524298);
                        if((l_chr==this->m__0funcParamRightSymbol)){
                          bbDBBlock db_blk;
                          bbDBStmt(532491);
                          {
                            bbDBLoop db_loop;
                            bbInt l_pfi=bbInt(0);
                            bbDBLocal("pfi",&l_pfi);
                            for(;(l_pfi<f0.l_params->m_Length());l_pfi+=1){
                              bbDBBlock db_blk;
                              bbDBStmt(536588);
                              if(this->m_ContainsFunc(f0.l_params->m__idx(l_pfi))){
                                bbDBBlock db_blk;
                                bbDBStmt(540685);
                                f0.l_params->m__idxeq(l_pfi,this->m_FormatFunc(f0.l_params->m__idx(l_pfi)));
                              }
                            }
                          }
                          bbDBStmt(557067);
                          l_result+=this->m_CallFunc(l_name,f0.l_params);
                          bbDBStmt(569355);
                          l_i=l_pi;
                          bbDBStmt(581643);
                          l_name=bbString{};
                          bbDBStmt(585739);
                          l_paramData=bbString{};
                          bbDBStmt(589835);
                          f0.l_params->m_Clear();
                          bbDBStmt(598027);
                          break;
                        }
                      }else{
                        bbDBStmt(606217);
                        bbDBBlock db_blk;
                        bbDBStmt(610314);
                        l_paramData+=l_chr;
                      }
                    }
                  }
                }
                bbDBStmt(634887);
                break;
              }else{
                bbDBStmt(638982);
                bbDBBlock db_blk;
                bbDBStmt(643079);
                l_name+=l_chr;
              }
            }
          }
        }else if(bbDBStmt(655364),(l_chr==this->m__0escSymbol)){
          bbDBBlock db_blk;
          bbDBStmt(663558);
          if(((l_nextChr==this->m__0escSymbol)&&(l_thirdChr==this->m__0escSymbol))){
            bbDBBlock db_blk;
            bbDBStmt(667655);
            l_inEsc=false;
            bbDBStmt(671751);
            l_result+=l_chr.dup(3);
            bbDBStmt(675847);
            l_i+=2;
          }else{
            bbDBStmt(679942);
            bbDBBlock db_blk;
            bbDBStmt(684039);
            l_inEsc=true;
            bbDBStmt(688135);
            l_result+=l_chr;
          }
        }else{
          bbDBStmt(696325);
          bbDBBlock db_blk;
          bbDBStmt(700422);
          l_result+=l_chr;
        }
      }else{
        bbDBStmt(708611);
        bbDBBlock db_blk;
        bbDBStmt(720900);
        if((l_chr==this->m__0escSymbol)){
          bbDBBlock db_blk;
          bbDBStmt(724998);
          l_inEsc=false;
          bbDBStmt(729094);
          l_result+=l_chr;
        }else{
          bbDBStmt(733189);
          bbDBBlock db_blk;
          bbDBStmt(737286);
          l_result+=l_chr;
        }
      }
    }
  }
  bbDBStmt(761858);
  return l_result;
}

bbString t_m2stp_StpString::m_Format(bbString l_str){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Format:monkey.types.String(str:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("str",&l_str);
  bbDBStmt(159746);
  this->m__0f_0string=this->m_FormatVar(l_str);
  bbDBStmt(163842);
  if(this->m_ContainsFunc(this->m__0f_0string)){
    bbDBBlock db_blk;
    bbDBStmt(167939);
    this->m__0result=this->m_FormatFunc(this->m__0f_0string);
  }else{
    bbDBStmt(172034);
    bbDBBlock db_blk;
    bbDBStmt(176131);
    this->m__0result=this->m__0f_0string;
  }
  bbDBStmt(192514);
  this->m__0result=this->m_CleanEsc(this->m__0result);
  bbDBStmt(200706);
  return this->m__0result;
}

bbBool t_m2stp_StpString::m_ContainsFunc(bbString l_str){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"ContainsFunc:monkey.types.Bool(str:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("str",&l_str);
  bbDBStmt(778248);
  bbBool l_inEsc{};
  bbDBLocal("inEsc",&l_inEsc);
  bbDBStmt(782344);
  bbString l_chr{};
  bbDBLocal("chr",&l_chr);
  bbDBStmt(786440);
  bbString l_nextChr{};
  bbDBLocal("nextChr",&l_nextChr);
  bbDBStmt(790536);
  bbString l_thirdChr{};
  bbDBLocal("thirdChr",&l_thirdChr);
  bbDBStmt(798722);
  {
    bbDBLoop db_loop;
    bbInt l_i=bbInt(0);
    bbDBLocal("i",&l_i);
    for(;(l_i<l_str.length());l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(802819);
      l_chr=bbString::fromChar(l_str[l_i]);
      bbDBStmt(806915);
      l_nextChr=bbString{};
      bbDBStmt(811011);
      if((l_i<(l_str.length()-1))){
        bbDBBlock db_blk;
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      bbDBStmt(815107);
      l_thirdChr=bbString{};
      bbDBStmt(819203);
      if((l_i<(l_str.length()-2))){
        bbDBBlock db_blk;
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      bbDBStmt(827395);
      if((l_chr==this->m__0escSymbol)){
        bbDBBlock db_blk;
        bbDBStmt(835588);
        if(((l_nextChr==this->m__0escSymbol)&&(l_thirdChr==this->m__0escSymbol))){
          bbDBBlock db_blk;
          bbDBStmt(839685);
          l_inEsc=false;
          bbDBStmt(843781);
          l_i+=2;
        }else{
          bbDBStmt(847876);
          bbDBBlock db_blk;
          bbDBStmt(851973);
          l_inEsc=!l_inEsc;
        }
      }
      bbDBStmt(876547);
      if((!l_inEsc&&(l_chr==this->m__0funcSymbol))){
        bbDBBlock db_blk;
        bbDBStmt(880644);
        return true;
      }
    }
  }
  bbDBStmt(897026);
  return false;
}

bbString t_m2stp_StpString::m_CleanEsc(bbString l_str){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"CleanEsc:monkey.types.String(str:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("str",&l_str);
  bbDBStmt(217096);
  bbString l_result{};
  bbDBLocal("result",&l_result);
  bbDBStmt(221192);
  bbString l_chr{};
  bbDBLocal("chr",&l_chr);
  bbDBStmt(225288);
  bbString l_nextChr{};
  bbDBLocal("nextChr",&l_nextChr);
  bbDBStmt(229384);
  bbString l_thirdChr{};
  bbDBLocal("thirdChr",&l_thirdChr);
  bbDBStmt(237570);
  {
    bbDBLoop db_loop;
    bbInt l_i=bbInt(0);
    bbDBLocal("i",&l_i);
    for(;(l_i<l_str.length());l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(241667);
      l_chr=bbString::fromChar(l_str[l_i]);
      bbDBStmt(245763);
      l_nextChr=bbString{};
      bbDBStmt(249859);
      if((l_i<(l_str.length()-1))){
        bbDBBlock db_blk;
        l_nextChr=bbString::fromChar(l_str[(l_i+1)]);
      }
      bbDBStmt(253955);
      l_thirdChr=bbString{};
      bbDBStmt(258051);
      if((l_i<(l_str.length()-2))){
        bbDBBlock db_blk;
        l_thirdChr=bbString::fromChar(l_str[(l_i+2)]);
      }
      bbDBStmt(270339);
      if((l_chr==this->m__0escSymbol)){
        bbDBBlock db_blk;
        bbDBStmt(274436);
        if((((l_chr==this->m__0escSymbol)&&(l_nextChr==this->m__0escSymbol))&&(l_thirdChr==this->m__0escSymbol))){
          bbDBBlock db_blk;
          bbDBStmt(278533);
          l_result+=l_chr;
        }
        bbDBStmt(290820);
        continue;
      }
      bbDBStmt(303107);
      l_result+=l_chr;
    }
  }
  bbDBStmt(315394);
  return l_result;
}

bbString t_m2stp_StpString::m_CallFunc(bbString l_name,t_std_collections_Stack_1s* l_param){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"CallFunc:monkey.types.String(name:monkey.types.String,param:std.collections.Stack<monkey.types.String>)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("name",&l_name);
  bbDBLocal("param",&l_param);
  bbDBStmt(1142786);
  l_name=l_name.toLower();
  bbDBStmt(1155074);
  if((f0.t0=this->m__0funcs.get())->m_Contains(l_name)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
      t_m2stp_StpString_Func* t1{};
      void gcMark(){
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(1171459);
    {
      bbDBLoop db_loop;
      bbInt l_i=bbInt(0);
      bbDBLocal("i",&l_i);
      for(;(l_i<l_param->m_Length());l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(1175556);
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).trim());
        bbDBStmt(1179652);
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).replace(bbString(L"\n",1),bbString{}));
        bbDBStmt(1183748);
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).replace(bbString(L"\r",1),bbString{}));
        bbDBStmt(1187844);
        l_param->m__idxeq(l_i,l_param->m__idx(l_i).replace(bbString(L"\t",1),bbString{}));
      }
    }
    bbDBStmt(1200131);
    return (f1.t1=(f1.t0=this->m__0funcs.get())->m_Get(l_name))->m_OnCall(l_param);
  }
  bbDBStmt(1212418);
  return bbString{};
}

void t_m2stp_StpString::m_AddFunc(bbString l_name,t_m2stp_StpString_Func* l_f){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddFunc:Void(name:monkey.types.String,f:m2stp.StpString.Func)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("name",&l_name);
  bbDBLocal("f",&l_f);
  bbDBStmt(1228802);
  if(bbBool(l_f)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(1236995);
    (f1.t0=this->m__0funcs.get())->m_Add(l_name.toLower(),l_f);
  }
}
bbString bbDBType(t_m2stp_StpString**){
  return "m2stp.StpString";
}
bbString bbDBValue(t_m2stp_StpString**p){
  return bbDBObjectValue(*p);
}

void t_m2stp_StpString_Func::dbEmit(){
  puts( "[m2stp.StpString.Func]");
}
t_m2stp_StpString_Func::~t_m2stp_StpString_Func(){
}

bbString t_m2stp_StpString_Func::m_OnCall(t_std_collections_Stack_1s* l_param){
  bbDBFrame db_f{"OnCall:monkey.types.String(param:std.collections.Stack<monkey.types.String>)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/m2stp.monkey2"};
  t_m2stp_StpString_Func*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("param",&l_param);
  bbDBStmt(1413123);
  return bbString{};
}
bbString bbDBType(t_m2stp_StpString_Func**){
  return "m2stp.StpString.Func";
}
bbString bbDBValue(t_m2stp_StpString_Func**p){
  return bbDBObjectValue(*p);
}

void mx2_main_m2stp_2m2stp_init_f(){
}
