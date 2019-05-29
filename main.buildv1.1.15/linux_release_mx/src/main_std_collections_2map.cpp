
#include "main.buildv1.1.15/linux_release_mx/include/main_std_collections_2map.h"

#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2m2stp.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_optionset_2optionset.h"

bbString bbDBType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color*p){
  	return "std.collections.Map<monkey.types.String,std.optionset.Option>.Node.Color";
}
bbString bbDBValue(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color*p){
  	return bbString( *(int*)p );
}
bbString bbDBType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color*p){
  	return "std.collections.Map<monkey.types.String,m2stp.StpString.Func>.Node.Color";
}
bbString bbDBValue(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color*p){
  	return bbString( *(int*)p );
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Node::gcMark(){
  bbGCMark(m__0value);
  bbGCMark(m__0left);
  bbGCMark(m__0right);
  bbGCMark(m__0parent);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node::t_std_collections_Map_1sTt_std_optionset_Option_2_Node(bbString l_key,t_std_optionset_Option* l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color l_color,t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent){
  this->m__0key=l_key;
  this->m__0value=l_value;
  this->m__0color=l_color;
  this->m__0parent=l_parent;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_Node::~t_std_collections_Map_1sTt_std_optionset_Option_2_Node(){
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Value(t_std_optionset_Option* l_value){
  this->m__0value=l_value;
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Value(){
  return this->m__0value.get();
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_PrevNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    f1.l_node=this->m__0left.get();
    while(bbBool(f1.l_node->m__0right.get())){
      f1.l_node=f1.l_node->m__0right.get();
    }
    return f1.l_node;
  }
  f0.l_node=this;
  f0.l_parent=this->m__0parent.get();
  while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0left.get()))){
    f0.l_node=f0.l_parent;
    f0.l_parent=f0.l_parent->m__0parent.get();
  }
  return f0.l_parent;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_NextNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    f1.l_node=this->m__0right.get();
    while(bbBool(f1.l_node->m__0left.get())){
      f1.l_node=f1.l_node->m__0left.get();
    }
    return f1.l_node;
  }
  f0.l_node=this;
  f0.l_parent=this->m__0parent.get();
  while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0right.get()))){
    f0.l_node=f0.l_parent;
    f0.l_parent=f0.l_parent->m__0parent.get();
  }
  return f0.l_parent;
}

