Namespace APPLICATION_WEEL

Function WeelBuildModule(name:String, clean:Bool, target:String)
	
	Local module:ModuleConf = New ModuleConf()
	Local modulePath:String = AppDir() + MODULE_FOLDER + "/" + name
	Print modulePath
	If(module.LoadJson(modulePath))
		CheckDependencies(module.Depends, target)
		PROC.BuildModules(name, clean, False, target)
		PROC.BuildModules(name, clean, True, target)
	Else
		Print "Couldn't load 'module.json'"
	Endif
	
End

Class ModuleConf

	#REM - 'module.json' FORMAT
	{
		"module":"",
		"about":"",
		"author":"",
		"version":"",
		"depends":["...","..."]
	}
	
	#END
	
	Field Name:String
	Field About:String
	Field Author:String
	Field Version:String
	Field Depends:Stack<JsonValue>
	
	Method New()	
	End
	
	Method LoadJson:Bool(path:String)
		Local result:Bool = False
		If(FileExists(path+"/module.json"))
			
			' Required Values
			Local obj:JsonObject = JsonObject.Load(path+"/module.json", True)
			Name = obj["module"].ToString()
			About = obj["about"].ToString()
			Version = obj["version"].ToString()
			Author = obj["author"].ToString()
			Depends = obj["depends"].ToArray()
			result = True
			
		Endif
		Return result
		
	End
	
	Method PrintInfo()
		
		Ansi.Foreground = Ansi.Color.White
		
		Console.Write("--- MODULE INFO ---~n")
		
		Console.Write("Name: ")
		Ansi.Foreground = Ansi.Color.Blue
		Console.Write(Self.Name + "~n")
		
		Ansi.Foreground = Ansi.Color.White
		
		Console.Write("Authors: ")
		Ansi.Foreground = Ansi.Color.Blue
		Console.Write(Self.Author + "~n")
		
		Ansi.Foreground = Ansi.Color.White
		
		Console.Write("Version: ")
		Ansi.Foreground = Ansi.Color.Blue
		Console.Write(Self.Version + "~n")
		
		Ansi.Foreground = Ansi.Color.White
		
		Console.Write("Dependencies: ")
		Ansi.Foreground = Ansi.Color.Blue
		For Local d := Eachin Self.Depends
			Console.Write(d.ToString() + " ")
		Next
		Console.Write("~n")
		
		Ansi.Foreground = Ansi.Color.White
		
		Console.Write("~n- DESCRIPTION - ~n")
		Ansi.Foreground = Ansi.Color.Blue
		Console.Write(Self.About + "~n")
		
	End
	
End Class

