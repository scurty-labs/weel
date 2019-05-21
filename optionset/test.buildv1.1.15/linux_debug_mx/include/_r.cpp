
#include <bbmonkey.h>
#include <bbtypeinfo_r.h>
#include <bbdeclinfo_r.h>

#include "_r.h"

#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"
#include "test.buildv1.1.15/linux_debug_mx/include/test_optionset.h"
#include "test.buildv1.1.15/linux_debug_mx/include/test_std_collections_2map.h"

BB_CLASS(t_std_collections_Stack_1s)

extern void bbMain();
#if BB_R_myapp || BB_R_myapp__
static struct mx2_test_test_typeinfo : public bbClassDecls{
  mx2_test_test_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("myapp")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void>("Main",&bbMain));
  }
}_mx2_test_test_typeinfo;
#else
#endif

#if BB_R_std_collections || BB_R_std_collections__ || BB_R_std__
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color("std.collections.Map<monkey.types.String,std.optionset.Option>.Node.Color");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Node("std.collections.Map<monkey.types.String,std.optionset.Option>.Node");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node*const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_Node::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Iterator("std.collections.Map<monkey.types.String,std.optionset.Option>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Iterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator("std.collections.Map<monkey.types.String,std.optionset.Option>.KeyIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys("std.collections.Map<monkey.types.String,std.optionset.Option>.MapKeys");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator("std.collections.Map<monkey.types.String,std.optionset.Option>.ValueIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_MapValues("std.collections.Map<monkey.types.String,std.optionset.Option>.MapValues");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapValues;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapValues;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2("std.collections.Map<monkey.types.String,std.optionset.Option>");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2*const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2;
}
#else
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color("std.collections.Map<monkey.types.String,std.optionset.Option>.Node.Color");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Node("std.collections.Map<monkey.types.String,std.optionset.Option>.Node");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node*const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_Node::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Iterator("std.collections.Map<monkey.types.String,std.optionset.Option>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Iterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_Iterator::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator("std.collections.Map<monkey.types.String,std.optionset.Option>.KeyIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_KeyIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys("std.collections.Map<monkey.types.String,std.optionset.Option>.MapKeys");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapKeys;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator("std.collections.Map<monkey.types.String,std.optionset.Option>.ValueIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_ValueIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_MapValues("std.collections.Map<monkey.types.String,std.optionset.Option>.MapValues");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapValues;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2_MapValues::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_MapValues;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2("std.collections.Map<monkey.types.String,std.optionset.Option>");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2*const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2;
}
bbTypeInfo *t_std_collections_Map_1sTt_std_optionset_Option_2::typeof()const{
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2;
}
#endif

#if BB_R_std_optionset || BB_R_std_optionset__ || BB_R_std__

struct rt_std_optionset_Option : public bbClassTypeInfo{
  static rt_std_optionset_Option instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_std_optionset_Option,bbString,bbFunction<void(t_std_optionset_Option*)>,bbInt>(),bbFieldDecl("cmd",&t_std_optionset_Option::m_cmd),bbFieldDecl("text",&t_std_optionset_Option::m_text),bbFieldDecl("func",&t_std_optionset_Option::m_func),bbFieldDecl("argIndex",&t_std_optionset_Option::m_argIndex),bbFieldDecl("argCount",&t_std_optionset_Option::m_argCount),bbMethodDecl<t_std_optionset_Option,void,t_std_optionset_Option*>("Execute",&t_std_optionset_Option::m_Execute),bbPropertyDecl<t_std_optionset_Option,bbInt>("ArgCount",&t_std_optionset_Option::m_ArgCount,0),bbPropertyDecl<t_std_optionset_Option,bbInt>("ArgIndex",&t_std_optionset_Option::m_ArgIndex,&t_std_optionset_Option::m_ArgIndex),bbPropertyDecl<t_std_optionset_Option,bbString>("Command",&t_std_optionset_Option::m_Command,0),bbPropertyDecl<t_std_optionset_Option,bbString>("Text",&t_std_optionset_Option::m_Text,&t_std_optionset_Option::m_Text));
    }
  }decls;
  rt_std_optionset_Option():bbClassTypeInfo("std.optionset.Option","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_std_collections_Stack_1s*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_std_optionset_Option*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_std_optionset_Option>>(length));
  }
};
rt_std_optionset_Option rt_std_optionset_Option::instance;
rt_std_optionset_Option::decls_t rt_std_optionset_Option::decls;

bbTypeInfo *bbGetType(t_std_optionset_Option*const&){
  return &rt_std_optionset_Option::instance;
}
bbTypeInfo *t_std_optionset_Option::typeof()const{
  return &rt_std_optionset_Option::instance;
}

struct rt_std_optionset_OptionSet : public bbClassTypeInfo{
  static rt_std_optionset_OptionSet instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_std_optionset_OptionSet,bbArray<bbString>>(),bbFieldDecl("options",&t_std_optionset_OptionSet::m_options),bbFieldDecl("args",&t_std_optionset_OptionSet::m_args),bbMethodDecl<t_std_optionset_OptionSet,void>("Parse",&t_std_optionset_OptionSet::m_Parse),bbMethodDecl<t_std_optionset_OptionSet,t_std_optionset_Option*,bbString>("Get",&t_std_optionset_OptionSet::m_Get),bbMethodDecl<t_std_optionset_OptionSet,void,bbString,bbFunction<void(t_std_optionset_Option*)>,bbInt>("Add",&t_std_optionset_OptionSet::m_Add));
    }
  }decls;
  rt_std_optionset_OptionSet():bbClassTypeInfo("std.optionset.OptionSet","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_std_optionset_OptionSet*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_std_optionset_OptionSet>>(length));
  }
};
rt_std_optionset_OptionSet rt_std_optionset_OptionSet::instance;
rt_std_optionset_OptionSet::decls_t rt_std_optionset_OptionSet::decls;

bbTypeInfo *bbGetType(t_std_optionset_OptionSet*const&){
  return &rt_std_optionset_OptionSet::instance;
}
bbTypeInfo *t_std_optionset_OptionSet::typeof()const{
  return &rt_std_optionset_OptionSet::instance;
}
#else
static bbUnknownTypeInfo rt_std_optionset_Option("std.optionset.Option");
bbTypeInfo *bbGetType(t_std_optionset_Option*const&){
  return &rt_std_optionset_Option;
}
bbTypeInfo *t_std_optionset_Option::typeof()const{
  return &rt_std_optionset_Option;
}
static bbUnknownTypeInfo rt_std_optionset_OptionSet("std.optionset.OptionSet");
bbTypeInfo *bbGetType(t_std_optionset_OptionSet*const&){
  return &rt_std_optionset_OptionSet;
}
bbTypeInfo *t_std_optionset_OptionSet::typeof()const{
  return &rt_std_optionset_OptionSet;
}
#endif