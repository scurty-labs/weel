Namespace APPLICATION_WEEL

Function RunProject(path:String)

	Local projectDir:String = CurrentDir() + path
	Local projectFile:String = projectDir + "/project.json"
	
	' Locate project.json file. (if false then create one: NOTE: ADD LATER)
	If(Not FileExists(projectFile))
		Print "Cannot find 'project.json' file in path"+projectFile
		Return
	Endif
	
	' Load Project File
	Local proj:ProjectConf = New ProjectConf
	If(proj.Load(projectFile))
		Print "Can't load 'project.json' file"
		Return
	Endif
	
	
	Local runDir:String = projectDir + "/" + proj.MainFileName+".products/" + GetHost() + "/" + proj.Name
	
	Print "Checking: " + runDir
	If(FileExists(runDir))
		libc.system(runDir)
	Else
		Print "Cannot find executable"
	Endif

End