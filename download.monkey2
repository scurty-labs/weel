Namespace APPLICATION_WEEL


Function DownloadFile(link:String, destination:String)

	#if __HOSTOS__="macos"
		Local cmd:="curl -s -o ~q"+destination+"~q -data-binary ~q"+link+"~q"
	#else
		Local cmd:="wget -O ~q"+destination+"~q ~q"+link+"~q"
	#endif
	
	libc.system(cmd)
	
End

Function GitClone:Bool(link:String, dir:String=".")
	
	Local code:StpString = New StpString
	Const cmd:String = "git clone %LINK% %DIR%"
	Local finalLink:String = link + ".git"
	Local repoName:String = StripDir(link)
	Local result:Bool = False
	Print "Checking ~q" + repoName + "~q"
	
	' Delete old repo
	If(FileExists(dir+"/"+repoName))
		DeleteDir(dir+"/"+repoName, True)
	Endif
	
	' Run Git Command
	code.SetVar("LINK", link + ".git")
	code.SetVar("DIR", dir+"/"+repoName)
	
	Local procGitClone:Process = New Process()
	If Not procGitClone.Start(code.Format(cmd))
		Print "Couldn't start ~qgit clone~q process"
	Else
		Print "Retreiving " + repoName + "..."
		While(Not result)
			If(FileExists(dir+"/"+repoName))
				result = True
			End
		Wend
	Endif
	Return result
End