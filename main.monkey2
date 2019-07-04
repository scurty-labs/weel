Namespace APPLICATION_WEEL

' --- External

#Import "<std>"


' --- Internal

#Import "m2stp/m2stp"
#Import "m2conio/m2conio"

#Import "optionset/optionset"
#Import "m2ci/m2ci"
#Import "m2git/m2git"
#Import "funcs"

#Import "/templates/@/templates/"
#Import "templates"

#Import "sources.json"

#Import "package"
#Import "project"
#Import "module"

' --- ---

Using std..
Using m2ci..
Using m2git..
Using m2conio..

Const APPTITLE:String = "weel"
Const VERSION:String = "0.85a"

Global PROC:M2CI

Function Main:Void()
	
	Local OPTIONS:OptionSet = New OptionSet(AppArgs())
	PROC = New M2CI()
	
	' --- BEGIN OPTIONS ---
	
	OPTIONS.Add("version", 0, Lambda(this:Option)
		Print APPTITLE + " version: " + VERSION
	End)
	
	
	' - MODULE MANAGEMENT -
	
	OPTIONS.Add("rebuildmod", 2, Lambda(this:Option)
		'PROC.BuildModules(this[0], False, False, this[1])
		'PROC.BuildModules(this[0], False, True, this[1])
		WeelBuildModule(this[0], True, this[1])
		PROC.BuildDocs(this[0])
	End)
	
	OPTIONS.Add("buildmod", 2, Lambda(this:Option)
		'PROC.BuildModules(this[0], False, False, this[1])
		'PROC.BuildModules(this[0], False, True, this[1])
		WeelBuildModule(this[0], False, this[1])
		PROC.BuildDocs(this[0])
	End)
	
	' Build ALL Modules in Release and Debug Mode
	OPTIONS.Add("buildmods", 1, Lambda(this:Option)
		PROC.BuildModules("", False, False, this[1])
		PROC.BuildModules("", False, True, this[1])
	End)
	
	' *Rebuild* ALL Modules in Release and Debug Mode
	OPTIONS.Add("rebuildmods", 1, Lambda(this:Option)
		PROC.BuildModules("", True, False, this[1])
		PROC.BuildModules("", True, True, this[1])
	End)
	
	' Displays Module Information
	OPTIONS.Add("info", 1, Lambda(this:Option)
		If(ModuleInstalled(this[0]))
			Local conf:ModuleConf = New ModuleConf()
			conf.LoadJson(AppDir() + MODULE_FOLDER + "/" + this[0])
			conf.PrintInfo()
		Endif
	End)
	
	' Checks the existence and validity(if it's build) of target module
	OPTIONS.Add("check", 1, Lambda(this:Option)
		If(ModuleInstalled(this[0]))
			Print "Module '"+this[0]+"' is installed."
			Local conf:ModuleConf = New ModuleConf()
			conf.LoadJson(AppDir() + MODULE_FOLDER + "/" + this[0])
			If( CheckDependencies(conf.Depends, this[0]) )
				Print "No missing dependencies."
			Else
				Print "Missing dependency."
			Endif
		Else
			Print "Module is not Installed."
		Endif
	End)
	
	
	' - PROJECT COMMANDS -
	
	' Build Project in Debug Mode
	OPTIONS.Add("build", 2, Lambda(this:Option)
		WeelBuildProject(this[0], False, False, this[1])
	End)
	
	' Build Project in Release Mode
	OPTIONS.Add("buildr", 2, Lambda(this:Option)
		WeelBuildProject(this[0], False, True, this[1])
	End)
	
	
	' - DOCUMENTATION COMMANDS -
	
	' Build *ALL* Module Documentation
	OPTIONS.Add("builddocs", 0, Lambda(this:Option)
		PROC.BuildDocs()
	End)
	
	' Build Module Documentation for a singular Module or a set of Modules
	OPTIONS.Add("builddoc", 1, Lambda(this:Option)
		PROC.BuildDocs(this[0])
	End)
	
	
	' - TEMPLATE GENERATION -
	
	OPTIONS.Add("new", 2, Lambda(this:Option)
		GenerateTemplate(this[1], this[0])
	End)
	
	
	' - PACKAGE MANAGEMENT COMMANDS -
	
	OPTIONS.Add("get", 1, Lambda(this:Option)
		GetModule(LoadSources(), this[0], "")
	End)
	
	OPTIONS.Add("install", 1, Lambda(this:Option)
		If(this[0] <> "monkey2")
			GetModule(LoadSources(), this[0], AppDir()+MODULE_FOLDER)
		Else
			
			' --- Download and Install 'Monkey2' ---
			
			' GET MONKEY2 GIT REPO
			GitBranch("https://github.com/blitz-research/monkey2", "monkey2")
			
			
			Local curDir:String = CurrentDir()
			PROC.MX2CC = CurrentDir() + "/monkey2/bin/mx2cc_linux"
			ChangeDir("monkey2/")
			
			#If __TARGET__="linux"
			
				libc.system("chmod 755 bin/mx2cc_linux && echo ~qActivating compiler.~q")
				libc.system("chmod 755 scripts/*.sh && echo ~qActivating shell scripts.~q")
				
				PROC.MX2CC = CurrentDir() + "bin/mx2cc_linux"
				
			#ElseIf __TARGET__"macos"
			
				libc.system("chmod 755 bin/mx2cc_macos && echo ~qActivating compiler.~q")
				libc.system("chmod 755 scripts/*.sh && echo ~qActivating shell scripts.~q")
				
				PROC.MX2CC = CurrentDir() + "bin/mx2cc_macos"
				
			#ElseIf __TARGET__"windows"
			
				' Download 'mingw' into 'devtools'
				'DownloadFile("http://monkeycoder.co.nz/get-file/?file=i686-6.2.0-posix-dwarf-rt_v5-rev1.exe", "devtools/")
				'PROC.MX2CC = CurrentDir() + "bin/mx2cc_windows"
				Print "This feature doesn't support Windows yet."
				
			#Endif
			
			PROC.RebuildMX2CC(True)
			PROC.BuildModules("", True, False, PROC.GetHost())
			PROC.BuildModules("", True, True, PROC.GetHost())
			PROC.BuildDocs()
			ChangeDir(curDir)
			
		Endif
	End)

	OPTIONS.Add("reinstall", 1, Lambda(this:Option)
		Local oldMod:String = AppDir()+MODULE_FOLDER+"/"+this[0]
		If(FileExists(oldMod)) Then DeleteDir(oldMod, True)
		GetModule(LoadSources(), this[0], AppDir()+MODULE_FOLDER)
	End)
	
	
	' - MONKEY MANAGEMENT -
	
	OPTIONS.Add("setup", 0, Lambda(this:Option)
		

		Local curDir:String = CurrentDir()
		ChangeDir(AppDir()+"../")
		
		#If __TARGET__="linux"
		
			libc.system("chmod +x bin/mx2cc_linux && echo ~qActivating compiler.~q")
			libc.system("chmod +x scripts/*.sh && echo ~qActivating shell scripts.~q")
			
		#ElseIf __TARGET__"macos"
		
			libc.system("chmod 755 bin/mx2cc_macos && echo ~qActivating compiler.~q")
			libc.system("chmod 755 scripts/*.sh && echo ~qActivating shell scripts.~q")
			
		#Endif
		
		' UPDATE BIN/MODULES
		PROC.RebuildMX2CC(True)
		PROC.BuildModules("", True, False, PROC.GetHost())
		PROC.BuildModules("", True, True, PROC.GetHost())
		PROC.BuildDocs()

		ChangeDir(curDir)
		
	End)


	OPTIONS.Add("update", 0, Lambda(this:Option)
	
		
		If(Not FileExists(AppDir()+"tmp"))
			CreateDir(AppDir()+"tmp", True, True)
		Endif
		
		If(FileExists(AppDir()+"tmp/monkey2"))
			DeleteDir(AppDir()+"tmp/monkey2", True)
		Endif
		
		' GET MONKEY2 GIT REPO
		ChangeDir(AppDir()+"tmp")
		GitBranch("https://github.com/blitz-research/monkey2", "monkey2")
		
		' TRANSFER NEW FILES
		ChangeDir(AppDir()+"../../")
		CopyDir("bin/tmp/monkey2", "monkey", True)
		
		ChangeDir(AppDir())
		
		' UPDATE BIN/MODULES
		PROC.RebuildMX2CC(True)
		
		PROC.BuildModules("", True, False, PROC.GetHost())
		PROC.BuildModules("", True, True, PROC.GetHost())
		PROC.BuildDocs()
		
		' Git PULL Ted2go
		
		If(FileExists(AppDir()+"tmp/monkey2"))
			DeleteDir(AppDir()+"tmp/monkey2", True)
		Endif
		
	End)
	
	
	
	' - HELP/MANUAL -
	
	Local _help:Void(Option) = Lambda(this:Option)
		
		Print "usage: weel [--help] [new <template> <name>] [get <package>] [install <package>] [reinstall <package>]"
		Print "            [build <project> <platform>] [buildr <project> <platform>] [buildmod <module> <platform>]"
		Print "            [buildmods] [rebuildmod <module> <platform>] [rebuildmods] [info <module>] [check <module>]"
		Print "            [builddocs] [builddoc <module>] [setup] [update]"
		Print ""
		
		Print "<template> = [empty] [console] [gui] [2d] [3d] [module]"
		Print "<platform> = [windows] [macos] [linux] [android] [ios] [wasm] [emscripten]"
		
		Print "~n~n[setup] - Builds Monkey2 from source, activates 'scripts/' folder, builds all modules/documentation."
		Print "[update] - Updates Monkey2 to the latest version and rebuilds mx2cc, all modules and documentation."
		Print "~n[new <template> <name>] - Creates a new project folder and project configuration file."
		Print "~n[get <package>] - Downloads a package from the repository into your working directory."
		Print "[install <package>] - Downloads target module package into the main 'modules' folder."
		Print "[reinstall <package>] - Removes old module and re-downloads target module package."
		Print "~n[build <project> <platform>] - Builds project in *debug* mode for specified platform."
		Print "[buildr <project> <platform>] - Builds target project in *release* mode."
		Print "[buildmod <module> <platform>] - Builds module and its documentation in debug and release mode."
		Print "[buildmods] - Builds all installed modules for target platform"
		Print "[rebuildmod <module> <platform>] - Cleans and builds target module."
		Print "[rebuildmods] - Cleans and rebuilds *ALL* existing modules."
		Print "~n[builddoc <module>] - Assemles documentation for given module."
		Print "[builddocs - Assemles *ALL* documentation for *ALL* modules."
		Print "~n[check <module>] - Checks target modules existence and validity."
		Print "[info <module>] - Displays module information from the modules conf."

		
	End
	OPTIONS.Add("help", 0, _help)
	OPTIONS.Add("-h", 0, _help)
	
	' --- END OPTIONS ---
	
	If AppArgs().Length > 1
		OPTIONS.Parse()
	Else
		_help( New Option("", 0, _help) )
	End
	
End