bbInt t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Count(bbInt l_n){
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_n=(f1.t0=this->m__0left.get())->m_Count(l_n);
  }
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_n=(f1.t0=this->m__0right.get())->m_Count(l_n);
  }
  return (l_n+1);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Node::m_Copy(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_optionset_Option* t0{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(t0);
    }
  }f0{};
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(this->m__0key,f0.t0=this->m__0value.get(),this->m__0color,l_parent);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_node->m__0left=(f1.t0=this->m__0left.get())->m_Copy(f0.l_node);
  }
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_node->m__0right=(f1.t0=this->m__0right.get())->m_Copy(f0.l_node);
  }
  return f0.l_node;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::~t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator(){
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_Current(){
  return (*this).m__0node.get();
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator&t){
  bbGCMark(t.m__0node);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::~t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator(){
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

bbString t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_Current(){
  return (*this).m__0node.get()->m__0key;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator&t){
  bbGCMark(t.m__0node);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys::t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys(t_std_collections_Map_1sTt_std_optionset_Option_2* l_map){
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
  return t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys&t){
  bbGCMark(t.m__0map);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::~t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator(){
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_Current(){
  return (*this).m__0node.get()->m__0value.get();
}

void t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}

int bbCompare(const t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator&x,const t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator&t){
  bbGCMark(t.m__0node);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues::t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues(t_std_collections_Map_1sTt_std_optionset_Option_2* l_map){
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
  return t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
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

t_std_collections_Map_1sTt_std_optionset_Option_2::t_std_collections_Map_1sTt_std_optionset_Option_2(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_root){
  this->m__0root=l_root;
}

t_std_collections_Map_1sTt_std_optionset_Option_2::t_std_collections_Map_1sTt_std_optionset_Option_2(){
}
t_std_collections_Map_1sTt_std_optionset_Option_2::~t_std_collections_Map_1sTt_std_optionset_Option_2(){
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m__idxeq(bbString l_key,t_std_optionset_Option* l_value){
  this->m_Set(l_key,l_value);
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2::m__idx(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return ((t_std_optionset_Option*)0);
  }
  return f0.l_node->m__0value.get();
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues t_std_collections_Map_1sTt_std_optionset_Option_2::m_Values(){
  return t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues{this};
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Update(bbString l_key,t_std_optionset_Option* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return false;
  }
  f0.l_node->m__0value=l_value;
  return true;
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Set(bbString l_key,t_std_optionset_Option* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
    return true;
  }
  f0.l_node=this->m__0root.get();
  bbInt l_cmp{};
  while(bbBool(f0.l_node)){
    f0.l_parent=f0.l_node;
    l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      f0.l_node->m__0value=l_value;
      return false;
    }
  }
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),f0.l_parent);
  if((l_cmp>bbInt(0))){
    f0.l_parent->m__0right=f0.l_node;
  }else{
    f0.l_parent->m__0left=f0.l_node;
  }
  this->m_InsertFixup(f0.l_node);
  return true;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_RotateRight(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  f0.l_child=l_node->m__0left.get();
  l_node->m__0left=f0.l_child->m__0right.get();
  if(bbBool(f0.l_child->m__0right.get())){
    f0.l_child->m__0right.get()->m__0parent=l_node;
  }
  f0.l_child->m__0parent=l_node->m__0parent.get();
  if(bbBool(l_node->m__0parent.get())){
    if((l_node==l_node->m__0parent.get()->m__0right.get())){
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }else{
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }
  }else{
    this->m__0root=f0.l_child;
  }
  f0.l_child->m__0right=l_node;
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_RotateLeft(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  f0.l_child=l_node->m__0right.get();
  l_node->m__0right=f0.l_child->m__0left.get();
  if(bbBool(f0.l_child->m__0left.get())){
    f0.l_child->m__0left.get()->m__0parent=l_node;
  }
  f0.l_child->m__0parent=l_node->m__0parent.get();
  if(bbBool(l_node->m__0parent.get())){
    if((l_node==l_node->m__0parent.get()->m__0left.get())){
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }else{
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }
  }else{
    this->m__0root=f0.l_child;
  }
  f0.l_child->m__0left=l_node;
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_RemoveNode(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
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
  if(!bbBool(l_node->m__0left.get())){
    f0.l_splice=l_node;
    f0.l_child=l_node->m__0right.get();
  }else if(!bbBool(l_node->m__0right.get())){
    f0.l_splice=l_node;
    f0.l_child=l_node->m__0left.get();
  }else{
    f0.l_splice=l_node->m__0left.get();
    while(bbBool(f0.l_splice->m__0right.get())){
      f0.l_splice=f0.l_splice->m__0right.get();
    }
    f0.l_child=f0.l_splice->m__0left.get();
    l_node->m__0key=f0.l_splice->m__0key;
    l_node->m__0value=f0.l_splice->m__0value.get();
  }
  f0.l_parent=f0.l_splice->m__0parent.get();
  if(bbBool(f0.l_child)){
    f0.l_child->m__0parent=f0.l_parent;
  }
  if(!bbBool(f0.l_parent)){
    this->m__0root=f0.l_child;
    return;
  }
  if((f0.l_splice==f0.l_parent->m__0left.get())){
    f0.l_parent->m__0left=f0.l_child;
  }else{
    f0.l_parent->m__0right=f0.l_child;
  }
  if((f0.l_splice->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))){
    this->m_DeleteFixup(f0.l_child,f0.l_parent);
  }
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Remove(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return false;
  }
  this->m_RemoveNode(f0.l_node);
  return true;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2::m_LastNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return ((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
  }
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node->m__0right.get())){
    f0.l_node=f0.l_node->m__0right.get();
  }
  return f0.l_node;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys t_std_collections_Map_1sTt_std_optionset_Option_2::m_Keys(){
  return t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys{this};
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_InsertFixup(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    f0_t(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node):l_node(l_node){
    }
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{l_node};
  while(((bbBool(f0.l_node->m__0parent.get())&&(f0.l_node->m__0parent.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0)))&&bbBool(f0.l_node->m__0parent.get()->m__0parent.get()))){
    if((f0.l_node->m__0parent.get()==f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get())){
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_uncle{};
        void gcMark(){
          bbGCMark(l_uncle);
        }
      }f2{};
      f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0right.get();
      if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0)))){
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f2.l_uncle->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        f0.l_node=f2.l_uncle->m__0parent.get();
      }else{
        struct f3_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        if((f0.l_node==f0.l_node->m__0parent.get()->m__0right.get())){
          f0.l_node=f0.l_node->m__0parent.get();
          this->m_RotateLeft(f0.l_node);
        }
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        this->m_RotateRight(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
      }
    }else{
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_uncle{};
        void gcMark(){
          bbGCMark(l_uncle);
        }
      }f2{};
      f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get();
      if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0)))){
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f2.l_uncle->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        f0.l_node=f2.l_uncle->m__0parent.get();
      }else{
        struct f3_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        if((f0.l_node==f0.l_node->m__0parent.get()->m__0left.get())){
          f0.l_node=f0.l_node->m__0parent.get();
          this->m_RotateRight(f0.l_node);
        }
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        this->m_RotateLeft(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
      }
    }
  }
  this->m__0root.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
}

