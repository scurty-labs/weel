
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2stp_2inc_2base_0functions.h"

#include "std/std.buildv1.1.15/linux_debug_mx/include/std_collections_2stack.h"

void t_m2stp_StpAdd::dbEmit(){
  t_m2stp_StpString_Func::dbEmit();
  puts( "[m2stp.StpAdd]");
}
t_m2stp_StpAdd::~t_m2stp_StpAdd(){
}

bbString t_m2stp_StpAdd::m_OnCall(t_std_collections_Stack_1s* l_param){
  bbDBFrame db_f{"OnCall:monkey.types.String(param:std.collections.Stack<monkey.types.String>)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/inc/base_functions.monkey2"};
  t_m2stp_StpAdd*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("param",&l_param);
  bbDBStmt(36866);
  if((l_param->m_Length()<=bbInt(0))){
    bbDBBlock db_blk;
    return bbString{};
  }
  bbDBStmt(40968);
  bbFloat l_result{};
  bbDBLocal("result",&l_result);
  bbDBStmt(49154);
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_Stack_1s_Iterator l_0{};
      void gcMark(){
        bbGCMark(l_0);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_0=l_param->m_All();
    bbDBLocal("0",&f1.l_0);
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      bbDBBlock db_blk;
      bbString l_s=f1.l_0.m_Current();
      bbDBLocal("s",&l_s);
      bbDBStmt(53251);
      l_result+=bbFloat(l_s);
    }
  }
  bbDBStmt(65538);
  return bbString(l_result);
}
bbString bbDBType(t_m2stp_StpAdd**){
  return "m2stp.StpAdd";
}
bbString bbDBValue(t_m2stp_StpAdd**p){
  return bbDBObjectValue(*p);
}

void t_m2stp_StpSub::dbEmit(){
  t_m2stp_StpString_Func::dbEmit();
  puts( "[m2stp.StpSub]");
}
t_m2stp_StpSub::~t_m2stp_StpSub(){
}

bbString t_m2stp_StpSub::m_OnCall(t_std_collections_Stack_1s* l_param){
  bbDBFrame db_f{"OnCall:monkey.types.String(param:std.collections.Stack<monkey.types.String>)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/inc/base_functions.monkey2"};
  t_m2stp_StpSub*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("param",&l_param);
  bbDBStmt(98306);
  if((l_param->m_Length()<=bbInt(0))){
    bbDBBlock db_blk;
    return bbString{};
  }
  bbDBStmt(102408);
  bbFloat l_result=bbFloat(l_param->m__idx(bbInt(0)));
  bbDBLocal("result",&l_result);
  bbDBStmt(110594);
  {
    bbDBLoop db_loop;
    bbInt l_i=1;
    bbDBLocal("i",&l_i);
    for(;(l_i<l_param->m_Length());l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(114691);
      l_result-=bbFloat(l_param->m__idx(l_i));
    }
  }
  bbDBStmt(126978);
  return bbString(l_result);
}
bbString bbDBType(t_m2stp_StpSub**){
  return "m2stp.StpSub";
}
bbString bbDBValue(t_m2stp_StpSub**p){
  return bbDBObjectValue(*p);
}

void t_m2stp_StpDiv::dbEmit(){
  t_m2stp_StpString_Func::dbEmit();
  puts( "[m2stp.StpDiv]");
}
t_m2stp_StpDiv::~t_m2stp_StpDiv(){
}

bbString t_m2stp_StpDiv::m_OnCall(t_std_collections_Stack_1s* l_param){
  bbDBFrame db_f{"OnCall:monkey.types.String(param:std.collections.Stack<monkey.types.String>)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/inc/base_functions.monkey2"};
  t_m2stp_StpDiv*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("param",&l_param);
  bbDBStmt(159746);
  if((l_param->m_Length()<=bbInt(0))){
    bbDBBlock db_blk;
    return bbString{};
  }
  bbDBStmt(163848);
  bbFloat l_result=bbFloat(l_param->m__idx(bbInt(0)));
  bbDBLocal("result",&l_result);
  bbDBStmt(172034);
  {
    bbDBLoop db_loop;
    bbInt l_i=1;
    bbDBLocal("i",&l_i);
    for(;(l_i<l_param->m_Length());l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(176131);
      l_result/=bbFloat(l_param->m__idx(l_i));
    }
  }
  bbDBStmt(188418);
  return bbString(l_result);
}
bbString bbDBType(t_m2stp_StpDiv**){
  return "m2stp.StpDiv";
}
bbString bbDBValue(t_m2stp_StpDiv**p){
  return bbDBObjectValue(*p);
}

void t_m2stp_StpMul::dbEmit(){
  t_m2stp_StpString_Func::dbEmit();
  puts( "[m2stp.StpMul]");
}
t_m2stp_StpMul::~t_m2stp_StpMul(){
}

bbString t_m2stp_StpMul::m_OnCall(t_std_collections_Stack_1s* l_param){
  bbDBFrame db_f{"OnCall:monkey.types.String(param:std.collections.Stack<monkey.types.String>)","/home/scott/Documents/Monkey/Projects/weel2/m2stp/inc/base_functions.monkey2"};
  t_m2stp_StpMul*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("param",&l_param);
  bbDBStmt(221186);
  if((l_param->m_Length()<=bbInt(0))){
    bbDBBlock db_blk;
    return bbString{};
  }
  bbDBStmt(225288);
  bbFloat l_result=bbFloat(l_param->m__idx(bbInt(0)));
  bbDBLocal("result",&l_result);
  bbDBStmt(233474);
  {
    bbDBLoop db_loop;
    bbInt l_i=1;
    bbDBLocal("i",&l_i);
    for(;(l_i<l_param->m_Length());l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(237571);
      l_result*=bbFloat(l_param->m__idx(l_i));
    }
  }
  bbDBStmt(249858);
  return bbString(l_result);
}
bbString bbDBType(t_m2stp_StpMul**){
  return "m2stp.StpMul";
}
bbString bbDBValue(t_m2stp_StpMul**p){
  return bbDBObjectValue(*p);
}

void mx2_main_m2stp_2inc_2base_0functions_init_f(){
}
