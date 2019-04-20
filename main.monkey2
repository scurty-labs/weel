' Written By: Scott Rhine (scurty)

Namespace APPLICATION_WEEL

#rem
	
	TODO:
		- add `weel find [package name]` [locates repo package]
		- add `weel check [package name]` [checks if target module is installed and/or built correctly]
		- find better command line argument parser(Commands might be subject to change)
		- auto resolve dependencies from modules and projects via project/module.json file
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

Using std..
Using argparse..
Using m2stp..

' MONKEY ENVIRONMENT CONFIG
Global MONKEY_PATH:String = AppDir() + "../"
Global MONKEY_BIN:String = MONKEY_PATH + "bin/"
Global MONKEY_MODS:String = MONKEY_PATH + "modules"
Global MONKEY_SCRIPTS:String = MONKEY_PATH + "scripts/"
Global MX2CC:String

' WEEL ENVIRONMENT CONFIG
Global TEMPLATE_DIR:String = "asset::templates/"

Function Main()

	' --- Get 'Host Specific' Monkey Compiler Path
	#If __TARGET__="linux"
		MX2CC = MONKEY_BIN + "mx2cc_linux"
		'MX2CC = "/home/scott/Apps/monkey/scripts/mx2cc.products/mx2cc_linux"
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
	
	CMD.Reg("get", " [package_name]~t Rownloads package into working directory from the local repository", Lambda(this:Option)
		GetModule(this.GetArg(0), ".")
	End, 1)
	
	CMD.Reg("buildmod", " [module name] [target]~t Rebuilds target module in the 'modules/' folder", Lambda(this:Option)
		BuildModule(this.GetArg(0), this.GetArg(1))
	End, 2)
	
	CMD.Reg("run", " [project name]~t Executes target project on host system", Lambda(this:Option)
		RunProject(this.GetArg(0))
	End, 1)
	
	CMD.Reg("build", " [path] [target]~t Builds specified application in debug mode", Lambda(this:Option)
		BuildProject(this.GetArg(0), this.GetArg(1), False)
	End, 2)
	
	CMD.Reg("buildr", " [path] [target]~t Builds specified application in release mode", Lambda(this:Option)
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