
#include <bbmonkey.h>
#include <bbtypeinfo_r.h>
#include <bbdeclinfo_r.h>

#include "_r.h"

#include "m2conio/native/posix_input.h"

#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2map.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_collections_2stack.h"
#include "std/std.buildv1.1.15/linux_release_mx/include/std_misc_2json.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2ci_2m2ci.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2conio_2m2conio.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2inc_2base_0functions.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_m2stp_2m2stp.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_module.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_optionset_2optionset.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_project.h"
#include "main.buildv1.1.15/linux_release_mx/include/main_std_collections_2map.h"

extern bbString g_APPLICATION_0WEEL_APPTITLE;
extern bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;
extern bbGCVar<t_m2ci_M2CI> g_APPLICATION_0WEEL_PROC;
extern bbString g_APPLICATION_0WEEL_VERSION;

extern bbBool g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target);
extern bbBool g_APPLICATION_0WEEL_ElementExists_1s(bbArray<bbString> l_collection,bbString l_element);
extern bbBool g_APPLICATION_0WEEL_FileExists(bbString l_path);
extern void g_APPLICATION_0WEEL_GenerateTemplate(bbString l_name,bbString l_type);
extern void g_APPLICATION_0WEEL_GetModule(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_destination);
extern void g_m2git_GitBranch(bbString l_link,bbString l_destination);
extern void g_m2git_GitClone(bbString l_link,bbBool l_depth,bbString l_destination);
extern t_std_json_JsonObject* g_APPLICATION_0WEEL_LoadSources();
extern void bbMain();
extern bbBool g_APPLICATION_0WEEL_ModuleInstalled(bbString l_name);
extern bbBool g_APPLICATION_0WEEL_ResolveDependency(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_target);

#if BB_R_APPLICATION_0WEEL || BB_R_APPLICATION_0WEEL__
static struct mx2_main_main_typeinfo : public bbClassDecls{
  mx2_main_main_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("APPLICATION_WEEL")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbConstDecl("APPTITLE",&g_APPLICATION_0WEEL_APPTITLE),bbConstDecl("VERSION",&g_APPLICATION_0WEEL_VERSION),bbGlobalDecl("PROC",&g_APPLICATION_0WEEL_PROC),bbFunctionDecl<void>("Main",&bbMain));
  }
}_mx2_main_main_typeinfo;
static struct mx2_main_module_typeinfo : public bbClassDecls{
  mx2_main_module_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("APPLICATION_WEEL")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void,bbString,bbBool,bbString>("WeelBuildModule",&g_APPLICATION_0WEEL_WeelBuildModule));
  }
}_mx2_main_module_typeinfo;

struct rt_APPLICATION_0WEEL_ModuleConf : public bbClassTypeInfo{
  static rt_APPLICATION_0WEEL_ModuleConf instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_APPLICATION_0WEEL_ModuleConf>(),bbFieldDecl("Name",&t_APPLICATION_0WEEL_ModuleConf::m_Name),bbFieldDecl("About",&t_APPLICATION_0WEEL_ModuleConf::m_About),bbFieldDecl("Author",&t_APPLICATION_0WEEL_ModuleConf::m_Author),bbFieldDecl("Version",&t_APPLICATION_0WEEL_ModuleConf::m_Version),bbFieldDecl("Depends",&t_APPLICATION_0WEEL_ModuleConf::m_Depends),bbMethodDecl<t_APPLICATION_0WEEL_ModuleConf,void>("PrintInfo",&t_APPLICATION_0WEEL_ModuleConf::m_PrintInfo),bbMethodDecl<t_APPLICATION_0WEEL_ModuleConf,bbBool,bbString>("LoadJson",&t_APPLICATION_0WEEL_ModuleConf::m_LoadJson));
    }
  }decls;
  rt_APPLICATION_0WEEL_ModuleConf():bbClassTypeInfo("APPLICATION_WEEL.ModuleConf","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_APPLICATION_0WEEL_ModuleConf*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_APPLICATION_0WEEL_ModuleConf>>(length));
  }
};
rt_APPLICATION_0WEEL_ModuleConf rt_APPLICATION_0WEEL_ModuleConf::instance;
rt_APPLICATION_0WEEL_ModuleConf::decls_t rt_APPLICATION_0WEEL_ModuleConf::decls;

bbTypeInfo *bbGetType(t_APPLICATION_0WEEL_ModuleConf*const&){
  return &rt_APPLICATION_0WEEL_ModuleConf::instance;
}
bbTypeInfo *t_APPLICATION_0WEEL_ModuleConf::typeof()const{
  return &rt_APPLICATION_0WEEL_ModuleConf::instance;
}
static struct mx2_main_project_typeinfo : public bbClassDecls{
  mx2_main_project_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("APPLICATION_WEEL")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void,bbString,bbBool,bbBool,bbString>("WeelBuildProject",&g_APPLICATION_0WEEL_WeelBuildProject));
  }
}_mx2_main_project_typeinfo;

struct rt_APPLICATION_0WEEL_ProjectConf : public bbClassTypeInfo{
  static rt_APPLICATION_0WEEL_ProjectConf instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_APPLICATION_0WEEL_ProjectConf>(),bbFieldDecl("Directory",&t_APPLICATION_0WEEL_ProjectConf::m_Directory),bbFieldDecl("MainFileName",&t_APPLICATION_0WEEL_ProjectConf::m_MainFileName),bbFieldDecl("Name",&t_APPLICATION_0WEEL_ProjectConf::m_Name),bbFieldDecl("Type",&t_APPLICATION_0WEEL_ProjectConf::m_Type),bbFieldDecl("Depends",&t_APPLICATION_0WEEL_ProjectConf::m_Depends),bbFieldDecl("PreDebug",&t_APPLICATION_0WEEL_ProjectConf::m_PreDebug),bbFieldDecl("PostDebug",&t_APPLICATION_0WEEL_ProjectConf::m_PostDebug),bbFieldDecl("PreRelease",&t_APPLICATION_0WEEL_ProjectConf::m_PreRelease),bbFieldDecl("PostRelease",&t_APPLICATION_0WEEL_ProjectConf::m_PostRelease),bbMethodDecl<t_APPLICATION_0WEEL_ProjectConf,bbBool,bbString>("LoadJson",&t_APPLICATION_0WEEL_ProjectConf::m_LoadJson));
    }
  }decls;
  rt_APPLICATION_0WEEL_ProjectConf():bbClassTypeInfo("APPLICATION_WEEL.ProjectConf","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_APPLICATION_0WEEL_ProjectConf*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_APPLICATION_0WEEL_ProjectConf>>(length));
  }
};
rt_APPLICATION_0WEEL_ProjectConf rt_APPLICATION_0WEEL_ProjectConf::instance;
rt_APPLICATION_0WEEL_ProjectConf::decls_t rt_APPLICATION_0WEEL_ProjectConf::decls;

