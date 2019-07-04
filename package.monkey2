Namespace APPLICATION_WEEL

Const MODULE_FOLDER:String = "../modules"

Function LoadSources:JsonObject()
	Return JsonObject.Load("asset::sources.json", False)
End

Function ModuleInstalled:Bool(name:String)
	If(FileExists(AppDir() + MODULE_FOLDER + "/" + name))
		Local modDir:String[] = LoadDir(AppDir() + MODULE_FOLDER + "/" + name)
		For Local file:String = Eachin modDir
			If file.Contains(".buildv") Then Return True
		Next
	Endif
	Return False
End

Function ResolveDependency:Bool(sources:JsonObject, name:String, target:String)
	Local ok:Bool = False
	If(sources.Contains(name))
		GetModule(sources, name, AppDir()+MODULE_FOLDER)
		WeelBuildModule(name, True, target)
		ok = True
	Endif
	Return ok
End

Function CheckDependencies:Bool(libs:Stack<JsonValue>, target:String)
	Local isOk:Bool = True
	Local sources:JsonObject = LoadSources()
	If(libs.Length <> 0)
		
		Print "Checking Dependencies..."
		For Local lib:JsonValue = Eachin libs
			Ansi.ResetColors()
			
			Local depend:String = lib.ToString()
			Local _listStr:String = "~t " + depend + " - "
			
			If(ModuleInstalled(depend))
				
				Console.Write(_listStr)
				Ansi.Foreground = Ansi.Color.Blue
				Console.Write("Ready~n")
				
			Else
				
				Console.Write(_listStr)
				Ansi.Foreground = Ansi.Color.Red
				Console.Write("Not Ready~n")
				Ansi.Foreground = Ansi.Color.White
				Console.Write("")
				
				If( ResolveDependency(sources, depend, target) )
					
					Console.Write(_listStr)
					Ansi.Foreground = Ansi.Color.Green
					Console.Write("Resolved~n")
					
				Else
					Ansi.Foreground = Ansi.Color.White
					Console.Write("")
					Print "WARNING: Couldn't resolve '"+depend+"'"
					isOk = False
				Endif
			Endif
			
			Ansi.Foreground = Ansi.Color.White
			Console.Write("")
			
		Next
		
	Endif
	
	Return isOk
	
End

Function GetModule(sources:JsonObject, name:String, destination:String)
	
	Print "Checking..."
	If(Not sources.Contains(name))
		Print "Module '" + name + "' not found in repository"
		Return
	Endif
		
	Print "Downloading..."
	Local link:String = sources[name].ToString()
	
	Print "..."
	
	Local curDir:String = CurrentDir()
	If(destination.Length > 0) Then ChangeDir(destination)
	
	GitClone(link, True)
	
	If(destination.Length > 0) Then ChangeDir(curDir)
	Print "Finished"
	
End