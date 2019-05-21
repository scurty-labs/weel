
#include "test.buildv1.1.15/linux_debug_mx/include/test_test.h"

#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_debug_mx/include/std_filesystem_2filesystem.h"
#include "test.buildv1.1.15/linux_debug_mx/include/test_optionset.h"

void bbMain(){
  static bool done;
  if(done) return;
  done=true;
  void mx2_monkey_main();mx2_monkey_main();
  void mx2_std_main();mx2_std_main();
  void mx2_test_std_collections_2map_init_f();mx2_test_std_collections_2map_init_f();
  void mx2_test_optionset_init_f();mx2_test_optionset_init_f();
  void mx2_test_test_init_f();mx2_test_test_init_f();
  struct f0_t : public bbGCFrame{
    t_std_optionset_OptionSet* l_CMD{};
    bbArray<bbString> t0{};
    bbFunction<void(t_std_optionset_Option*)> t1{};
    void gcMark(){
      bbGCMark(l_CMD);
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Main:Void()","/home/scott/Documents/Monkey/Projects/weel2/optionset/test.monkey2"};
  bbDBStmt(45063);
  f0.l_CMD=bbGCNew<t_std_optionset_OptionSet>(f0.t0=bbFileSystem::appArgs());
  bbDBLocal("CMD",&f0.l_CMD);
  bbDBStmt(53249);
  struct lambda0 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/optionset/test.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(57346);
      bb_print(((((((((((l_this->m_Command()+bbString(L"was entered - ",14))+bbString(l_this->m_ArgCount()))+bbString(L" arguments: ",12))+l_this->m__idx(bbInt(0)))+bbString(L" ",1))+l_this->m__idx(1))+bbString(L" ",1))+l_this->m__idx(2))+bbString(L" ",1))+l_this->m__idx(3)));
    }
    void gcMark(){
    }
  };
  f0.l_CMD->m_Add(bbString(L"-a",2),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda0),4);
  bbDBStmt(69633);
  struct lambda1 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/optionset/test.monkey2"};
      bbDBLocal("this",&l_this);
      bbDBStmt(73730);
      bb_print(bbString(L"This did a thing...",19));
    }
    void gcMark(){
    }
  };
  f0.l_CMD->m_Add(bbString(L"-b",2),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda1),bbInt(0));
  bbDBStmt(86017);
  struct lambda2 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/optionset/test.monkey2"};
      bbDBLocal("this",&l_this);
    }
    void gcMark(){
    }
  };
  f0.l_CMD->m_Add(bbString(L"-h",2),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda2),bbInt(0));
  bbDBStmt(102401);
  struct lambda3 : public bbFunction<void(t_std_optionset_Option*)>::Rep{
    void invoke(t_std_optionset_Option* l_this){
      bbDBFrame db_f{"?????:Void(this:std.optionset.Option)","/home/scott/Documents/Monkey/Projects/weel2/optionset/test.monkey2"};
      bbDBLocal("this",&l_this);
    }
    void gcMark(){
    }
  };
  f0.l_CMD->m_Add(bbString(L"--help",6),f0.t1=bbFunction<void(t_std_optionset_Option*)>(new lambda3),bbInt(0));
  bbDBStmt(122881);
  if(((f0.t0=bbFileSystem::appArgs()).length()>1)){
    bbDBBlock db_blk;
    bbDBStmt(126978);
    f0.l_CMD->m_Parse();
  }else{
    bbDBStmt(131073);
    bbDBBlock db_blk;
  }
}

void mx2_test_test_init_f(){
}
