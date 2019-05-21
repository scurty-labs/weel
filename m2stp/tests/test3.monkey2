#Import "../m2stp"
Using m2stp..

Function Main()
	
	'Create a new simple text processing object
	'But do not load any of the 'base' functions or variables
	Local formatText:=New StpString( False )
	
	'%stp_version% and $add etc. will no longer work
	'They are part of the 'base' functions and variables
	Print formatText.Format( "Version is=%stp_version%" )
	Print formatText.Format( "What is 1+1=$add(1,1)" )
	
	'But we can add our own variables!
	formatText.SetVar( "my_variable", 5 )
	Print formatText.Format( "My variable is=%my_variable%" )
	
	'And functions!
	formatText.AddFunc( "my_add", New MyAddFunction )
	Print formatText.Format( "What is 1+1=$my_add(1,1)" )
	
	'You can add/set/overwrite variables and functions even if 'base' is loaded
End

Class MyAddFunction Extends StpString.Func
	
	Method OnCall:String( param:Stack<String> ) Override
		
		If param.Length<=0 Then Return Null
		Local result:Float
		
		For Local s:=Eachin param
			result+=Float(s)
		Next
		
		Return result
	End
End