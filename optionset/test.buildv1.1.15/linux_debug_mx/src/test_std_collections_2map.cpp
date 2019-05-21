
#include "test.buildv1.1.15/linux_debug_mx/include/test_std_collections_2map.h"

#include "test.buildv1.1.15/linux_debug_mx/include/test_optionset.h"

bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color*p){
  	return "std.collections.Map<monkey.types.String,std.optionset.Option>.Node.Color";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color*p){
  	return bbString( *(int*)p );
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Node::gcMark(){
  bbGCMark(m__0value);
  bbGCMark(m__0left);
  bbGCMark(m__0right);
  bbGCMark(m__0parent);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Node::dbEmit(){
  puts( "[std.collections.Map<monkey.types.String,std.optionset.Option>.Node]");
  bbDBEmit("_key",&m__0key);
  bbDBEmit("_value",&m__0value);
  bbDBEmit("_color",&m__0color);
  bbDBEmit("_left",&m__0left);
  bbDBEmit("_right",&m__0right);
  bbDBEmit("_parent",&m__0parent);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node::t_std_collections_Map_1sTt_std_optionset_Option_2_Node(bbString l_key,t_std_optionset_Option* l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color l_color,t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent){
  bbDBFrame db_f{"new:Void(key:monkey.types.String,value:std.optionset.Option,color:std.collections.Map<monkey.types.String,std.optionset.Option>.Node.Color,parent:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBLocal("color",&l_color);
  bbDBLocal("parent",&l_parent);
  bbDBStmt(278531);
  this->m__0key=l_key;
  bbDBStmt(282627);
  this->m__0value=l_value;
  bbDBStmt(286723);
  this->m__0color=l_color;
  bbDBStmt(290819);
  this->m__0parent=l_parent;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_Node::~t_std_collections_Map_1sTt_std_optionset_Option_2_Node(){
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Value(t_std_optionset_Option* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:Void(value:std.optionset.Option)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(204803);
  this->m__0value=l_value;
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Value(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:std.optionset.Option()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(196611);
  return this->m__0value.get();
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_PrevNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"PrevNode:std.collections.Map<monkey.types.String,std.optionset.Option>.Node()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(397315);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(401418);
    f1.l_node=this->m__0left.get();
    bbDBLocal("node",&f1.l_node);
    bbDBStmt(405508);
    {
      bbDBLoop db_loop;
      while(bbBool(f1.l_node->m__0right.get())){
        bbDBBlock db_blk;
        bbDBStmt(409605);
        f1.l_node=f1.l_node->m__0right.get();
      }
    }
    bbDBStmt(417796);
    return f1.l_node;
  }
  bbDBStmt(425993);
  f0.l_node=this;
  bbDBLocal("node",&f0.l_node);
  f0.l_parent=this->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(430083);
  {
    bbDBLoop db_loop;
    while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0left.get()))){
      bbDBBlock db_blk;
      bbDBStmt(434180);
      f0.l_node=f0.l_parent;
      bbDBStmt(438276);
      f0.l_parent=f0.l_parent->m__0parent.get();
    }
  }
  bbDBStmt(446467);
  return f0.l_parent;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_NextNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"NextNode:std.collections.Map<monkey.types.String,std.optionset.Option>.Node()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(331779);
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(335882);
    f1.l_node=this->m__0right.get();
    bbDBLocal("node",&f1.l_node);
    bbDBStmt(339972);
    {
      bbDBLoop db_loop;
      while(bbBool(f1.l_node->m__0left.get())){
        bbDBBlock db_blk;
        bbDBStmt(344069);
        f1.l_node=f1.l_node->m__0left.get();
      }
    }
    bbDBStmt(352260);
    return f1.l_node;
  }
  bbDBStmt(360457);
  f0.l_node=this;
  bbDBLocal("node",&f0.l_node);
  f0.l_parent=this->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(364547);
  {
    bbDBLoop db_loop;
    while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0right.get()))){
      bbDBBlock db_blk;
      bbDBStmt(368644);
      f0.l_node=f0.l_parent;
      bbDBStmt(372740);
      f0.l_parent=f0.l_parent->m__0parent.get();
    }
  }
  bbDBStmt(380931);
  return f0.l_parent;
}

