Namespace APPLICATION_WEEL

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
	
	Method Load:Bool(path:String)
		Local result:Bool = False
		If(FileExists(path))
			
			' Required Values
			Local obj:JsonObject = JsonObject.Load(path, True)
			Name = obj["module"].ToString()
			About = obj["about"].ToString()
			Version = obj["version"].ToString()
			Author = obj["author"].ToString()
			Depends = obj["depends"].ToArray()
			
		Endif
		Return result
		
	End
	
End Class