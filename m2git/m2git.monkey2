Namespace m2git

#Import "../m2stp/m2stp"

Using m2stp..

Function GitClone(link:String, depth:Bool, destination:String="")
	
	Local code:StpString = New StpString
	Const cmd:String = "git clone %LIMIT% %LINK% %DIR%"
	code.SetVar("LINK", link + ".git")
	code.SetVar("DIR", destination)
	code.SetVar("LIMIT", (depth) ? "--depth 1" Else "")
	libc.system(code.Format(cmd))

End

Function GitBranch(link:String, destination:String=".")
	
	Local code:StpString = New StpString
	Const cmd:String = "git clone --single-branch %LINK% %DIR%"
	code.SetVar("LINK", link + ".git")
	code.SetVar("DIR", destination)
	libc.system(code.Format(cmd))

End