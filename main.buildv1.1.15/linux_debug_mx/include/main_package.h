
#ifndef MX2_MAIN_PACKAGE_H
#define MX2_MAIN_PACKAGE_H

#include <bbmonkey.h>

BB_CLASS(t_std_collections_Stack_1Tt_std_json_JsonValue_2)
BB_CLASS(t_std_json_JsonObject)

extern bbString g_APPLICATION_0WEEL_MODULE_0FOLDER;

void g_APPLICATION_0WEEL_GetModule(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_destination);
void g_APPLICATION_0WEEL_CheckDependencies(t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_libs,bbString l_target);
bbBool g_APPLICATION_0WEEL_ResolveDependency(t_std_json_JsonObject* l_sources,bbString l_name,bbString l_target);
bbBool g_APPLICATION_0WEEL_ModuleInstalled(bbString l_name);
t_std_json_JsonObject* g_APPLICATION_0WEEL_LoadSources();

#endif