bbTypeInfo *bbGetType(t_APPLICATION_0WEEL_ProjectConf*const&){
  return &rt_APPLICATION_0WEEL_ProjectConf::instance;
}
bbTypeInfo *t_APPLICATION_0WEEL_ProjectConf::typeof()const{
  return &rt_APPLICATION_0WEEL_ProjectConf::instance;
}
static struct mx2_main_package_typeinfo : public bbClassDecls{
  mx2_main_package_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("APPLICATION_WEEL")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbConstDecl("MODULE_FOLDER",&g_APPLICATION_0WEEL_MODULE_0FOLDER),bbFunctionDecl<void,t_std_json_JsonObject*,bbString,bbString>("GetModule",&g_APPLICATION_0WEEL_GetModule),bbFunctionDecl<bbBool,t_std_collections_Stack_1Tt_std_json_JsonValue_2*,bbString>("CheckDependencies",&g_APPLICATION_0WEEL_CheckDependencies),bbFunctionDecl<bbBool,t_std_json_JsonObject*,bbString,bbString>("ResolveDependency",&g_APPLICATION_0WEEL_ResolveDependency),bbFunctionDecl<bbBool,bbString>("ModuleInstalled",&g_APPLICATION_0WEEL_ModuleInstalled),bbFunctionDecl<t_std_json_JsonObject*>("LoadSources",&g_APPLICATION_0WEEL_LoadSources));
  }
}_mx2_main_package_typeinfo;
static struct mx2_main_templates_typeinfo : public bbClassDecls{
  mx2_main_templates_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("APPLICATION_WEEL")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void,bbString,bbString>("GenerateTemplate",&g_APPLICATION_0WEEL_GenerateTemplate));
  }
}_mx2_main_templates_typeinfo;
static struct mx2_main_funcs_typeinfo : public bbClassDecls{
  mx2_main_funcs_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("APPLICATION_WEEL")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<bbBool,bbString>("FileExists",&g_APPLICATION_0WEEL_FileExists),bbFunctionDecl<bbBool,bbArray<bbString>,bbString>("ElementExists",&g_APPLICATION_0WEEL_ElementExists_1s));
  }
}_mx2_main_funcs_typeinfo;
#else
static bbUnknownTypeInfo rt_APPLICATION_0WEEL_ModuleConf("APPLICATION_WEEL.ModuleConf");
bbTypeInfo *bbGetType(t_APPLICATION_0WEEL_ModuleConf*const&){
  return &rt_APPLICATION_0WEEL_ModuleConf;
}
bbTypeInfo *t_APPLICATION_0WEEL_ModuleConf::typeof()const{
  return &rt_APPLICATION_0WEEL_ModuleConf;
}
static bbUnknownTypeInfo rt_APPLICATION_0WEEL_ProjectConf("APPLICATION_WEEL.ProjectConf");
bbTypeInfo *bbGetType(t_APPLICATION_0WEEL_ProjectConf*const&){
  return &rt_APPLICATION_0WEEL_ProjectConf;
}
bbTypeInfo *t_APPLICATION_0WEEL_ProjectConf::typeof()const{
  return &rt_APPLICATION_0WEEL_ProjectConf;
}
#endif

#if BB_R_m2ci || BB_R_m2ci__

struct rt_m2ci_M2CI : public bbClassTypeInfo{
  static rt_m2ci_M2CI instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_m2ci_M2CI>(),bbFieldDecl("MX2CC",&t_m2ci_M2CI::m_MX2CC),bbMethodDecl<t_m2ci_M2CI,void,bbBool>("RebuildMX2CC",&t_m2ci_M2CI::m_RebuildMX2CC),bbMethodDecl<t_m2ci_M2CI,void,bbString,bbBool,bbBool,bbBool,bbString,bbString>("BuildProject",&t_m2ci_M2CI::m_BuildProject),bbMethodDecl<t_m2ci_M2CI,void,bbString,bbBool,bbBool,bbString>("BuildModules",&t_m2ci_M2CI::m_BuildModules),bbMethodDecl<t_m2ci_M2CI,void,bbString>("BuildDocs",&t_m2ci_M2CI::m_BuildDocs),bbMethodDecl<t_m2ci_M2CI,void>("BuildDocs",&t_m2ci_M2CI::m_BuildDocs),bbFunctionDecl<bbString>("GetHost",&g_m2ci_M2CI_GetHost));
    }
  }decls;
  rt_m2ci_M2CI():bbClassTypeInfo("m2ci.M2CI","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_m2ci_M2CI*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_m2ci_M2CI>>(length));
  }
};
rt_m2ci_M2CI rt_m2ci_M2CI::instance;
rt_m2ci_M2CI::decls_t rt_m2ci_M2CI::decls;

bbTypeInfo *bbGetType(t_m2ci_M2CI*const&){
  return &rt_m2ci_M2CI::instance;
}
bbTypeInfo *t_m2ci_M2CI::typeof()const{
  return &rt_m2ci_M2CI::instance;
}
#else
static bbUnknownTypeInfo rt_m2ci_M2CI("m2ci.M2CI");
bbTypeInfo *bbGetType(t_m2ci_M2CI*const&){
  return &rt_m2ci_M2CI;
}
bbTypeInfo *t_m2ci_M2CI::typeof()const{
  return &rt_m2ci_M2CI;
}
#endif