t_std_optionset_Option* t_std_collections_Map_1sTt_std_optionset_Option_2::m_Get(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(bbBool(f0.l_node)){
    return f0.l_node->m__0value.get();
  }
  return ((t_std_optionset_Option*)0);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2::m_FirstNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return ((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
  }
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node->m__0left.get())){
    f0.l_node=f0.l_node->m__0left.get();
  }
  return f0.l_node;
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t_std_collections_Map_1sTt_std_optionset_Option_2::m_FindNode(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node)){
    bbInt l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      return f0.l_node;
    }
  }
  return ((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Empty(){
  return (this->m__0root.get()==((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_DeleteFixup(t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node,t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent){
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
  while(((f0.l_node!=this->m__0root.get())&&(!bbBool(f0.l_node)||(f0.l_node->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))))){
    if((f0.l_node==f0.l_parent->m__0left.get())){
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_sib{};
        void gcMark(){
          bbGCMark(l_sib);
        }
      }f2{};
      f2.l_sib=f0.l_parent->m__0right.get();
      if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        this->m_RotateLeft(f0.l_parent);
        f2.l_sib=f0.l_parent->m__0right.get();
      }
      if(((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        f0.l_node=f0.l_parent;
        f0.l_parent=f0.l_parent->m__0parent.get();
      }else{
        if((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))){
          f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          this->m_RotateRight(f2.l_sib);
          f2.l_sib=f0.l_parent->m__0right.get();
        }
        f2.l_sib->m__0color=f0.l_parent->m__0color;
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        this->m_RotateLeft(f0.l_parent);
        f0.l_node=this->m__0root.get();
      }
    }else{
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_sib{};
        void gcMark(){
          bbGCMark(l_sib);
        }
      }f2{};
      f2.l_sib=f0.l_parent->m__0left.get();
      if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        this->m_RotateRight(f0.l_parent);
        f2.l_sib=f0.l_parent->m__0left.get();
      }
      if(((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1))))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
        f0.l_node=f0.l_parent;
        f0.l_parent=f0.l_parent->m__0parent.get();
      }else{
        if((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1)))){
          f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0);
          this->m_RotateLeft(f2.l_sib);
          f2.l_sib=f0.l_parent->m__0left.get();
        }
        f2.l_sib->m__0color=f0.l_parent->m__0color;
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
        this->m_RotateRight(f0.l_parent);
        f0.l_node=this->m__0root.get();
      }
    }
  }
  if(bbBool(f0.l_node)){
    f0.l_node->m__0color=t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(1);
  }
}

