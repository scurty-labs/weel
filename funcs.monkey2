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
	If(lines.Length <> 0)
		For Local line:String = Eachin lines
			Local repo:String[] = line.Split(" ")
			If repo[0] = name
				found = True
			Endif
		End
	End
	Return found
End

Function CheckModule:Bool(name:String)
	Local ok:Bool = False
	If(FileExists(MONKEY_MODS+"/"+name))
		For Local file:String = Eachin LoadDir(MONKEY_MODS+"/"+name)
			If file.Contains(".buildv") Then ok = True
		Next
	Endif
	Return ok
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

Function ResolveDependency:Bool(name:String)
	Local ok:Bool = False
	If(SourceExists(name))
		InstallModule(name)
		ok = True
	Endif
	Return ok
End

Function CheckDependencies(libs:Stack<JsonValue>)
	If(libs.Length <> 0)
		For Local lib:JsonValue = Eachin libs
			Local depend:String = lib.ToString()
			If(CheckModule(depend))
				Print depend + " - OK"
			Else
				Print depend + " not found!"
				If( ResolveDependency(depend) )
					Print depend + "- OK"
				Else
					Print "Couldn't resolve '"+depend+"'"
				Endif
			Endif
		Next
	Else
		Print "Empty depends..."
	Endif
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