Namespace APPLICATION_WEEL

Function BuildModule(name:String, target:String)
	
	Local cmd:String = MX2CC+" makemods -clean -target=%TARGET% -config=debug %NAME% && "+MX2CC+" makemods -clean -target=%TARGET% -config=release %NAME%"
	Local code:StpString = New StpString
	code.SetVar("TARGET", target)
	code.SetVar("NAME", name)
	
	Print "Locating Module..."
	Print MONKEY_MODS+"/"+name

	If(FileExists(MONKEY_MODS+"/"+name))
		Print "Attempting to build "+name+"..."
		libc.system(code.Format(cmd))
	Else
		Print "Module '"+name+"' not found. Folder name must be the same as Module name."
	End
	
End