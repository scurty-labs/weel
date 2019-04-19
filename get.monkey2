Namespace APPLICATION_WEEL

Function GetModule(name:String, destination:String)
	
	Print "Loading sources..."
	Local lines:String[] = LoadSources()
	
	Print "Locating module..."
	Local link:String = ""
	For Local line:String = Eachin lines
		Local repo:String[] = line.Split(" ")
		If repo[0] = name
			link = repo[1]
		Endif
	End
	
	If(link.Length > 0)
		If(link.EndsWith(".git"))
			GitClone(StripExt(link), destination)
		
		Elseif(link.EndsWith(".zip"))
			DownloadFile(link, name+".zip")

			Print "Extracting..."
			Local module:ZipFile = ZipFile.Open(CurrentDir()+"/"+name+".zip")
			
			Print "Extracting......"
			If(Not module) Then Print "Couldn't open zip file" ; module.Close() ; Return
			If Not module.Extract(destination) Then Print "Couldn't extract zip file"
			
			module.Close()
			DeleteFile(name+".zip")
		
		Endif
	Else
		Print "Module '" + name + "' not found in repository"
	Endif
	
End