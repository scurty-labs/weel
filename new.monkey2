Namespace APPLICATION_WEEL

Function NewTemplate(type:String, name:String)
	
	Local projectDir:String = CurrentDir() + name
	Local typeDir:String = TEMPLATE_DIR + type
	
	' Check template folder existance
	If(GetFileType(typeDir) = FileType.Directory)
		
		' --- Create Project
		If Not CopyDir(typeDir, projectDir, True)
			Print "Couldn't create project: " + name
			Return
		Endif
		
		' --- Setup Project
		Local projectFiles:String[] = LoadDir(projectDir)
		For Local file:String = Eachin projectFiles
			
			Local code:StpString = New StpString
			Select file
				
				Case "main.monkey2"
					code.SetVar("APPLICATION_NAME", "APPLICATION_" + name.ToUpper())
					SaveString(code.Format(LoadString(projectDir+"/"+file, False)), projectDir+"/main.monkey2", False)
				Case "module.monkey2"
					code.SetVar("MODULE_NAME", name)
					SaveString(code.Format(LoadString(projectDir+"/"+file, False)), projectDir+"/"+name+".monkey2", False)
				Case "module.json"
					code.SetVar("MODULE_NAME", name)
					SaveString(code.Format(LoadString(projectDir+"/"+file, False)), projectDir+"/module.json", False)
				Case "project.json"
					code.SetVar("NAME", name)
					SaveString(code.Format(LoadString(projectDir+"/"+file, False)), projectDir+"/project.json", False)

			End Select
			
		Next
		
	Endif
	
	
End