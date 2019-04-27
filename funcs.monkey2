Namespace APPLICATION_WEEL

Function FileExists:Bool(path:String)
	Return (GetFileType(path) <> FileType.None) ? True Else False
End

Function LoadSources:String[]()
	Return LoadString("asset::repository.db").Split("~n")
End

Function SourceExists:Bool(name:String)
	Local found:Bool = False
	Local lines:String[] = LoadSources()
	For Local line:String = Eachin lines
		Local repo:String[] = line.Split(" ")
		If repo[0] = name
			found = True
		Endif
	End
	Return found
End

Function AppendSourcesDB(name:String, link:String)
	
	'NOTE: Use append file functions instead of this(Minimize write operations)
	Local file:String = LoadString("asset::repository.db")
	file = file + "~n"+name+" "+link
	SaveString(file, "asset::repository.db")
	
End

Function LoadMonkeyMods:String[]()
	Return LoadDir(MONKEY_MODS)
End

Function CheckMonkeyMod()
End

Function GetHost:String()
	Local platform:String
	#If __TARGET__="linux"
		platform = "Linux"
	#ElseIf __TARGET__="windows"
		platform = "Windows"
	#ElseIf __TARGET__"macos"
		platform = "Macos"
	#Endif
	Return platform
End