#if BB_R_m2conio || BB_R_m2conio__
static struct mx2_main_m2conio_2m2conio_typeinfo : public bbClassDecls{
  mx2_main_m2conio_2m2conio_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("m2conio")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbGlobalDecl("Console",&g_m2conio_Console),bbGlobalDecl("Ansi",&g_m2conio_Ansi));
  }
}_mx2_main_m2conio_2m2conio_typeinfo;

struct et_m2conio_ConsoleHandler_Key : public bbEnumTypeInfo{
  static et_m2conio_ConsoleHandler_Key instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("A",(t_m2conio_ConsoleHandler_Key)65),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ACBack",(t_m2conio_ConsoleHandler_Key)398),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ACBookmarks",(t_m2conio_ConsoleHandler_Key)402),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ACForward",(t_m2conio_ConsoleHandler_Key)399),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ACHome",(t_m2conio_ConsoleHandler_Key)397),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ACRefresh",(t_m2conio_ConsoleHandler_Key)401),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ACSearch",(t_m2conio_ConsoleHandler_Key)396),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ACStop",(t_m2conio_ConsoleHandler_Key)400),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Any",(t_m2conio_ConsoleHandler_Key)-1),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Apostrophe",(t_m2conio_ConsoleHandler_Key)39),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("AudioMute",(t_m2conio_ConsoleHandler_Key)390),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("AudioNext",(t_m2conio_ConsoleHandler_Key)386),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("AudioPlay",(t_m2conio_ConsoleHandler_Key)389),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("AudioPrev",(t_m2conio_ConsoleHandler_Key)387),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("AudioStop",(t_m2conio_ConsoleHandler_Key)388),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("B",(t_m2conio_ConsoleHandler_Key)66),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Backquote",(t_m2conio_ConsoleHandler_Key)96),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Backslash",(t_m2conio_ConsoleHandler_Key)92),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Backspace",(t_m2conio_ConsoleHandler_Key)8),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("BrightnessDown",(t_m2conio_ConsoleHandler_Key)403),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("BrightnessUp",(t_m2conio_ConsoleHandler_Key)404),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("C",(t_m2conio_ConsoleHandler_Key)67),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Calculator",(t_m2conio_ConsoleHandler_Key)394),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("CapsLock",(t_m2conio_ConsoleHandler_Key)185),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Comma",(t_m2conio_ConsoleHandler_Key)44),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Computer",(t_m2conio_ConsoleHandler_Key)395),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("D",(t_m2conio_ConsoleHandler_Key)68),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("DisplaySwitch",(t_m2conio_ConsoleHandler_Key)405),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Down",(t_m2conio_ConsoleHandler_Key)209),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("E",(t_m2conio_ConsoleHandler_Key)69),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Eject",(t_m2conio_ConsoleHandler_Key)409),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Enter",(t_m2conio_ConsoleHandler_Key)10),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Equals",(t_m2conio_ConsoleHandler_Key)61),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Escape",(t_m2conio_ConsoleHandler_Key)27),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F",(t_m2conio_ConsoleHandler_Key)70),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F1",(t_m2conio_ConsoleHandler_Key)186),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F10",(t_m2conio_ConsoleHandler_Key)195),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F11",(t_m2conio_ConsoleHandler_Key)196),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F12",(t_m2conio_ConsoleHandler_Key)197),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F2",(t_m2conio_ConsoleHandler_Key)187),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F3",(t_m2conio_ConsoleHandler_Key)188),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F4",(t_m2conio_ConsoleHandler_Key)189),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F5",(t_m2conio_ConsoleHandler_Key)190),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F6",(t_m2conio_ConsoleHandler_Key)191),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F7",(t_m2conio_ConsoleHandler_Key)192),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F8",(t_m2conio_ConsoleHandler_Key)193),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("F9",(t_m2conio_ConsoleHandler_Key)194),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("G",(t_m2conio_ConsoleHandler_Key)71),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("H",(t_m2conio_ConsoleHandler_Key)72),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Home",(t_m2conio_ConsoleHandler_Key)202),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("I",(t_m2conio_ConsoleHandler_Key)73),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("IllumDown",(t_m2conio_ConsoleHandler_Key)407),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("IllumToggle",(t_m2conio_ConsoleHandler_Key)406),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("IllumUp",(t_m2conio_ConsoleHandler_Key)408),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Insert",(t_m2conio_ConsoleHandler_Key)201),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("J",(t_m2conio_ConsoleHandler_Key)74),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("K",(t_m2conio_ConsoleHandler_Key)75),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key0",(t_m2conio_ConsoleHandler_Key)48),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key1",(t_m2conio_ConsoleHandler_Key)49),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key2",(t_m2conio_ConsoleHandler_Key)50),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key3",(t_m2conio_ConsoleHandler_Key)51),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key4",(t_m2conio_ConsoleHandler_Key)52),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key5",(t_m2conio_ConsoleHandler_Key)53),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key6",(t_m2conio_ConsoleHandler_Key)54),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key7",(t_m2conio_ConsoleHandler_Key)55),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key8",(t_m2conio_ConsoleHandler_Key)56),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Key9",(t_m2conio_ConsoleHandler_Key)57),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeyDelete",(t_m2conio_ConsoleHandler_Key)127),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeyEnd",(t_m2conio_ConsoleHandler_Key)205),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad0",(t_m2conio_ConsoleHandler_Key)226),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad1",(t_m2conio_ConsoleHandler_Key)217),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad2",(t_m2conio_ConsoleHandler_Key)218),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad3",(t_m2conio_ConsoleHandler_Key)219),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad4",(t_m2conio_ConsoleHandler_Key)220),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad5",(t_m2conio_ConsoleHandler_Key)221),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad6",(t_m2conio_ConsoleHandler_Key)222),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad7",(t_m2conio_ConsoleHandler_Key)223),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad8",(t_m2conio_ConsoleHandler_Key)224),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Keypad9",(t_m2conio_ConsoleHandler_Key)225),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeypadDivide",(t_m2conio_ConsoleHandler_Key)212),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeypadEnter",(t_m2conio_ConsoleHandler_Key)216),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeypadMinus",(t_m2conio_ConsoleHandler_Key)214),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeypadMultiply",(t_m2conio_ConsoleHandler_Key)213),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeypadNumLock",(t_m2conio_ConsoleHandler_Key)211),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeypadPeriod",(t_m2conio_ConsoleHandler_Key)227),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("KeypadPlus",(t_m2conio_ConsoleHandler_Key)215),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("L",(t_m2conio_ConsoleHandler_Key)76),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Left",(t_m2conio_ConsoleHandler_Key)208),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("LeftAlt",(t_m2conio_ConsoleHandler_Key)354),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("LeftBracket",(t_m2conio_ConsoleHandler_Key)91),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("LeftControl",(t_m2conio_ConsoleHandler_Key)352),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("LeftGui",(t_m2conio_ConsoleHandler_Key)355),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("LeftShift",(t_m2conio_ConsoleHandler_Key)353),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("M",(t_m2conio_ConsoleHandler_Key)77),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Mail",(t_m2conio_ConsoleHandler_Key)393),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("MediaSelect",(t_m2conio_ConsoleHandler_Key)391),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Minus",(t_m2conio_ConsoleHandler_Key)45),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Mode",(t_m2conio_ConsoleHandler_Key)385),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("N",(t_m2conio_ConsoleHandler_Key)78),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("O",(t_m2conio_ConsoleHandler_Key)79),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("P",(t_m2conio_ConsoleHandler_Key)80),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("PageDown",(t_m2conio_ConsoleHandler_Key)206),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("PageUp",(t_m2conio_ConsoleHandler_Key)203),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Pause",(t_m2conio_ConsoleHandler_Key)200),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Period",(t_m2conio_ConsoleHandler_Key)46),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("PrintScreen",(t_m2conio_ConsoleHandler_Key)198),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Q",(t_m2conio_ConsoleHandler_Key)81),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("R",(t_m2conio_ConsoleHandler_Key)82),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Right",(t_m2conio_ConsoleHandler_Key)207),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("RightAlt",(t_m2conio_ConsoleHandler_Key)358),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("RightBracket",(t_m2conio_ConsoleHandler_Key)93),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("RightControl",(t_m2conio_ConsoleHandler_Key)356),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("RightGui",(t_m2conio_ConsoleHandler_Key)359),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("RightShift",(t_m2conio_ConsoleHandler_Key)357),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("S",(t_m2conio_ConsoleHandler_Key)83),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("ScrollLock",(t_m2conio_ConsoleHandler_Key)199),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Semicolon",(t_m2conio_ConsoleHandler_Key)59),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Slash",(t_m2conio_ConsoleHandler_Key)47),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Sleep",(t_m2conio_ConsoleHandler_Key)410),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Space",(t_m2conio_ConsoleHandler_Key)32),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("T",(t_m2conio_ConsoleHandler_Key)84),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Tab",(t_m2conio_ConsoleHandler_Key)9),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("U",(t_m2conio_ConsoleHandler_Key)85),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Up",(t_m2conio_ConsoleHandler_Key)210),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("V",(t_m2conio_ConsoleHandler_Key)86),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("W",(t_m2conio_ConsoleHandler_Key)87),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("WWW",(t_m2conio_ConsoleHandler_Key)392),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("X",(t_m2conio_ConsoleHandler_Key)88),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Y",(t_m2conio_ConsoleHandler_Key)89),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("Z",(t_m2conio_ConsoleHandler_Key)90),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("a",(t_m2conio_ConsoleHandler_Key)97),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("b",(t_m2conio_ConsoleHandler_Key)98),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("c",(t_m2conio_ConsoleHandler_Key)99),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("d",(t_m2conio_ConsoleHandler_Key)100),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("e",(t_m2conio_ConsoleHandler_Key)101),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("f",(t_m2conio_ConsoleHandler_Key)102),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("g",(t_m2conio_ConsoleHandler_Key)103),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("h",(t_m2conio_ConsoleHandler_Key)104),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("i",(t_m2conio_ConsoleHandler_Key)105),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("j",(t_m2conio_ConsoleHandler_Key)106),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("k",(t_m2conio_ConsoleHandler_Key)107),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("l",(t_m2conio_ConsoleHandler_Key)108),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("m",(t_m2conio_ConsoleHandler_Key)109),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("n",(t_m2conio_ConsoleHandler_Key)110),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("nop",(t_m2conio_ConsoleHandler_Key)204),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("o",(t_m2conio_ConsoleHandler_Key)111),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("p",(t_m2conio_ConsoleHandler_Key)112),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("q",(t_m2conio_ConsoleHandler_Key)113),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("r",(t_m2conio_ConsoleHandler_Key)114),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("s",(t_m2conio_ConsoleHandler_Key)115),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("t",(t_m2conio_ConsoleHandler_Key)116),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("u",(t_m2conio_ConsoleHandler_Key)117),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("v",(t_m2conio_ConsoleHandler_Key)118),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("w",(t_m2conio_ConsoleHandler_Key)119),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("x",(t_m2conio_ConsoleHandler_Key)120),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("y",(t_m2conio_ConsoleHandler_Key)121),bbLiteralDecl<t_m2conio_ConsoleHandler_Key>("z",(t_m2conio_ConsoleHandler_Key)122));
    }
  }decls;
  et_m2conio_ConsoleHandler_Key():bbEnumTypeInfo("m2conio.ConsoleHandler.Key"){
  }
  bbVariant makeEnum( int i ){
    return bbVariant( (t_m2conio_ConsoleHandler_Key)i );
  }
  int getEnum( bbVariant v ){
    return (int)v.get<t_m2conio_ConsoleHandler_Key>();
  }
};
et_m2conio_ConsoleHandler_Key et_m2conio_ConsoleHandler_Key::instance;
et_m2conio_ConsoleHandler_Key::decls_t et_m2conio_ConsoleHandler_Key::decls;

