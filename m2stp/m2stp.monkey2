' Monkey2 Simple text processing
' By @Hezkore 2018
' https://github.com/Hezkore/m2stp

Namespace m2stp

#Import "<std>"
Using std..

#Import "inc/base_functions"

Class StpString
	'Symbols all have a max length of 1
	Field _escSymbol:String="'"
	Field _conLeftSymbol:String="["
	Field _conRightSymbol:String="]"
	Field _varSymbol:String="%"
	Field _funcSymbol:String="$"
	Field _funcParamSepSymbol:String=","
	Field _funcParamLeftSymbol:String="("
	Field _funcParamRightSymbol:String=")"
	
	'Previous result
	Field _result:String
	
	'Stored functions and variables
	Field _funcs:=New Map<String,Func>
	Field _vars:=New Map<String,String>
	
	'Format related
	Field _f_string:String
	
	Method New( loadBase:Bool=True )
		If loadBase Then LoadBase()
	End
	
	Method Format:String( str:String )
		
		_f_string=FormatVar( str )
		If ContainsFunc( _f_string ) Then
			_result=FormatFunc( _f_string )
		Else
			_result=_f_string
		Endif
		
		'Clean up escape symbols
		_result=CleanEsc( _result )
		
		Return _result
	End
	
	Method CleanEsc:String( str:String )
		Local result:String
		Local chr:String
		Local nextChr:String
		Local thirdChr:String
		
		For Local i:=0 Until str.Length
			chr=String.FromChar( str[i] )
			nextChr=Null
			If i<str.Length-1 nextChr=String.FromChar( str[i+1] )
			thirdChr=Null
			If i<str.Length-2 thirdChr=String.FromChar( str[i+2] )
			
			'Skip escape symbol unless there's 3 of them
			If chr=_escSymbol Then
				If chr=_escSymbol And nextChr=_escSymbol And thirdChr=_escSymbol Then
					result+=chr
				Endif
				
				Continue
			Endif
			
			result+=chr
		Next
		
		Return result
	End
	
	Method FormatFunc:String( str:String )
		Local name:String
		Local paramData:String
		Local params:=New Stack<String>
		Local inEsc:Bool
		Local result:String
		Local chr:String
		Local nextChr:String
		Local thirdChr:String
		Local nested:Int
		
		For Local i:=0 Until str.Length
			chr=String.FromChar( str[i] )
			nextChr=Null
			If i<str.Length-1 nextChr=String.FromChar( str[i+1] )
			thirdChr=Null
			If i<str.Length-2 thirdChr=String.FromChar( str[i+2] )
				
			If Not inEsc Then
				If chr=_funcSymbol Then
					'We've found a function!
					
					'Look forward for left symbol
					For Local fi:=i+1 Until str.Length
						chr=String.FromChar( str[fi] )
						
						'Left symbol found
						If chr=_funcParamLeftSymbol Then
							
							'Look forward for parameters
							For Local pi:=fi+1 Until str.Length
								chr=String.FromChar( str[pi] )
								
								'Is this another function?
								If chr=_funcSymbol Then
									nested+=1
								Endif
								
								If nested Then
									paramData+=chr
									If chr=_funcParamRightSymbol Then
										nested-=1
									Endif
								Else
									If chr=_funcParamSepSymbol Or chr=_funcParamRightSymbol Then
										If paramData Then params.Add( paramData )
										paramData=Null
										
										If chr=_funcParamRightSymbol Then
											'EXECUTE!
											For Local pfi:=0 Until params.Length
												If ContainsFunc( params[pfi] ) Then
													params[pfi]=FormatFunc( params[pfi] )
												Endif
											Next
											
											result+=CallFunc( name, params )
											
											'Jump forward to the end of the function
											i=pi
											
											'Reset data
											name=Null
											paramData=Null
											params.Clear()
											
											Exit
										Endif
									Else
										paramData+=chr
									Endif
								Endif
								
							Next
							
							Exit
						Else
							name+=chr
						Endif
					Next
				Elseif chr=_escSymbol Then
						
						If nextChr=_escSymbol And thirdChr=_escSymbol Then
							inEsc=False
							result+=chr.Dup(3)
							i+=2
						Else
							inEsc=True
							result+=chr
						Endif
					Else
						result+=chr
				Endif
			Else
				
				'Inside escape character
				If chr=_escSymbol Then
						inEsc=False
						result+=chr
					Else
						result+=chr
				Endif
			Endif
			
		Next
		
		Return result
	End
	
	Method ContainsFunc:Bool( str:String )
		Local inEsc:Bool
		Local chr:String
		Local nextChr:String
		Local thirdChr:String
		
		For Local i:=0 Until str.Length
			chr=String.FromChar( str[i] )
			nextChr=Null
			If i<str.Length-1 nextChr=String.FromChar( str[i+1] )
			thirdChr=Null
			If i<str.Length-2 thirdChr=String.FromChar( str[i+2] )
			
			If chr=_escSymbol Then
				
				If nextChr=_escSymbol And thirdChr=_escSymbol Then
					inEsc=False
					i+=2
				Else
					inEsc=Not inEsc
				Endif
				
			Endif
			
			'We've found a function!
			If Not inEsc And chr=_funcSymbol Then
				Return True
			Endif
		Next
		
		Return False
	End
	
	Method FormatVar:String( str:String )
		Local inVar:Bool
		Local name:String
		Local inEsc:Bool
		Local result:String
		Local chr:String
		Local nextChr:String
		Local thirdChr:String
		
		For Local i:=0 Until str.Length
			chr=String.FromChar( str[i] )
			nextChr=Null
			If i<str.Length-1 nextChr=String.FromChar( str[i+1] )
			thirdChr=Null
			If i<str.Length-2 thirdChr=String.FromChar( str[i+2] )
				
			If inVar Then
				If chr=_varSymbol Then
					result+=GetVar( name )
					inVar=False
					name=Null
				Else
					name+=chr
				Endif
			Else
				If Not inEsc Then
					If chr=_escSymbol Then
						
						If nextChr=_escSymbol And thirdChr=_escSymbol Then
							inEsc=False
							result+=chr.Dup(3)
							i+=2
						Else
							inEsc=True
							result+=chr
						Endif
						
					Elseif chr=_varSymbol
						inVar=True
					Else
						result+=chr
					Endif
				Else
					If chr=_escSymbol Then
						inEsc=False
						result+=chr
					Else
						result+=chr
					Endif
				Endif
			Endif
		Next
		
		Return result
	End
	
	Method CallFunc:String( name:String, param:Stack<String> )
		name=name.ToLower()
		'Print "Calling function ~q"+name+"~q"
		
		If _funcs.Contains( name ) Then
			'Print "Found func ~q"+name+"~q"
			
			'Okay function found, clean parameters
			For Local i:=0 Until param.Length
				param[i]=param[i].Trim()
				param[i]=param[i].Replace( "~n", "" )
				param[i]=param[i].Replace( "~r", "" )
				param[i]=param[i].Replace( "~t", "" )
			Next
			
			Return _funcs.Get( name ).OnCall( param )
		Endif
		'Print "Could not find func ~q"+name+"~q"
		Return Null
	End
	
	Method AddFunc(  name:String, f:Func )
		If f Then
			'Print "Adding function ~q"+name
			_funcs.Add( name.ToLower(), f )
		Endif
	End
	
	Method GetVar:String( name:String )
		name=name.ToLower()
		If _vars.Contains( name ) Then
			'Print "Found variable ~q"+name+"~q with value ~q"+_vars.Get( name )+"~q"
			Return _vars.Get( name )
		Endif
		Return Null
	End
	
	Method SetVar( name:String, v:String )
		'Print "Setting variable ~q"+name+"~q to ~q"+v+"~q"
		name=name.ToLower()
		If name Then
			If _vars.Contains( name ) Then
				_vars.Update( name, v )
			Else
				_vars.Add( name, v )
			Endif
		Endif
	End
	
	Method To:String()
		Return _result
	End
	
	Method LoadBase()
		'Functions
		AddFunc( "add", New StpAdd )
		AddFunc( "sub", New StpSub )
		AddFunc( "div", New StpDiv )
		AddFunc( "mul", New StpMul )
		
		'Variables
		SetVar( "stp_version", "1" )
	End
	
	Class Func Abstract
		
		Method OnCall:String( param:Stack<String> ) Virtual
			Return Null
		End
	End
End