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