bbTypeInfo *bbGetType(t_m2conio_ConsoleHandler_Key const&){
  return &et_m2conio_ConsoleHandler_Key::instance;
}

struct rt_m2conio_ConsoleHandler : public bbClassTypeInfo{
  static rt_m2conio_ConsoleHandler instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbMethodDecl<t_m2conio_ConsoleHandler,void,bbString,bbBool>("Write",&t_m2conio_ConsoleHandler::m_Write),bbMethodDecl<t_m2conio_ConsoleHandler,void,bbString,bbInt>("WaitKey",&t_m2conio_ConsoleHandler::m_WaitKey),bbMethodDecl<t_m2conio_ConsoleHandler,bbInt>("KeyHit",&t_m2conio_ConsoleHandler::m_KeyHit),bbMethodDecl<t_m2conio_ConsoleHandler,bbString>("Input",&t_m2conio_ConsoleHandler::m_Input),bbMethodDecl<t_m2conio_ConsoleHandler,void>("Bell",&t_m2conio_ConsoleHandler::m_Bell));
    }
  }decls;
  rt_m2conio_ConsoleHandler():bbClassTypeInfo("m2conio.ConsoleHandler","Struct"){
  }
  bbVariant nullValue(){
    return bbVariant(t_m2conio_ConsoleHandler{});
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<t_m2conio_ConsoleHandler>(length));
  }
};
rt_m2conio_ConsoleHandler rt_m2conio_ConsoleHandler::instance;
rt_m2conio_ConsoleHandler::decls_t rt_m2conio_ConsoleHandler::decls;

