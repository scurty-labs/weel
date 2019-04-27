' Written By: Scott Rhine (scurty)

Namespace APPLICATION_WEEL

#rem
	
	TODO:
		- find better command line argument parser(Commands might be subject to change)
		* auto resolve dependencies from modules and projects via project/module.json file
		- add commands to easily install/update monkey2 and ted2go
		- - Probably: `weel install monkey2` AND `weel install ted2go`
		
		- support for desktop icons on all host platforms. I.E: Windows, Mac, and Linux
		- automatic git integration
		
	LIMITATIONS:
		- github master.zip files is not supported yet
		- libcurl.so/dll is needed for proper http/s requests

#end

' - External
#Import "<std>"

' - Internal
#Import "repository.db"
#Import "/templates/@/templates/"

#Import "argparse/argparse"
#Import "m2stp/m2stp"

#Import "funcs"
#Import "project"
#Import "new"
#Import "buildmod"
#Import "build"
#Import "run"
#Import "get"
#Import "install"
#Import "add"
#Import "download"
#Import "module"

Using std..
Using argparse..
Using m2stp..

' MONKEY ENVIRONMENT CONFIG
Global MONKEY_PATH:String = AppDir() + "../"
Global MONKEY_BIN:String = MONKEY_PATH + "bin/"
Global MONKEY_MODS:String = MONKEY_PATH + "modules"
Global MONKEY_SCRIPTS:String = AppDir() + "../scripts/"

' - GitHub Links
Global MONKEY2_GIT:String = "https://github.com/blitz-research/monkey2.git"
Global TED2GO_GIT:String = "https://github.com/engor/Ted2Go.git"

' - Location of Compiler
Global MX2CC:String

' WEEL ENVIRONMENT CONFIG
Global TEMPLATE_DIR:String = "asset::templates/"

Function Main()

	' --- Get 'Host Specific' Monkey Compiler Path
	#If __TARGET__="linux"
		MX2CC = MONKEY_BIN + "mx2cc_linux"
	#ElseIf __TARGET__="windows"
		MX2CC = MONKEY_BIN + "mx2cc_windows"
	#ElseIf __TARGET__"macos"
		MX2CC = MONKEY_BIN + "mx2cc_macos"
	#Endif
	
	' --- Initialize Commands ---
	Local CMD:OptionSet = New OptionSet(AppArgs())
	
	CMD.Reg("new", " [type] [name]~t Generates a new project folder structure.~nTypes: empty, module, console, 2d, 3d, and gui", Lambda(this:Option)
		NewTemplate(this.GetArg(0), this.GetArg(1))
	End, 2)
	
	CMD.Reg("get", " [target name]~t Rownloads package into working directory from the local repository", Lambda(this:Option)
		GetModule(this.GetArg(0), ".")
	End, 1)
	
	CMD.Reg("buildmod", " [module name] [target]~t Rebuilds target module in the 'modules/' folder", Lambda(this:Option)
		BuildModule(this.GetArg(0), this.GetArg(1))
	End, 2)
	
	CMD.Reg("find", " [module name]~t Searches through the repository for target package", Lambda(this:Option)
		If(SourceExists(this.GetArg(0)))
			Print "Module found: " + this.GetArg(0)
		Else
			Print "No module found"
		Endif
	End, 1)
	
	CMD.Reg("check", " [module name]~t Determines if target module is built and ready for use", Lambda(this:Option)
		If(CheckModule(this.GetArg(0)))
			Print this.GetArg(0) + " - is OK"
		Else
			Print this.GetArg(0) + " - no build file found"
		Endif
	End, 1)
	
	CMD.Reg("run", " [project name]~t Executes target project on host system", Lambda(this:Option)
		RunProject(this.GetArg(0))
	End, 1)
	
	CMD.Reg("build", " [path] [project]~t Builds specified application in debug mode", Lambda(this:Option)
		BuildProject(this.GetArg(0), this.GetArg(1), False)
	End, 2)
	
	CMD.Reg("buildr", " [path] [project]~t Builds specified application in release mode", Lambda(this:Option)
		BuildProject(this.GetArg(0), this.GetArg(1), True)
	End, 2)
	
	' --- INSTALL COMMANDS ---
	Local installCMD:Void( Option ) = Lambda(this:Option)
		InstallModule(this.GetArg(0))
	End
	Local installUsage:String = " [module name]~t Installs module from repository to '*/modules'"
	CMD.Reg("install", installUsage, installCMD, 1)
	CMD.Reg("-i", installUsage, installCMD, 1)
	
	CMD.Reg("add", " [name] [.git/.zip URL]~t Adds new git/zip repository entry to locaol sources database.", Lambda(this:Option)
		AddRepo(this.GetArg(0), this.GetArg(1))
	End, 2)
	
	' --- UPDATING MONKEY MODULE BUILDS ---
	CMD.Reg("updatemods", " [platform]~tUpdates build files in module directory without '-clean'", Lambda(this:Option)
		libc.system(MX2CC + " makemods -target="+this.GetArg(0)+" -config=release && " + MX2CC + " makemods -target="+this.GetArg(0)+" -config=debug")
	End, 1)
	
	CMD.Reg("rebuildmods", " [platform]~tCompletely rebuilds all modules.", Lambda(this:Option)
		libc.system(MX2CC + " makemods -clean -target="+this.GetArg(0)+" -config=release && " + MX2CC + " makemods -clean -target="+this.GetArg(0)+" -config=debug")
	End, 1)
	
	#rem
	$mx2cc makemods -clean -target=desktop -config=release
	$mx2cc makemods -clean -target=desktop -config=debug
	#end
	
	' --- HELP COMMANDS ---
	Local helpCMD:Void( Option ) = Lambda(this:Option)
		CMD.PrintHelp()
	End
	CMD.Reg("help", " Displays usage", helpCMD, 0)
	CMD.Reg("-h", " Displays usage", helpCMD, 0)
	
	' - DEFAULT | If any arguments exist or not, just display the help text
	If AppArgs().Length > 1
		CMD.Parse()
	Else
		CMD.PrintHelp()
	End
	
End