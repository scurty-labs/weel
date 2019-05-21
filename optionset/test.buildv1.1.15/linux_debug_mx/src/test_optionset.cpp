
#include "test.buildv1.1.15/linux_debug_mx/include/test_optionset.h"

#include "test.buildv1.1.15/linux_debug_mx/include/test_std_collections_2map.h"

void t_std_optionset_Option::gcMark(){
  t_std_collections_Stack_1s::gcMark();
  bbGCMark(m_func);
}

void t_std_optionset_Option::dbEmit(){
  t_std_collections_Stack_1s::dbEmit();
  puts( "[std.optionset.Option]");
  bbDBEmit("cmd",&m_cmd);
  bbDBEmit("text",&m_text);
  bbDBEmit("func",&m_func);
  bbDBEmit("argIndex",&m_argIndex);
  bbDBEmit("argCount",&m_argCount);
}

t_std_optionset_Option::t_std_optionset_Option(bbString l_command,bbFunction<void(t_std_optionset_Option*)> l_func,bbInt l_argCount):t_std_collections_Stack_1s(){
  bbDBFrame db_f{"new:Void(command:monkey.types.String,func:Void(std.optionset.Option),argCount:monkey.types.Int)","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("command",&l_command);
  bbDBLocal("func",&l_func);
  bbDBLocal("argCount",&l_argCount);
  bbDBStmt(81935);
  this->m_cmd=this->m_cmd;
  this->m_text=this->m_text;
  this->m_func=l_func;
  this->m_argCount=l_argCount;
}
t_std_optionset_Option::~t_std_optionset_Option(){
}

void t_std_optionset_Option::m_Text(bbString l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Text:Void(value:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(122882);
  this->m_Text(l_value);
}

bbString t_std_optionset_Option::m_Text(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Text:monkey.types.String()","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(114690);
  return this->m_Text();
}

void t_std_optionset_Option::m_Execute(t_std_optionset_Option* l_option){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Execute:Void(option:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("option",&l_option);
  bbDBStmt(180226);
  if((this->m_argCount==this->m_Length())){
    bbDBBlock db_blk;
    bbDBStmt(184323);
    this->m_func(l_option);
  }else{
    bbDBStmt(188418);
    bbDBBlock db_blk;
    bbDBStmt(192515);
    bb_print(bbString(L"Invalid Arguments...",20));
  }
}

bbString t_std_optionset_Option::m_Command(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Command:monkey.types.String()","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(98306);
  return this->m_cmd;
}

void t_std_optionset_Option::m_ArgIndex(bbInt l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"ArgIndex:Void(value:monkey.types.Int)","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(147458);
  this->m_argIndex=l_value;
}

bbInt t_std_optionset_Option::m_ArgIndex(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"ArgIndex:monkey.types.Int()","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(139266);
  return this->m_argIndex;
}

bbInt t_std_optionset_Option::m_ArgCount(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"ArgCount:monkey.types.Int()","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_Option*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(163842);
  return this->m_argCount;
}
bbString bbDBType(t_std_optionset_Option**){
  return "std.optionset.Option";
}
bbString bbDBValue(t_std_optionset_Option**p){
  return bbDBObjectValue(*p);
}

void t_std_optionset_OptionSet::gcMark(){
  bbGCMark(m_options);
  bbGCMark(m_args);
}

void t_std_optionset_OptionSet::dbEmit(){
  puts( "[std.optionset.OptionSet]");
  bbDBEmit("options",&m_options);
  bbDBEmit("args",&m_args);
}

t_std_optionset_OptionSet::t_std_optionset_OptionSet(bbArray<bbString> l_args){
  bbDBFrame db_f{"new:Void(args:monkey.types.String[])","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_OptionSet*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("args",&l_args);
  bbDBStmt(258050);
  this->m_args=l_args;
  bbDBStmt(262146);
  this->m_options=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2>();
}
t_std_optionset_OptionSet::~t_std_optionset_OptionSet(){
}

void t_std_optionset_OptionSet::m_Parse(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbString> t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Parse:Void()","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_OptionSet*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(311298);
  if(((f0.t0=this->m_args).length()>1)){
    bbDBBlock db_blk;
    bbDBStmt(315395);
    {
      struct f2_t : public bbGCFrame{
        bbArray<bbString> t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbDBLoop db_loop;
      bbInt l_num=bbInt(0);
      bbDBLocal("num",&l_num);
      for(;(l_num<=((f2.t0=this->m_args).length()-1));l_num+=1){
        struct f3_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        bbDBBlock db_blk;
        bbDBStmt(319492);
        if((f3.t0=this->m_options.get())->m_Contains(this->m_args[l_num])){
          struct f4_t : public bbGCFrame{
            t_std_optionset_Option* l_opt{};
            t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
            void gcMark(){
              bbGCMark(l_opt);
              bbGCMark(t0);
            }
          }f4{};
          bbDBBlock db_blk;
          bbDBStmt(327691);
          f4.l_opt=(f4.t0=this->m_options.get())->m_Get(this->m_args[l_num]);
          bbDBLocal("opt",&f4.l_opt);
          bbDBStmt(339973);
          f4.l_opt->m_ArgIndex(l_num);
          bbDBStmt(352261);
          {
            bbDBLoop db_loop;
            bbInt l_i=1;
            bbDBLocal("i",&l_i);
            for(;(l_i<=f4.l_opt->m_ArgCount());l_i+=1){
              struct f6_t : public bbGCFrame{
                bbArray<bbString> t0{};
                void gcMark(){
                  bbGCMark(t0);
                }
              }f6{};
              bbDBBlock db_blk;
              bbDBStmt(356358);
              if(((l_num+l_i)<=((f6.t0=this->m_args).length()-1))){
                bbDBBlock db_blk;
                bbDBStmt(360455);
                f4.l_opt->m_Add(this->m_args[(l_num+l_i)]);
              }
            }
          }
          bbDBStmt(380933);
          f4.l_opt->m_Execute(f4.l_opt);
        }
      }
    }
  }
}

t_std_optionset_Option* t_std_optionset_OptionSet::m_Get(bbString l_id){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Get:std.optionset.Option(id:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_OptionSet*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("id",&l_id);
  bbDBStmt(294914);
  return (f0.t0=this->m_options.get())->m_Get(l_id);
}

void t_std_optionset_OptionSet::m_Add(bbString l_cmd,bbFunction<void(t_std_optionset_Option*)> l_func,bbInt l_argc){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_optionset_Option* t0{};
    t_std_collections_Map_1sTt_std_optionset_Option_2* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Add:Void(cmd:monkey.types.String,func:Void(std.optionset.Option),argc:monkey.types.Int)","/home/scott/Documents/Monkey/Projects/weel2/optionset/optionset.monkey2"};
  t_std_optionset_OptionSet*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("cmd",&l_cmd);
  bbDBLocal("func",&l_func);
  bbDBLocal("argc",&l_argc);
  bbDBStmt(278530);
  (f0.t1=this->m_options.get())->m_Add(l_cmd,f0.t0=bbGCNew<t_std_optionset_Option>(l_cmd,l_func,l_argc));
}
bbString bbDBType(t_std_optionset_OptionSet**){
  return "std.optionset.OptionSet";
}
bbString bbDBValue(t_std_optionset_OptionSet**p){
  return bbDBObjectValue(*p);
}

void mx2_test_optionset_init_f(){
}