bbTypeInfo *bbGetType(t_m2conio_ConsoleHandler const&){
  return &rt_m2conio_ConsoleHandler::instance;
}
bbTypeInfo *t_m2conio_ConsoleHandler::typeof()const{
  return &rt_m2conio_ConsoleHandler::instance;
}

struct rt_m2conio_AnsiHandler_Color : public bbClassTypeInfo{
  static rt_m2conio_AnsiHandler_Color instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbFieldDecl("id",&t_m2conio_AnsiHandler_Color::m_id),bbConstDecl("Black",&g_m2conio_AnsiHandler_Color_Black),bbConstDecl("Blue",&g_m2conio_AnsiHandler_Color_Blue),bbConstDecl("Cyan",&g_m2conio_AnsiHandler_Color_Cyan),bbConstDecl("Green",&g_m2conio_AnsiHandler_Color_Green),bbConstDecl("Magenta",&g_m2conio_AnsiHandler_Color_Magenta),bbConstDecl("Red",&g_m2conio_AnsiHandler_Color_Red),bbConstDecl("White",&g_m2conio_AnsiHandler_Color_White),bbConstDecl("Yellow",&g_m2conio_AnsiHandler_Color_Yellow));
    }
  }decls;
  rt_m2conio_AnsiHandler_Color():bbClassTypeInfo("m2conio.AnsiHandler.Color","Struct"){
  }
  bbVariant nullValue(){
    return bbVariant(t_m2conio_AnsiHandler_Color{});
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<t_m2conio_AnsiHandler_Color>(length));
  }
};
rt_m2conio_AnsiHandler_Color rt_m2conio_AnsiHandler_Color::instance;
rt_m2conio_AnsiHandler_Color::decls_t rt_m2conio_AnsiHandler_Color::decls;

bbTypeInfo *bbGetType(t_m2conio_AnsiHandler_Color const&){
  return &rt_m2conio_AnsiHandler_Color::instance;
}
bbTypeInfo *t_m2conio_AnsiHandler_Color::typeof()const{
  return &rt_m2conio_AnsiHandler_Color::instance;
}

struct rt_m2conio_AnsiHandler : public bbClassTypeInfo{
  static rt_m2conio_AnsiHandler instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbFieldDecl("_foreground",&t_m2conio_AnsiHandler::m__0foreground),bbFieldDecl("_boldForeground",&t_m2conio_AnsiHandler::m__0boldForeground),bbFieldDecl("_lastForeground",&t_m2conio_AnsiHandler::m__0lastForeground),bbFieldDecl("_lastBoldForeground",&t_m2conio_AnsiHandler::m__0lastBoldForeground),bbFieldDecl("_underline",&t_m2conio_AnsiHandler::m__0underline),bbFieldDecl("_lastUnderline",&t_m2conio_AnsiHandler::m__0lastUnderline),bbFieldDecl("_background",&t_m2conio_AnsiHandler::m__0background),bbFieldDecl("_boldBackground",&t_m2conio_AnsiHandler::m__0boldBackground),bbFieldDecl("_lastBackground",&t_m2conio_AnsiHandler::m__0lastBackground),bbFieldDecl("_lastBoldBackground",&t_m2conio_AnsiHandler::m__0lastBoldBackground),bbFieldDecl("_supportsAnsi",&t_m2conio_AnsiHandler::m__0supportsAnsi),bbFieldDecl("_ansiChecked",&t_m2conio_AnsiHandler::m__0ansiChecked),bbMethodDecl<t_m2conio_AnsiHandler,void,bbString>("SetTitle",&t_m2conio_AnsiHandler::m_SetTitle),bbMethodDecl<t_m2conio_AnsiHandler,void,bbUInt,bbUInt>("ScrollingRegion",&t_m2conio_AnsiHandler::m_ScrollingRegion),bbMethodDecl<t_m2conio_AnsiHandler,void>("ResetForeground",&t_m2conio_AnsiHandler::m_ResetForeground),bbMethodDecl<t_m2conio_AnsiHandler,void>("ResetColors",&t_m2conio_AnsiHandler::m_ResetColors),bbMethodDecl<t_m2conio_AnsiHandler,void>("ResetBackground",&t_m2conio_AnsiHandler::m_ResetBackground),bbMethodDecl<t_m2conio_AnsiHandler,void,bbUByte>("RawColor",&t_m2conio_AnsiHandler::m_RawColor),bbMethodDecl<t_m2conio_AnsiHandler,void>("MainBuffer",&t_m2conio_AnsiHandler::m_MainBuffer),bbMethodDecl<t_m2conio_AnsiHandler,void,bbString>("Code",&t_m2conio_AnsiHandler::m_Code),bbMethodDecl<t_m2conio_AnsiHandler,void>("Clear",&t_m2conio_AnsiHandler::m_Clear),bbMethodDecl<t_m2conio_AnsiHandler,bbBool,bbBool>("CheckSupport",&t_m2conio_AnsiHandler::m_CheckSupport),bbMethodDecl<t_m2conio_AnsiHandler,void>("ApplyForeground",&t_m2conio_AnsiHandler::m_ApplyForeground),bbMethodDecl<t_m2conio_AnsiHandler,void>("ApplyBackground",&t_m2conio_AnsiHandler::m_ApplyBackground),bbMethodDecl<t_m2conio_AnsiHandler,void>("AltBuffer",&t_m2conio_AnsiHandler::m_AltBuffer),bbPropertyDecl<t_m2conio_AnsiHandler,t_m2conio_AnsiHandler_Color>("Background",&t_m2conio_AnsiHandler::m_Background,&t_m2conio_AnsiHandler::m_Background),bbPropertyDecl<t_m2conio_AnsiHandler,bbBool>("BackgroundBold",&t_m2conio_AnsiHandler::m_BackgroundBold,&t_m2conio_AnsiHandler::m_BackgroundBold),bbPropertyDecl<t_m2conio_AnsiHandler,t_m2conio_AnsiHandler_Color>("Foreground",&t_m2conio_AnsiHandler::m_Foreground,&t_m2conio_AnsiHandler::m_Foreground),bbPropertyDecl<t_m2conio_AnsiHandler,bbBool>("ForegroundBold",&t_m2conio_AnsiHandler::m_ForegroundBold,&t_m2conio_AnsiHandler::m_ForegroundBold),bbPropertyDecl<t_m2conio_AnsiHandler,bbBool>("Supported",&t_m2conio_AnsiHandler::m_Supported,0),bbPropertyDecl<t_m2conio_AnsiHandler,bbBool>("Underline",&t_m2conio_AnsiHandler::m_Underline,&t_m2conio_AnsiHandler::m_Underline));
    }
  }decls;
  rt_m2conio_AnsiHandler():bbClassTypeInfo("m2conio.AnsiHandler","Struct"){
  }
  bbVariant nullValue(){
    return bbVariant(t_m2conio_AnsiHandler{});
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<t_m2conio_AnsiHandler>(length));
  }
};
rt_m2conio_AnsiHandler rt_m2conio_AnsiHandler::instance;
rt_m2conio_AnsiHandler::decls_t rt_m2conio_AnsiHandler::decls;