bbString t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Key(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Key:monkey.types.String()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(159747);
  return this->m__0key;
}

bbInt t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Count(bbInt l_n){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Count:monkey.types.Int(n:monkey.types.Int)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("n",&l_n);
  bbDBStmt(307203);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    l_n=(f1.t0=this->m__0left.get())->m_Count(l_n);
  }
  bbDBStmt(311299);
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    l_n=(f1.t0=this->m__0right.get())->m_Count(l_n);
  }
  bbDBStmt(315395);
  return (l_n+1);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Copy(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_optionset_Option* t0{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Copy:std.collections.Map<monkey.types.String,std.optionset.Option>.Node(parent:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("parent",&l_parent);
  bbDBStmt(462857);
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(this->m__0key,f0.t0=this->m__0value.get(),this->m__0color,l_parent);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(466947);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    f0.l_node->m__0left=(f1.t0=this->m__0left.get())->m_Copy(f0.l_node);
  }
  bbDBStmt(471043);
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    f0.l_node->m__0right=(f1.t0=this->m__0right.get())->m_Copy(f0.l_node);
  }
  bbDBStmt(475139);
  return f0.l_node;
}
bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node**){
  return "std.collections.Map<monkey.types.String,std.optionset.Option>.Node";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_Node**p){
  return bbDBObjectValue(*p);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::dbEmit(t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  bbDBFrame db_f{"new:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(589827);
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::~t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator(){
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(524291);
  return bbBool((*this).m__0node.get());
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_Current(){
  bbDBFrame db_f{"Current:std.collections.Map<monkey.types.String,std.optionset.Option>.Node()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(540675);
  return (*this).m__0node.get();
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Bump:Void()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(557059);
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(507907);
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}
bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*){
  return "std.collections.Map<monkey.types.String,std.optionset.Option>.Iterator";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator&t){
  bbGCMark(t.m__0node);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::dbEmit(t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  bbDBFrame db_f{"new:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(704515);
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::~t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator(){
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(638979);
  return bbBool((*this).m__0node.get());
}

bbString t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_Current(){
  bbDBFrame db_f{"Current:monkey.types.String()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(655363);
  return (*this).m__0node.get()->m__0key;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Bump:Void()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(671747);
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(622595);
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}
bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*){
  return "std.collections.Map<monkey.types.String,std.optionset.Option>.KeyIterator";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator&t){
  bbGCMark(t.m__0node);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys::dbEmit(t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys*p){
  bbDBEmit("_map",&p->m__0map);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys::t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys(t_std_collections_Map_1sTt_std_optionset_Option_2* l_map){
  bbDBFrame db_f{"new:Void(map:std.collections.Map<monkey.types.String,std.optionset.Option>)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("map",&l_map);
  bbDBStmt(884739);
  (*this).m__0map=l_map;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys::~t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys(){
}

t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"All:std.collections.Map<monkey.types.String,std.optionset.Option>.KeyIterator()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(851971);
  return t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}
bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys*){
  return "std.collections.Map<monkey.types.String,std.optionset.Option>.MapKeys";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys&t){
  bbGCMark(t.m__0map);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::dbEmit(t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  bbDBFrame db_f{"new:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(819203);
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::~t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator(){
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(753667);
  return bbBool((*this).m__0node.get());
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_Current(){
  bbDBFrame db_f{"Current:std.optionset.Option()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(770051);
  return (*this).m__0node.get()->m__0value.get();
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Bump:Void()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(786435);
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(737283);
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}
bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*){
  return "std.collections.Map<monkey.types.String,std.optionset.Option>.ValueIterator";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator&t){
  bbGCMark(t.m__0node);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues::dbEmit(t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues*p){
  bbDBEmit("_map",&p->m__0map);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues::t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues(t_std_collections_Map_1sTt_std_optionset_Option_2* l_map){
  bbDBFrame db_f{"new:Void(map:std.collections.Map<monkey.types.String,std.optionset.Option>)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("map",&l_map);
  bbDBStmt(950275);
  (*this).m__0map=l_map;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues::~t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues(){
}

t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2* t0{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"All:std.collections.Map<monkey.types.String,std.optionset.Option>.ValueIterator()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(917507);
  return t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}
bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues*){
  return "std.collections.Map<monkey.types.String,std.optionset.Option>.MapValues";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues&t){
  bbGCMark(t.m__0map);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::gcMark(){
  bbGCMark(m__0root);
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::dbEmit(){
  puts( "[std.collections.Map<monkey.types.String,std.optionset.Option>]");
  bbDBEmit("_root",&m__0root);
}

t_std_collections_Map_1sTt_std_optionset_Option_2::t_std_collections_Map_1sTt_std_optionset_Option_2(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_root){
  bbDBFrame db_f{"new:Void(root:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("root",&l_root);
  bbDBStmt(1998850);
  this->m__0root=l_root;
}

t_std_collections_Map_1sTt_std_optionset_Option_2::t_std_collections_Map_1sTt_std_optionset_Option_2(){
  bbDBFrame db_f{"new:Void()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
}
t_std_collections_Map_1sTt_std_optionset_Option_2::~t_std_collections_Map_1sTt_std_optionset_Option_2(){
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m__idxeq(bbString l_key,t_std_optionset_Option* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]=:Void(key:monkey.types.String,value:std.optionset.Option)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1372162);
  this->m_Set(l_key,l_value);
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2::m__idx(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"[]:std.optionset.Option(key:monkey.types.String)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1417224);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1421314);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return ((t_std_optionset_Option*)0);
  }
  bbDBStmt(1425410);
  return f0.l_node->m__0value.get();
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues t_std_collections_Map_1sTt_std_optionset_Option_2::m_Values(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Values:std.collections.Map<monkey.types.String,std.optionset.Option>.MapValues()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1101826);
  return t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues{this};
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Update(bbString l_key,t_std_optionset_Option* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Update:monkey.types.Bool(key:monkey.types.String,value:std.optionset.Option)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1843208);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1847298);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1851394);
  f0.l_node->m__0value=l_value;
  bbDBStmt(1855490);
  return true;
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Set(bbString l_key,t_std_optionset_Option* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"Set:monkey.types.Bool(key:monkey.types.String,value:std.optionset.Option)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1495042);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    bbDBStmt(1499139);
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
    bbDBStmt(1503235);
    return true;
  }
  bbDBStmt(1515528);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbInt l_cmp{};
  bbDBLocal("cmp",&l_cmp);
  bbDBStmt(1523714);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(1527811);
      f0.l_parent=f0.l_node;
      bbDBStmt(1531907);
      l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBStmt(1536003);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1540100);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(1544195),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1548292);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(1552387);
        bbDBBlock db_blk;
        bbDBStmt(1556484);
        f0.l_node->m__0value=l_value;
        bbDBStmt(1560580);
        return false;
      }
    }
  }
  bbDBStmt(1576962);
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),f0.l_parent);
  bbDBStmt(1585154);
  if((l_cmp>bbInt(0))){
    bbDBBlock db_blk;
    f0.l_parent->m__0right=f0.l_node;
  }else{
    bbDBBlock db_blk;
    f0.l_parent->m__0left=f0.l_node;
  }
  bbDBStmt(1593346);
  this->m_InsertFixup(f0.l_node);
  bbDBStmt(1601538);
  return true;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_RotateRight(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  bbDBFrame db_f{"RotateRight:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2408456);
  f0.l_child=l_node->m__0left.get();
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2412546);
  l_node->m__0left=f0.l_child->m__0right.get();
  bbDBStmt(2416642);
  if(bbBool(f0.l_child->m__0right.get())){
    bbDBBlock db_blk;
    bbDBStmt(2420739);
    f0.l_child->m__0right.get()->m__0parent=l_node;
  }
  bbDBStmt(2428930);
  f0.l_child->m__0parent=l_node->m__0parent.get();
  bbDBStmt(2433026);
  if(bbBool(l_node->m__0parent.get())){
    bbDBBlock db_blk;
    bbDBStmt(2437123);
    if((l_node==l_node->m__0parent.get()->m__0right.get())){
      bbDBBlock db_blk;
      bbDBStmt(2441220);
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }else{
      bbDBStmt(2445315);
      bbDBBlock db_blk;
      bbDBStmt(2449412);
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }
  }else{
    bbDBStmt(2457602);
    bbDBBlock db_blk;
    bbDBStmt(2461699);
    this->m__0root=f0.l_child;
  }
  bbDBStmt(2469890);
  f0.l_child->m__0right=l_node;
  bbDBStmt(2473986);
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_RotateLeft(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  bbDBFrame db_f{"RotateLeft:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2326536);
  f0.l_child=l_node->m__0right.get();
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2330626);
  l_node->m__0right=f0.l_child->m__0left.get();
  bbDBStmt(2334722);
  if(bbBool(f0.l_child->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2338819);
    f0.l_child->m__0left.get()->m__0parent=l_node;
  }
  bbDBStmt(2347010);
  f0.l_child->m__0parent=l_node->m__0parent.get();
  bbDBStmt(2351106);
  if(bbBool(l_node->m__0parent.get())){
    bbDBBlock db_blk;
    bbDBStmt(2355203);
    if((l_node==l_node->m__0parent.get()->m__0left.get())){
      bbDBBlock db_blk;
      bbDBStmt(2359300);
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }else{
      bbDBStmt(2363395);
      bbDBBlock db_blk;
      bbDBStmt(2367492);
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }
  }else{
    bbDBStmt(2375682);
    bbDBBlock db_blk;
    bbDBStmt(2379779);
    this->m__0root=f0.l_child;
  }
  bbDBStmt(2387970);
  f0.l_child->m__0left=l_node;
  bbDBStmt(2392066);
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_RemoveNode(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_child{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_splice{};
    void gcMark(){
      bbGCMark(l_child);
      bbGCMark(l_parent);
      bbGCMark(l_splice);
    }
  }f0{};
  bbDBFrame db_f{"RemoveNode:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2158600);
  bbDBLocal("splice",&f0.l_splice);
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2166786);
  if(!bbBool(l_node->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2170883);
    f0.l_splice=l_node;
    bbDBStmt(2174979);
    f0.l_child=l_node->m__0right.get();
  }else if(bbDBStmt(2179074),!bbBool(l_node->m__0right.get())){
    bbDBBlock db_blk;
    bbDBStmt(2183171);
    f0.l_splice=l_node;
    bbDBStmt(2187267);
    f0.l_child=l_node->m__0left.get();
  }else{
    bbDBStmt(2191362);
    bbDBBlock db_blk;
    bbDBStmt(2195459);
    f0.l_splice=l_node->m__0left.get();
    bbDBStmt(2199555);
    {
      bbDBLoop db_loop;
      while(bbBool(f0.l_splice->m__0right.get())){
        bbDBBlock db_blk;
        bbDBStmt(2203652);
        f0.l_splice=f0.l_splice->m__0right.get();
      }
    }
    bbDBStmt(2211843);
    f0.l_child=f0.l_splice->m__0left.get();
    bbDBStmt(2215939);
    l_node->m__0key=f0.l_splice->m__0key;
    bbDBStmt(2220035);
    l_node->m__0value=f0.l_splice->m__0value.get();
  }
  bbDBStmt(2232328);
  f0.l_parent=f0.l_splice->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(2240514);
  if(bbBool(f0.l_child)){
    bbDBBlock db_blk;
    bbDBStmt(2244611);
    f0.l_child->m__0parent=f0.l_parent;
  }
  bbDBStmt(2256898);
  if(!bbBool(f0.l_parent)){
    bbDBBlock db_blk;
    bbDBStmt(2260995);
    this->m__0root=f0.l_child;
    bbDBStmt(2265091);
    return;
  }
  bbDBStmt(2277378);
  if((f0.l_splice==f0.l_parent->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2281475);
    f0.l_parent->m__0left=f0.l_child;
  }else{
    bbDBStmt(2285570);
    bbDBBlock db_blk;
    bbDBStmt(2289667);
    f0.l_parent->m__0right=f0.l_child;
  }
  bbDBStmt(2301954);
  if((f0.l_splice->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))){
    bbDBBlock db_blk;
    bbDBStmt(2306051);
    this->m_DeleteFixup(f0.l_child,f0.l_parent);
  }
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Remove(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Remove:monkey.types.Bool(key:monkey.types.String)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1953800);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1957890);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1961986);
  this->m_RemoveNode(f0.l_node);
  bbDBStmt(1966082);
  return true;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2::m_LastNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"LastNode:std.collections.Map<monkey.types.String,std.optionset.Option>.Node()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2056194);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return ((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
  }
  bbDBStmt(2064392);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2068482);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node->m__0right.get())){
      bbDBBlock db_blk;
      bbDBStmt(2072579);
      f0.l_node=f0.l_node->m__0right.get();
    }
  }
  bbDBStmt(2080770);
  return f0.l_node;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys t_std_collections_Map_1sTt_std_optionset_Option_2::m_Keys(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Keys:std.collections.Map<monkey.types.String,std.optionset.Option>.MapKeys()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1056770);
  return t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys{this};
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_InsertFixup(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    f0_t(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node):l_node(l_node){
    }
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{l_node};
  bbDBFrame db_f{"InsertFixup:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2490370);
  {
    bbDBLoop db_loop;
    while(((bbBool(f0.l_node->m__0parent.get())&&(f0.l_node->m__0parent.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0)))&&bbBool(f0.l_node->m__0parent.get()->m__0parent.get()))){
      bbDBBlock db_blk;
      bbDBStmt(2494467);
      if((f0.l_node->m__0parent.get()==f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get())){
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_uncle{};
          void gcMark(){
            bbGCMark(l_uncle);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2498570);
        f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0right.get();
        bbDBLocal("uncle",&f2.l_uncle);
        bbDBStmt(2502660);
        if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0)))){
          bbDBBlock db_blk;
          bbDBStmt(2506757);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2510853);
          f2.l_uncle->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2514949);
          f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2519045);
          f0.l_node=f2.l_uncle->m__0parent.get();
        }else{
          bbDBStmt(2523140);
          struct f3_t : public bbGCFrame{
            t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f3{};
          bbDBBlock db_blk;
          bbDBStmt(2527237);
          if((f0.l_node==f0.l_node->m__0parent.get()->m__0right.get())){
            bbDBBlock db_blk;
            bbDBStmt(2531334);
            f0.l_node=f0.l_node->m__0parent.get();
            bbDBStmt(2535430);
            this->m_RotateLeft(f0.l_node);
          }
          bbDBStmt(2543621);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2547717);
          f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2551813);
          this->m_RotateRight(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
        }
      }else{
        bbDBStmt(2560003);
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_uncle{};
          void gcMark(){
            bbGCMark(l_uncle);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2564106);
        f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get();
        bbDBLocal("uncle",&f2.l_uncle);
        bbDBStmt(2568196);
        if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0)))){
          bbDBBlock db_blk;
          bbDBStmt(2572293);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2576389);
          f2.l_uncle->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2580485);
          f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2584581);
          f0.l_node=f2.l_uncle->m__0parent.get();
        }else{
          bbDBStmt(2588676);
          struct f3_t : public bbGCFrame{
            t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f3{};
          bbDBBlock db_blk;
          bbDBStmt(2592773);
          if((f0.l_node==f0.l_node->m__0parent.get()->m__0left.get())){
            bbDBBlock db_blk;
            bbDBStmt(2596870);
            f0.l_node=f0.l_node->m__0parent.get();
            bbDBStmt(2600966);
            this->m_RotateRight(f0.l_node);
          }
          bbDBStmt(2609157);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2613253);
          f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2617349);
          this->m_RotateLeft(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
        }
      }
    }
  }
  bbDBStmt(2633730);
  this->m__0root.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2::m_Get(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Get:std.optionset.Option(key:monkey.types.String)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1900552);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1904642);
  if(bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return f0.l_node->m__0value.get();
  }
  bbDBStmt(1908738);
  return ((t_std_optionset_Option*)0);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2::m_FirstNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FirstNode:std.collections.Map<monkey.types.String,std.optionset.Option>.Node()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2015234);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return ((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
  }
  bbDBStmt(2023432);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2027522);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node->m__0left.get())){
      bbDBBlock db_blk;
      bbDBStmt(2031619);
      f0.l_node=f0.l_node->m__0left.get();
    }
  }
  bbDBStmt(2039810);
  return f0.l_node;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2::m_FindNode(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FindNode:std.collections.Map<monkey.types.String,std.optionset.Option>.Node(key:monkey.types.String)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(2097160);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2101250);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(2105353);
      bbInt l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBLocal("cmp",&l_cmp);
      bbDBStmt(2109443);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(2113540);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(2117635),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(2121732);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(2125827);
        bbDBBlock db_blk;
        bbDBStmt(2129924);
        return f0.l_node;
      }
    }
  }
  bbDBStmt(2142210);
  return ((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1249282);
  return (this->m__0root.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_DeleteFixup(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node,t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    f0_t(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node,t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent):l_node(l_node),l_parent(l_parent){
    }
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{l_node,l_parent};
  bbDBFrame db_f{"DeleteFixup:Void(node:std.collections.Map<monkey.types.String,std.optionset.Option>.Node,parent:std.collections.Map<monkey.types.String,std.optionset.Option>.Node)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(2654210);
  {
    bbDBLoop db_loop;
    while(((f0.l_node!=this->m__0root.get())&&(!bbBool(f0.l_node)||(f0.l_node->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))))){
      bbDBBlock db_blk;
      bbDBStmt(2662403);
      if((f0.l_node==f0.l_parent->m__0left.get())){
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_sib{};
          void gcMark(){
            bbGCMark(l_sib);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2670602);
        f2.l_sib=f0.l_parent->m__0right.get();
        bbDBLocal("sib",&f2.l_sib);
        bbDBStmt(2678788);
        if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0))){
          bbDBBlock db_blk;
          bbDBStmt(2682885);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2686981);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2691077);
          this->m_RotateLeft(f0.l_parent);
          bbDBStmt(2695173);
          f2.l_sib=f0.l_parent->m__0right.get();
        }
        bbDBStmt(2707460);
        if(((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))))){
          bbDBBlock db_blk;
          bbDBStmt(2711557);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2715653);
          f0.l_node=f0.l_parent;
          bbDBStmt(2719749);
          f0.l_parent=f0.l_parent->m__0parent.get();
        }else{
          bbDBStmt(2723844);
          bbDBBlock db_blk;
          bbDBStmt(2727941);
          if((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))){
            bbDBBlock db_blk;
            bbDBStmt(2732038);
            f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
            bbDBStmt(2736134);
            f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
            bbDBStmt(2740230);
            this->m_RotateRight(f2.l_sib);
            bbDBStmt(2744326);
            f2.l_sib=f0.l_parent->m__0right.get();
          }
          bbDBStmt(2752517);
          f2.l_sib->m__0color=f0.l_parent->m__0color;
          bbDBStmt(2756613);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2760709);
          f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2764805);
          this->m_RotateLeft(f0.l_parent);
          bbDBStmt(2768901);
          f0.l_node=this->m__0root.get();
        }
      }else{
        bbDBStmt(2777091);
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_sib{};
          void gcMark(){
            bbGCMark(l_sib);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2781194);
        f2.l_sib=f0.l_parent->m__0left.get();
        bbDBLocal("sib",&f2.l_sib);
        bbDBStmt(2789380);
        if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0))){
          bbDBBlock db_blk;
          bbDBStmt(2793477);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2797573);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2801669);
          this->m_RotateRight(f0.l_parent);
          bbDBStmt(2805765);
          f2.l_sib=f0.l_parent->m__0left.get();
        }
        bbDBStmt(2818052);
        if(((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))))){
          bbDBBlock db_blk;
          bbDBStmt(2822149);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          bbDBStmt(2826245);
          f0.l_node=f0.l_parent;
          bbDBStmt(2830341);
          f0.l_parent=f0.l_parent->m__0parent.get();
        }else{
          bbDBStmt(2834436);
          bbDBBlock db_blk;
          bbDBStmt(2838533);
          if((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))){
            bbDBBlock db_blk;
            bbDBStmt(2842630);
            f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
            bbDBStmt(2846726);
            f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
            bbDBStmt(2850822);
            this->m_RotateLeft(f2.l_sib);
            bbDBStmt(2854918);
            f2.l_sib=f0.l_parent->m__0left.get();
          }
          bbDBStmt(2863109);
          f2.l_sib->m__0color=f0.l_parent->m__0color;
          bbDBStmt(2867205);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2871301);
          f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          bbDBStmt(2875397);
          this->m_RotateRight(f0.l_parent);
          bbDBStmt(2879493);
          f0.l_node=this->m__0root.get();
        }
      }
    }
  }
  bbDBStmt(2895874);
  if(bbBool(f0.l_node)){
    bbDBBlock db_blk;
    f0.l_node->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
  }
}

