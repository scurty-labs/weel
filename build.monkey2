Namespace APPLICATION_WEEL

Function BuildProject(path:String, target:String, release:Bool)
	
	' MX2CC + " makeapp -apptype=%TYPE% -build -config=%MODE% -product=" + CurrentDir() + %NAME% + "/" + %NAME% + ".products/" + %NAME% + " " + %MAIN%
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
		
	' Look for main file .monkey2
	Local main:String = CurrentDir() + proj.Name + "/" + proj.MainFileName + ".monkey2"
	If(Not FileExists(main))
		Print "Can't find the project main file at: " + main
		Return
	Endif
	
	' Assemble command...
	Local cmd:String = MX2CC + " makeapp -apptype=%TYPE% -build -config=%MODE% -target=%TARGET% -product=" + CurrentDir() + "%NAME%" + "/" + "%MAIN%" + ".products/%TARGET2%/%NAME% %PATH%"
	Local code:StpString = New StpString
	code.SetVar("NAME", proj.Name)
	code.SetVar("TARGET", target)
	code.SetVar("TARGET2", target.Capitalize())
	code.SetVar("TYPE", proj.Type)
	code.SetVar("MODE", (release) ? "release" Else "debug" )
	code.SetVar("MAIN", proj.MainFileName)
	code.SetVar("PATH", main)
	cmd = code.Format(cmd)
	Local prevDir:String = CurrentDir()
	ChangeDir(projectDir)
	If(proj.PreDebug.Length <> 0 And Not release) Then libc.system(proj.PreDebug)
	If(proj.PreRelease.Length <> 0) And release Then libc.system(proj.PreRelease)
	ChangeDir(prevDir)
	' --- BUILD APPLICATION ----
	libc.system(cmd)

	ChangeDir(projectDir)
	If(proj.PostDebug.Length <> 0 And Not release) Then libc.system(proj.PostDebug)
	If(proj.PostRelease.Length <> 0 And release) Then libc.system(proj.PostRelease)
	ChangeDir(prevDir)
	
End