bbTypeInfo *bbGetType(t_m2conio_AnsiHandler const&){
  return &rt_m2conio_AnsiHandler::instance;
}
bbTypeInfo *t_m2conio_AnsiHandler::typeof()const{
  return &rt_m2conio_AnsiHandler::instance;
}
#else
static bbUnknownTypeInfo rt_m2conio_ConsoleHandler_Key("m2conio.ConsoleHandler.Key");
bbTypeInfo *bbGetType(t_m2conio_ConsoleHandler_Key const&){
  return &rt_m2conio_ConsoleHandler_Key;
}
static bbUnknownTypeInfo rt_m2conio_ConsoleHandler("m2conio.ConsoleHandler");
bbTypeInfo *bbGetType(t_m2conio_ConsoleHandler const&){
  return &rt_m2conio_ConsoleHandler;
}
bbTypeInfo *t_m2conio_ConsoleHandler::typeof()const{
  return &rt_m2conio_ConsoleHandler;
}
static bbUnknownTypeInfo rt_m2conio_AnsiHandler_Color("m2conio.AnsiHandler.Color");
bbTypeInfo *bbGetType(t_m2conio_AnsiHandler_Color const&){
  return &rt_m2conio_AnsiHandler_Color;
}
bbTypeInfo *t_m2conio_AnsiHandler_Color::typeof()const{
  return &rt_m2conio_AnsiHandler_Color;
}
static bbUnknownTypeInfo rt_m2conio_AnsiHandler("m2conio.AnsiHandler");
bbTypeInfo *bbGetType(t_m2conio_AnsiHandler const&){
  return &rt_m2conio_AnsiHandler;
}
bbTypeInfo *t_m2conio_AnsiHandler::typeof()const{
  return &rt_m2conio_AnsiHandler;
}
#endif

#if BB_R_m2git || BB_R_m2git__
static struct mx2_main_m2git_2m2git_typeinfo : public bbClassDecls{
  mx2_main_m2git_2m2git_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("m2git")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void,bbString,bbString>("GitBranch",&g_m2git_GitBranch),bbFunctionDecl<void,bbString,bbBool,bbString>("GitClone",&g_m2git_GitClone));
  }
}_mx2_main_m2git_2m2git_typeinfo;
#else
#endif

#if BB_R_m2stp || BB_R_m2stp__