bbInt t_std_collections_Map_1sTt_std_optionset_Option_2::m_Count(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return bbInt(0);
  }
  return (f0.t0=this->m__0root.get())->m_Count(bbInt(0));
}

t_std_collections_Map_1sTt_std_optionset_Option_2* t_std_collections_Map_1sTt_std_optionset_Option_2::m_Copy(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_root{};
    void gcMark(){
      bbGCMark(l_root);
    }
  }f0{};
  if(bbBool(this->m__0root.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_root=(f1.t0=this->m__0root.get())->m_Copy(((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
  }
  return bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2>(f0.l_root);
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Contains(bbString l_key){
  return (this->m_FindNode(l_key)!=((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
}

void t_std_collections_Map_1sTt_std_optionset_Option_2::m_Clear(){
  this->m__0root=((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0);
}

t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator t_std_collections_Map_1sTt_std_optionset_Option_2::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  return t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator{f0.t0=this->m_FirstNode()};
}

bbBool t_std_collections_Map_1sTt_std_optionset_Option_2::m_Add(bbString l_key,t_std_optionset_Option* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_node{};
    t_std_collections_Map_1sTt_std_optionset_Option_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),((t_std_collections_Map_1sTt_std_optionset_Option_2_Node*)0));
    return true;
  }
  f0.l_node=this->m__0root.get();
  bbInt l_cmp{};
  while(bbBool(f0.l_node)){
    f0.l_parent=f0.l_node;
    l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      return false;
    }
  }
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_std_optionset_Option_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color(0),f0.l_parent);
  if((l_cmp>bbInt(0))){
    f0.l_parent->m__0right=f0.l_node;
  }else{
    f0.l_parent->m__0left=f0.l_node;
  }
  this->m_InsertFixup(f0.l_node);
  return true;
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::gcMark(){
  bbGCMark(m__0value);
  bbGCMark(m__0left);
  bbGCMark(m__0right);
  bbGCMark(m__0parent);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node(bbString l_key,t_m2stp_StpString_Func* l_value,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color l_color,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent){
  this->m__0key=l_key;
  this->m__0value=l_value;
  this->m__0color=l_color;
  this->m__0parent=l_parent;
}
t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::~t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node(){
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::m_Value(t_m2stp_StpString_Func* l_value){
  this->m__0value=l_value;
}

t_m2stp_StpString_Func* t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::m_Value(){
  return this->m__0value.get();
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::m_PrevNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    f1.l_node=this->m__0left.get();
    while(bbBool(f1.l_node->m__0right.get())){
      f1.l_node=f1.l_node->m__0right.get();
    }
    return f1.l_node;
  }
  f0.l_node=this;
  f0.l_parent=this->m__0parent.get();
  while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0left.get()))){
    f0.l_node=f0.l_parent;
    f0.l_parent=f0.l_parent->m__0parent.get();
  }
  return f0.l_parent;
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::m_NextNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    f1.l_node=this->m__0right.get();
    while(bbBool(f1.l_node->m__0left.get())){
      f1.l_node=f1.l_node->m__0left.get();
    }
    return f1.l_node;
  }
  f0.l_node=this;
  f0.l_parent=this->m__0parent.get();
  while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0right.get()))){
    f0.l_node=f0.l_parent;
    f0.l_parent=f0.l_parent->m__0parent.get();
  }
  return f0.l_parent;
}

