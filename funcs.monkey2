Namespace APPLICATION_WEEL

Function FileExists:Bool(path:String)
	Return (GetFileType(path) <> FileType.None) ? True Else False
End

Function ElementExists<T>:Bool(collection:T[], element:T)
	Local result:Bool = False
	For Local el := Eachin collection
		If( el = element ) Then result = True
	Next
	Return result
End

Function DownloadFile(link:String, destination:String)

	#if __HOSTOS__="macos"
		Local cmd:="curl -s -o ~q"+destination+"~q -data-binary ~q"+link+"~q"
	#else
		Local cmd:="wget -O ~q"+destination+"~q ~q"+link+"~q"
	#endif
	
	libc.system(cmd)
	
End