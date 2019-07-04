Namespace APPLICATION_WEEL

Function GenerateTemplate(name:String, type:String)
	
	Local projectDir:String = CurrentDir() + name
	Local typeDir:String = "asset::templates/" + type
	
	' If project doesn't exist already
	If(Not FileExists(projectDir))
		
		' --- Create Project
		If Not ElementExists<String>(LoadDir("asset::templates/"), type)
			Print "Template type: '" + type + "' doesn't exist."
			Return
		Endif

		If Not CopyDir(typeDir, projectDir, True)
			Print "Couldn't create Project: '" + name + "'"
			Return
		Endif
		
		' --- Setup Project
		Local projectFiles:String[] = LoadDir(projectDir)
		For Local file:String = Eachin projectFiles
			
			Local code:StpString = New StpString
			Select file
				
				Case "main.monkey2"
					code.SetVar("APPLICATION_NAME", name.ToUpper())
					SaveString(code.Format(LoadString(projectDir+"/"+file, False)), projectDir+"/main.monkey2", False)
				Case "module.monkey2"
					code.SetVar("MODULE_NAME", name)
					SaveString(code.Format(LoadString(typeDir+"/module.monkey2", False)), projectDir+"/"+name+".monkey2", False)
					DeleteFile(projectDir+"/module.monkey2") ' YUCK!
				Case "module.json"
					code.SetVar("MODULE_NAME", name)
					SaveString(code.Format(LoadString(projectDir+"/"+file, False)), projectDir+"/module.json", False)
				Case "project.json"
					code.SetVar("NAME", name)
					SaveString(code.Format(LoadString(projectDir+"/"+file, False)), projectDir+"/project.json", False)

			End Select
			
		Next
		
	Else
		
		Print "Project with the name: '" + name + "' already exists"
		
	Endif
	
	
End