struct rt_m2stp_StpString : public bbClassTypeInfo{
  static rt_m2stp_StpString instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_m2stp_StpString,bbBool>(),bbFieldDecl("_escSymbol",&t_m2stp_StpString::m__0escSymbol),bbFieldDecl("_conLeftSymbol",&t_m2stp_StpString::m__0conLeftSymbol),bbFieldDecl("_conRightSymbol",&t_m2stp_StpString::m__0conRightSymbol),bbFieldDecl("_varSymbol",&t_m2stp_StpString::m__0varSymbol),bbFieldDecl("_funcSymbol",&t_m2stp_StpString::m__0funcSymbol),bbFieldDecl("_funcParamSepSymbol",&t_m2stp_StpString::m__0funcParamSepSymbol),bbFieldDecl("_funcParamLeftSymbol",&t_m2stp_StpString::m__0funcParamLeftSymbol),bbFieldDecl("_funcParamRightSymbol",&t_m2stp_StpString::m__0funcParamRightSymbol),bbFieldDecl("_result",&t_m2stp_StpString::m__0result),bbFieldDecl("_funcs",&t_m2stp_StpString::m__0funcs),bbFieldDecl("_vars",&t_m2stp_StpString::m__0vars),bbFieldDecl("_f_string",&t_m2stp_StpString::m__0f_0string),bbMethodDecl<t_m2stp_StpString,bbString>("to",&t_m2stp_StpString::m_to_s),bbMethodDecl<t_m2stp_StpString,void,bbString,bbString>("SetVar",&t_m2stp_StpString::m_SetVar),bbMethodDecl<t_m2stp_StpString,void>("LoadBase",&t_m2stp_StpString::m_LoadBase),bbMethodDecl<t_m2stp_StpString,bbString,bbString>("GetVar",&t_m2stp_StpString::m_GetVar),bbMethodDecl<t_m2stp_StpString,bbString,bbString>("FormatVar",&t_m2stp_StpString::m_FormatVar),bbMethodDecl<t_m2stp_StpString,bbString,bbString>("FormatFunc",&t_m2stp_StpString::m_FormatFunc),bbMethodDecl<t_m2stp_StpString,bbString,bbString>("Format",&t_m2stp_StpString::m_Format),bbMethodDecl<t_m2stp_StpString,bbBool,bbString>("ContainsFunc",&t_m2stp_StpString::m_ContainsFunc),bbMethodDecl<t_m2stp_StpString,bbString,bbString>("CleanEsc",&t_m2stp_StpString::m_CleanEsc),bbMethodDecl<t_m2stp_StpString,bbString,bbString,t_std_collections_Stack_1s*>("CallFunc",&t_m2stp_StpString::m_CallFunc),bbMethodDecl<t_m2stp_StpString,void,bbString,t_m2stp_StpString_Func*>("AddFunc",&t_m2stp_StpString::m_AddFunc));
    }
  }decls;
  rt_m2stp_StpString():bbClassTypeInfo("m2stp.StpString","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_m2stp_StpString*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_m2stp_StpString>>(length));
  }
};
rt_m2stp_StpString rt_m2stp_StpString::instance;
rt_m2stp_StpString::decls_t rt_m2stp_StpString::decls;

bbTypeInfo *bbGetType(t_m2stp_StpString*const&){
  return &rt_m2stp_StpString::instance;
}
bbTypeInfo *t_m2stp_StpString::typeof()const{
  return &rt_m2stp_StpString::instance;
}

struct rt_m2stp_StpString_Func : public bbClassTypeInfo{
  static rt_m2stp_StpString_Func instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbMethodDecl<t_m2stp_StpString_Func,bbString,t_std_collections_Stack_1s*>("OnCall",&t_m2stp_StpString_Func::m_OnCall));
    }
  }decls;
  rt_m2stp_StpString_Func():bbClassTypeInfo("m2stp.StpString.Func","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_m2stp_StpString_Func*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_m2stp_StpString_Func>>(length));
  }
};
rt_m2stp_StpString_Func rt_m2stp_StpString_Func::instance;
rt_m2stp_StpString_Func::decls_t rt_m2stp_StpString_Func::decls;

bbTypeInfo *bbGetType(t_m2stp_StpString_Func*const&){
  return &rt_m2stp_StpString_Func::instance;
}
bbTypeInfo *t_m2stp_StpString_Func::typeof()const{
  return &rt_m2stp_StpString_Func::instance;
}

struct rt_m2stp_StpAdd : public bbClassTypeInfo{
  static rt_m2stp_StpAdd instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_m2stp_StpAdd>(),bbMethodDecl<t_m2stp_StpAdd,bbString,t_std_collections_Stack_1s*>("OnCall",&t_m2stp_StpAdd::m_OnCall));
    }
  }decls;
  rt_m2stp_StpAdd():bbClassTypeInfo("m2stp.StpAdd","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_m2stp_StpString_Func*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_m2stp_StpAdd*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_m2stp_StpAdd>>(length));
  }
};
rt_m2stp_StpAdd rt_m2stp_StpAdd::instance;
rt_m2stp_StpAdd::decls_t rt_m2stp_StpAdd::decls;

bbTypeInfo *bbGetType(t_m2stp_StpAdd*const&){
  return &rt_m2stp_StpAdd::instance;
}
bbTypeInfo *t_m2stp_StpAdd::typeof()const{
  return &rt_m2stp_StpAdd::instance;
}

struct rt_m2stp_StpSub : public bbClassTypeInfo{
  static rt_m2stp_StpSub instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_m2stp_StpSub>(),bbMethodDecl<t_m2stp_StpSub,bbString,t_std_collections_Stack_1s*>("OnCall",&t_m2stp_StpSub::m_OnCall));
    }
  }decls;
  rt_m2stp_StpSub():bbClassTypeInfo("m2stp.StpSub","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_m2stp_StpString_Func*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_m2stp_StpSub*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_m2stp_StpSub>>(length));
  }
};
rt_m2stp_StpSub rt_m2stp_StpSub::instance;
rt_m2stp_StpSub::decls_t rt_m2stp_StpSub::decls;

bbTypeInfo *bbGetType(t_m2stp_StpSub*const&){
  return &rt_m2stp_StpSub::instance;
}
bbTypeInfo *t_m2stp_StpSub::typeof()const{
  return &rt_m2stp_StpSub::instance;
}

struct rt_m2stp_StpDiv : public bbClassTypeInfo{
  static rt_m2stp_StpDiv instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_m2stp_StpDiv>(),bbMethodDecl<t_m2stp_StpDiv,bbString,t_std_collections_Stack_1s*>("OnCall",&t_m2stp_StpDiv::m_OnCall));
    }
  }decls;
  rt_m2stp_StpDiv():bbClassTypeInfo("m2stp.StpDiv","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_m2stp_StpString_Func*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_m2stp_StpDiv*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_m2stp_StpDiv>>(length));
  }
};
rt_m2stp_StpDiv rt_m2stp_StpDiv::instance;
rt_m2stp_StpDiv::decls_t rt_m2stp_StpDiv::decls;

bbTypeInfo *bbGetType(t_m2stp_StpDiv*const&){
  return &rt_m2stp_StpDiv::instance;
}
bbTypeInfo *t_m2stp_StpDiv::typeof()const{
  return &rt_m2stp_StpDiv::instance;
}