bbInt t_std_collections_Map_1sTt_std_optionset_Option_2::m_Count(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Count:monkey.types.Int()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1208322);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return bbInt(0);
  }
  bbDBStmt(1212418);
  return (f0.t0=this->m__0root.get())->m_Count(bbInt(0));
}

t_std_collections_Map_1sTt_std_optionset_Option_2* t_std_collections_Map_1sTt_std_optionset_Option_2::m_Copy(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_root{};
    void gcMark(){
      bbGCMark(l_root);
    }
  }f0{};
  bbDBFrame db_f{"Copy:std.collections.Map<monkey.types.String,std.optionset.Option>()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1138696);
  bbDBLocal("root",&f0.l_root);
  bbDBStmt(1142786);
  if(bbBool(this->m__0root.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    f0.l_root=(f1.t0=this->m__0root.get())->m_Copy(((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
  }
  bbDBStmt(1146882);
  return bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2>(f0.l_root);
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Contains(bbString l_key){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Contains:monkey.types.Bool(key:monkey.types.String)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1294338);
  return (this->m_FindNode(l_key)!=((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1171458);
  this->m__0root=((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator t_std_collections_Map_1sTt_std_optionset_Option_2::m_All(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"All:std.collections.Map<monkey.types.String,std.optionset.Option>.Iterator()","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1011714);
  return t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator{f0.t0=this->m_FirstNode()};
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Add(bbString l_key,t_std_optionset_Option* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"Add:monkey.types.Bool(key:monkey.types.String,value:std.optionset.Option)","/home/scott/Apps/monkey/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_std_optionset_Option_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1671170);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    bbDBStmt(1675267);
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
    bbDBStmt(1679363);
    return true;
  }
  bbDBStmt(1691656);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbInt l_cmp{};
  bbDBLocal("cmp",&l_cmp);
  bbDBStmt(1699842);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(1703939);
      f0.l_parent=f0.l_node;
      bbDBStmt(1708035);
      l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBStmt(1712131);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1716228);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(1720323),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1724420);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(1728515);
        bbDBBlock db_blk;
        bbDBStmt(1732612);
        return false;
      }
    }
  }
  bbDBStmt(1748994);
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),f0.l_parent);
  bbDBStmt(1757186);
  if((l_cmp>bbInt(0))){
    bbDBBlock db_blk;
    f0.l_parent->m__0right=f0.l_node;
  }else{
    bbDBBlock db_blk;
    f0.l_parent->m__0left=f0.l_node;
  }
  bbDBStmt(1765378);
  this->m_InsertFixup(f0.l_node);
  bbDBStmt(1773570);
  return true;
}
bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2**){
  return "std.collections.Map<monkey.types.String,std.optionset.Option>";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2**p){
  return bbDBObjectValue(*p);
}

void mx2_test_std_collections_2map_init_f(){
}
