Namespace APPLICATION_WEEL

Class ProjectConf

	#REM - 'project.json' FORMAT
	{
		"main":"main", // Main file name
		"name":"%NAME%", // Executable file name
		"type":"gui", // Type of application being worked on (might be useful in the future)
		
		"dependencies":["std", "libc"],
		
		// Optional Post/Pre | Debug/Release Shell Commands/Scripts
		"preDebug":"",
		"postDebug":""',
		
		"preRelease":"",
		"postRelease":""
	}
	
	#END
	
	Field MainFileName:String
	Field Name:String
	Field Type:String
	Field PreDebug:String
	Field PostDebug:String
	Field PreRelease:String
	Field PostRelease:String
	
	Method New()	
	End
	
	Method Load:Bool(path:String)
		Local result:Bool = False
		If(FileExists(path))
			
			' Required Values
			Local obj:JsonObject = JsonObject.Load(path, True)
			MainFileName = obj["main"].ToString()
			Name = obj["name"].ToString()
			Type = obj["type"].ToString()
			
			' Optional Structures
			PreDebug = obj["preDebug"].ToString()
			PostDebug = obj["postDebug"].ToString()
			PreRelease = obj["preRelease"].ToString()
			PostRelease = obj["postRelease"].ToString()
			
		Endif
		Return result
		
	End
	
End Class