struct rt_m2stp_StpMul : public bbClassTypeInfo{
  static rt_m2stp_StpMul instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_m2stp_StpMul>(),bbMethodDecl<t_m2stp_StpMul,bbString,t_std_collections_Stack_1s*>("OnCall",&t_m2stp_StpMul::m_OnCall));
    }
  }decls;
  rt_m2stp_StpMul():bbClassTypeInfo("m2stp.StpMul","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_m2stp_StpString_Func*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_m2stp_StpMul*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_m2stp_StpMul>>(length));
  }
};
rt_m2stp_StpMul rt_m2stp_StpMul::instance;
rt_m2stp_StpMul::decls_t rt_m2stp_StpMul::decls;

bbTypeInfo *bbGetType(t_m2stp_StpMul*const&){
  return &rt_m2stp_StpMul::instance;
}
bbTypeInfo *t_m2stp_StpMul::typeof()const{
  return &rt_m2stp_StpMul::instance;
}
#else
static bbUnknownTypeInfo rt_m2stp_StpString("m2stp.StpString");
bbTypeInfo *bbGetType(t_m2stp_StpString*const&){
  return &rt_m2stp_StpString;
}
bbTypeInfo *t_m2stp_StpString::typeof()const{
  return &rt_m2stp_StpString;
}
static bbUnknownTypeInfo rt_m2stp_StpString_Func("m2stp.StpString.Func");
bbTypeInfo *bbGetType(t_m2stp_StpString_Func*const&){
  return &rt_m2stp_StpString_Func;
}
bbTypeInfo *t_m2stp_StpString_Func::typeof()const{
  return &rt_m2stp_StpString_Func;
}
static bbUnknownTypeInfo rt_m2stp_StpAdd("m2stp.StpAdd");
bbTypeInfo *bbGetType(t_m2stp_StpAdd*const&){
  return &rt_m2stp_StpAdd;
}
bbTypeInfo *t_m2stp_StpAdd::typeof()const{
  return &rt_m2stp_StpAdd;
}
static bbUnknownTypeInfo rt_m2stp_StpSub("m2stp.StpSub");
bbTypeInfo *bbGetType(t_m2stp_StpSub*const&){
  return &rt_m2stp_StpSub;
}
bbTypeInfo *t_m2stp_StpSub::typeof()const{
  return &rt_m2stp_StpSub;
}
static bbUnknownTypeInfo rt_m2stp_StpDiv("m2stp.StpDiv");
bbTypeInfo *bbGetType(t_m2stp_StpDiv*const&){
  return &rt_m2stp_StpDiv;
}
bbTypeInfo *t_m2stp_StpDiv::typeof()const{
  return &rt_m2stp_StpDiv;
}
static bbUnknownTypeInfo rt_m2stp_StpMul("m2stp.StpMul");
bbTypeInfo *bbGetType(t_m2stp_StpMul*const&){
  return &rt_m2stp_StpMul;
}
bbTypeInfo *t_m2stp_StpMul::typeof()const{
  return &rt_m2stp_StpMul;
}
#endif

#if BB_R_std_collections || BB_R_std_collections__ || BB_R_std__
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color("std.collections.Map<monkey.types.String,std.optionset.Option>.Node.Color");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.Node.Color");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color;
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
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.Node");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.KeyIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.MapKeys");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.ValueIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.MapValues");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2("std.collections.Map<monkey.types.String,m2stp.StpString.Func>");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2*const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2;
}
#else
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color("std.collections.Map<monkey.types.String,std.optionset.Option>.Node.Color");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color const&){
  return &rt_std_collections_Map_1sTt_std_optionset_Option_2_Node_Color;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.Node.Color");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node_Color;
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
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.Node");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node*const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Node;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.KeyIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_KeyIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.MapKeys");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapKeys;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.ValueIterator");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_ValueIterator;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues("std.collections.Map<monkey.types.String,m2stp.StpString.Func>.MapValues");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2_MapValues;
}
static bbUnknownTypeInfo rt_std_collections_Map_1sTt_m2stp_StpString_Func_2("std.collections.Map<monkey.types.String,m2stp.StpString.Func>");
bbTypeInfo *bbGetType(t_std_collections_Map_1sTt_m2stp_StpString_Func_2*const&){
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2;
}
bbTypeInfo *t_std_collections_Map_1sTt_m2stp_StpString_Func_2::typeof()const{
  return &rt_std_collections_Map_1sTt_m2stp_StpString_Func_2;
}
#endif

#if BB_R_std_optionset || BB_R_std_optionset__ || BB_R_std__

struct rt_std_optionset_Option : public bbClassTypeInfo{
  static rt_std_optionset_Option instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_std_optionset_Option,bbString,bbInt,bbFunction<void(t_std_optionset_Option*)>>(),bbFieldDecl("cmd",&t_std_optionset_Option::m_cmd),bbFieldDecl("text",&t_std_optionset_Option::m_text),bbFieldDecl("func",&t_std_optionset_Option::m_func),bbFieldDecl("argIndex",&t_std_optionset_Option::m_argIndex),bbFieldDecl("argCount",&t_std_optionset_Option::m_argCount),bbMethodDecl<t_std_optionset_Option,void,t_std_optionset_Option*>("Execute",&t_std_optionset_Option::m_Execute),bbPropertyDecl<t_std_optionset_Option,bbInt>("ArgCount",&t_std_optionset_Option::m_ArgCount,0),bbPropertyDecl<t_std_optionset_Option,bbInt>("ArgIndex",&t_std_optionset_Option::m_ArgIndex,&t_std_optionset_Option::m_ArgIndex),bbPropertyDecl<t_std_optionset_Option,bbString>("Command",&t_std_optionset_Option::m_Command,0));
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
      return bbMembers(bbCtorDecl<t_std_optionset_OptionSet,bbArray<bbString>>(),bbFieldDecl("options",&t_std_optionset_OptionSet::m_options),bbFieldDecl("args",&t_std_optionset_OptionSet::m_args),bbMethodDecl<t_std_optionset_OptionSet,void>("Parse",&t_std_optionset_OptionSet::m_Parse),bbMethodDecl<t_std_optionset_OptionSet,t_std_optionset_Option*,bbString>("Get",&t_std_optionset_OptionSet::m_Get),bbMethodDecl<t_std_optionset_OptionSet,void,bbString,bbInt,bbFunction<void(t_std_optionset_Option*)>>("Add",&t_std_optionset_OptionSet::m_Add));
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