Namespace APPLICATION_WEEL

Function BuildModule(name:String, target:String)
	
	Local cmd:String = MX2CC+" makemods -clean -target=%TARGET% -config=debug %NAME% && "+MX2CC+" makemods -clean -target=%TARGET% -config=release %NAME%"
	Local code:StpString = New StpString
	code.SetVar("TARGET", target)
	code.SetVar("NAME", name)
	
	'Print MONKEY_MODS+"/"+name
	
	Print "Searching..."
	Local path:String = MONKEY_MODS+"/"+name
	If(FileExists(path))
		Local module:ModuleConf = New ModuleConf()
		If(FileExists(path+"/module.json"))
			
			module.Load(path+"/module.json")
			
			CheckDependencies(module.Depends)
			
			Print "Attempting to build "+name+"..."
			libc.system(code.Format(cmd))
			
		Else
			Print "Can't find "
		Endif
		
	Else
		Print "Module '"+name+"' not found. Folder name must be the same as Module name."
	End
	
End