bbInt t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::m_Count(bbInt l_n){
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_n=(f1.t0=this->m__0left.get())->m_Count(l_n);
  }
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_n=(f1.t0=this->m__0right.get())->m_Count(l_n);
  }
  return (l_n+1);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::m_Copy(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    t_m2stp_StpString_Func* t0{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(t0);
    }
  }f0{};
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node>(this->m__0key,f0.t0=this->m__0value.get(),this->m__0color,l_parent);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_node->m__0left=(f1.t0=this->m__0left.get())->m_Copy(f0.l_node);
  }
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_node->m__0right=(f1.t0=this->m__0right.get())->m_Copy(f0.l_node);
  }
  return f0.l_node;
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node){
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::~t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator(){
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::m_Current(){
  return (*this).m__0node.get();
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
}

int bbCompare(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator&x,const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator&t){
  bbGCMark(t.m__0node);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node){
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::~t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator(){
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

bbString t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::m_Current(){
  return (*this).m__0node.get()->m__0key;
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
}

int bbCompare(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator&x,const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator&t){
  bbGCMark(t.m__0node);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys::t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys(t_std_collections_Map_1sTt_m2stp_StpString_Func_2* l_map){
  (*this).m__0map=l_map;
}
t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys::~t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys(){
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  return t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}

int bbCompare(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys&x,const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys&t){
  bbGCMark(t.m__0map);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node){
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::~t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator(){
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::m_Valid(){
  return bbBool((*this).m__0node.get());
}

t_m2stp_StpString_Func* t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::m_Current(){
  return (*this).m__0node.get()->m__0value.get();
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (*this).m__0node=(f0.t0=(*this).m__0node.get())->m_NextNode();
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::m_AtEnd(){
  return ((*this).m__0node.get()==((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
}

int bbCompare(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator&x,const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator&t){
  bbGCMark(t.m__0node);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues::t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues(t_std_collections_Map_1sTt_m2stp_StpString_Func_2* l_map){
  (*this).m__0map=l_map;
}
t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues::~t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues(){
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t0{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  return t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator{f0.t1=(f0.t0=(*this).m__0map.get())->m_FirstNode()};
}

int bbCompare(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues&x,const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues&t){
  bbGCMark(t.m__0map);
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::gcMark(){
  bbGCMark(m__0root);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2::t_std_collections_Map_1sTt_m2stp_StpString_Func_2(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_root){
  this->m__0root=l_root;
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2::t_std_collections_Map_1sTt_m2stp_StpString_Func_2(){
}
t_std_collections_Map_1sTt_m2stp_StpString_Func_2::~t_std_collections_Map_1sTt_m2stp_StpString_Func_2(){
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m__idxeq(bbString l_key,t_m2stp_StpString_Func* l_value){
  this->m_Set(l_key,l_value);
}

t_m2stp_StpString_Func* t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m__idx(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return ((t_m2stp_StpString_Func*)0);
  }
  return f0.l_node->m__0value.get();
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Values(){
  return t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues{this};
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Update(bbString l_key,t_m2stp_StpString_Func* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return false;
  }
  f0.l_node->m__0value=l_value;
  return true;
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Set(bbString l_key,t_m2stp_StpString_Func* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0),((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
    return true;
  }
  f0.l_node=this->m__0root.get();
  bbInt l_cmp{};
  while(bbBool(f0.l_node)){
    f0.l_parent=f0.l_node;
    l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      f0.l_node->m__0value=l_value;
      return false;
    }
  }
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0),f0.l_parent);
  if((l_cmp>bbInt(0))){
    f0.l_parent->m__0right=f0.l_node;
  }else{
    f0.l_parent->m__0left=f0.l_node;
  }
  this->m_InsertFixup(f0.l_node);
  return true;
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_RotateRight(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  f0.l_child=l_node->m__0left.get();
  l_node->m__0left=f0.l_child->m__0right.get();
  if(bbBool(f0.l_child->m__0right.get())){
    f0.l_child->m__0right.get()->m__0parent=l_node;
  }
  f0.l_child->m__0parent=l_node->m__0parent.get();
  if(bbBool(l_node->m__0parent.get())){
    if((l_node==l_node->m__0parent.get()->m__0right.get())){
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }else{
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }
  }else{
    this->m__0root=f0.l_child;
  }
  f0.l_child->m__0right=l_node;
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_RotateLeft(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  f0.l_child=l_node->m__0right.get();
  l_node->m__0right=f0.l_child->m__0left.get();
  if(bbBool(f0.l_child->m__0left.get())){
    f0.l_child->m__0left.get()->m__0parent=l_node;
  }
  f0.l_child->m__0parent=l_node->m__0parent.get();
  if(bbBool(l_node->m__0parent.get())){
    if((l_node==l_node->m__0parent.get()->m__0left.get())){
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }else{
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }
  }else{
    this->m__0root=f0.l_child;
  }
  f0.l_child->m__0left=l_node;
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_RemoveNode(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_child{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_splice{};
    void gcMark(){
      bbGCMark(l_child);
      bbGCMark(l_parent);
      bbGCMark(l_splice);
    }
  }f0{};
  if(!bbBool(l_node->m__0left.get())){
    f0.l_splice=l_node;
    f0.l_child=l_node->m__0right.get();
  }else if(!bbBool(l_node->m__0right.get())){
    f0.l_splice=l_node;
    f0.l_child=l_node->m__0left.get();
  }else{
    f0.l_splice=l_node->m__0left.get();
    while(bbBool(f0.l_splice->m__0right.get())){
      f0.l_splice=f0.l_splice->m__0right.get();
    }
    f0.l_child=f0.l_splice->m__0left.get();
    l_node->m__0key=f0.l_splice->m__0key;
    l_node->m__0value=f0.l_splice->m__0value.get();
  }
  f0.l_parent=f0.l_splice->m__0parent.get();
  if(bbBool(f0.l_child)){
    f0.l_child->m__0parent=f0.l_parent;
  }
  if(!bbBool(f0.l_parent)){
    this->m__0root=f0.l_child;
    return;
  }
  if((f0.l_splice==f0.l_parent->m__0left.get())){
    f0.l_parent->m__0left=f0.l_child;
  }else{
    f0.l_parent->m__0right=f0.l_child;
  }
  if((f0.l_splice->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1))){
    this->m_DeleteFixup(f0.l_child,f0.l_parent);
  }
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Remove(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(!bbBool(f0.l_node)){
    return false;
  }
  this->m_RemoveNode(f0.l_node);
  return true;
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_LastNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return ((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0);
  }
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node->m__0right.get())){
    f0.l_node=f0.l_node->m__0right.get();
  }
  return f0.l_node;
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Keys(){
  return t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys{this};
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_InsertFixup(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    f0_t(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node):l_node(l_node){
    }
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{l_node};
  while(((bbBool(f0.l_node->m__0parent.get())&&(f0.l_node->m__0parent.get()->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0)))&&bbBool(f0.l_node->m__0parent.get()->m__0parent.get()))){
    if((f0.l_node->m__0parent.get()==f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get())){
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_uncle{};
        void gcMark(){
          bbGCMark(l_uncle);
        }
      }f2{};
      f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0right.get();
      if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0)))){
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f2.l_uncle->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        f0.l_node=f2.l_uncle->m__0parent.get();
      }else{
        struct f3_t : public bbGCFrame{
          t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        if((f0.l_node==f0.l_node->m__0parent.get()->m__0right.get())){
          f0.l_node=f0.l_node->m__0parent.get();
          this->m_RotateLeft(f0.l_node);
        }
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        this->m_RotateRight(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
      }
    }else{
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_uncle{};
        void gcMark(){
          bbGCMark(l_uncle);
        }
      }f2{};
      f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get();
      if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0)))){
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f2.l_uncle->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        f0.l_node=f2.l_uncle->m__0parent.get();
      }else{
        struct f3_t : public bbGCFrame{
          t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        if((f0.l_node==f0.l_node->m__0parent.get()->m__0left.get())){
          f0.l_node=f0.l_node->m__0parent.get();
          this->m_RotateRight(f0.l_node);
        }
        f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        this->m_RotateLeft(f3.t0=f0.l_node->m__0parent.get()->m__0parent.get());
      }
    }
  }
  this->m__0root.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
}

t_m2stp_StpString_Func* t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Get(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m_FindNode(l_key);
  if(bbBool(f0.l_node)){
    return f0.l_node->m__0value.get();
  }
  return ((t_m2stp_StpString_Func*)0);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_FirstNode(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return ((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0);
  }
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node->m__0left.get())){
    f0.l_node=f0.l_node->m__0left.get();
  }
  return f0.l_node;
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_FindNode(bbString l_key){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  f0.l_node=this->m__0root.get();
  while(bbBool(f0.l_node)){
    bbInt l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      return f0.l_node;
    }
  }
  return ((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0);
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Empty(){
  return (this->m__0root.get()==((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_DeleteFixup(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent{};
    f0_t(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent):l_node(l_node),l_parent(l_parent){
    }
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{l_node,l_parent};
  while(((f0.l_node!=this->m__0root.get())&&(!bbBool(f0.l_node)||(f0.l_node->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1))))){
    if((f0.l_node==f0.l_parent->m__0left.get())){
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_sib{};
        void gcMark(){
          bbGCMark(l_sib);
        }
      }f2{};
      f2.l_sib=f0.l_parent->m__0right.get();
      if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        this->m_RotateLeft(f0.l_parent);
        f2.l_sib=f0.l_parent->m__0right.get();
      }
      if(((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1))))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        f0.l_node=f0.l_parent;
        f0.l_parent=f0.l_parent->m__0parent.get();
      }else{
        if((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1)))){
          f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
          this->m_RotateRight(f2.l_sib);
          f2.l_sib=f0.l_parent->m__0right.get();
        }
        f2.l_sib->m__0color=f0.l_parent->m__0color;
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        this->m_RotateLeft(f0.l_parent);
        f0.l_node=this->m__0root.get();
      }
    }else{
      struct f2_t : public bbGCFrame{
        t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_sib{};
        void gcMark(){
          bbGCMark(l_sib);
        }
      }f2{};
      f2.l_sib=f0.l_parent->m__0left.get();
      if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        this->m_RotateRight(f0.l_parent);
        f2.l_sib=f0.l_parent->m__0left.get();
      }
      if(((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1))))){
        f2.l_sib->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
        f0.l_node=f0.l_parent;
        f0.l_parent=f0.l_parent->m__0parent.get();
      }else{
        if((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1)))){
          f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0);
          this->m_RotateLeft(f2.l_sib);
          f2.l_sib=f0.l_parent->m__0left.get();
        }
        f2.l_sib->m__0color=f0.l_parent->m__0color;
        f0.l_parent->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
        this->m_RotateRight(f0.l_parent);
        f0.l_node=this->m__0root.get();
      }
    }
  }
  if(bbBool(f0.l_node)){
    f0.l_node->m__0color=t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(1);
  }
}

bbInt t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Count(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    return bbInt(0);
  }
  return (f0.t0=this->m__0root.get())->m_Count(bbInt(0));
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2* t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Copy(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_root{};
    void gcMark(){
      bbGCMark(l_root);
    }
  }f0{};
  if(bbBool(this->m__0root.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    f0.l_root=(f1.t0=this->m__0root.get())->m_Copy(((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
  }
  return bbGCNew<t_std_collections_Map_1sTt_m2stp_StpString_Func_2>(f0.l_root);
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Contains(bbString l_key){
  return (this->m_FindNode(l_key)!=((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
}

void t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Clear(){
  this->m__0root=((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0);
}

t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  return t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator{f0.t0=this->m_FirstNode()};
}

bbBool t_std_collections_Map_1sTt_m2stp_StpString_Func_2::m_Add(bbString l_key,t_m2stp_StpString_Func* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_node{};
    t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  if(!bbBool(this->m__0root.get())){
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0),((t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*)0));
    return true;
  }
  f0.l_node=this->m__0root.get();
  bbInt l_cmp{};
  while(bbBool(f0.l_node)){
    f0.l_parent=f0.l_node;
    l_cmp=bbCompare(l_key,f0.l_node->m__0key);
    if((l_cmp>bbInt(0))){
      f0.l_node=f0.l_node->m__0right.get();
    }else if((l_cmp<bbInt(0))){
      f0.l_node=f0.l_node->m__0left.get();
    }else{
      return false;
    }
  }
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color(0),f0.l_parent);
  if((l_cmp>bbInt(0))){
    f0.l_parent->m__0right=f0.l_node;
  }else{
    f0.l_parent->m__0left=f0.l_node;
  }
  this->m_InsertFixup(f0.l_node);
  return true;
}

void mx2_main_std_collections_2map_init_f(){
}
