Namespace m2stp

'Base functions

'Adds
Class StpAdd Extends StpString.Func
	
	Method OnCall:String( param:Stack<String> ) Override
		If param.Length<=0 Then Return Null
		Local result:Float
		
		For Local s:=Eachin param
			result+=Float(s)
		Next
		
		Return result
	End
End

'Subtracts
Class StpSub Extends StpString.Func
	
	Method OnCall:String( param:Stack<String> ) Override
		If param.Length<=0 Then Return Null
		Local result:Float=Float( param[0] )
		
		For Local i:=1 Until param.Length
			result-=Float( param[i] )
		Next
		
		Return result
	End
End

'Divides
Class StpDiv Extends StpString.Func
	
	Method OnCall:String( param:Stack<String> ) Override
		If param.Length<=0 Then Return Null
		Local result:Float=Float( param[0] )
		
		For Local i:=1 Until param.Length
			result/=Float( param[i] )
		Next
		
		Return result
	End
End

'Multiplies
Class StpMul Extends StpString.Func
	
	Method OnCall:String( param:Stack<String> ) Override
		If param.Length<=0 Then Return Null
		Local result:Float=Float( param[0] )
		
		For Local i:=1 Until param.Length
			result*=Float( param[i] )
		Next
		
		Return result
	End
End