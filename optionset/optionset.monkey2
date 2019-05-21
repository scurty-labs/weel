Namespace std.optionset

#Import "<std>"

Using std.collections

Class Option Extends Stack<String>
	
	Private
	
	Field cmd:String
	Field text:String
	Field func:Void(Option)
	Field argIndex:Int
	Field argCount:Int
	
	Public
	
	Method New(command:String, argCount:Int, func:Void(Option))
		Super.New(); Self.cmd = cmd ; Self.text = text ; Self.func = func ; Self.argCount = argCount
	End
	
	Property Command:String()
		Return cmd 
	End
	
	Property ArgIndex:Int()
		Return Self.argIndex
	Setter( value:Int )
		Self.argIndex = value
	End
	
	Property ArgCount:Int()
		Return Self.argCount
	End
	
	Method Execute(option:Option)
		If(Self.argCount = Length)
			Self.func(option)
		Else
			Print "Invalid Arguments..."
		Endif
	End
	
End Class

Class OptionSet
	
	Private
	
	Field options:StringMap<Option>
	Field args:String[]
	
	Public
	
	Method New(args:String[])
		Self.args = args
		Self.options = New StringMap<Option>
	End

	Method Add(cmd:String, argc:Int, func:Void(Option))
		options.Add(cmd, New Option(cmd, argc, func))
	End
	
	Method Get:Option(id:String)
		Return options.Get(id)
	End
	
	Method Parse()
		If args.Length > 1
			For Local num:Int = 0 To args.Length-1
				If(options.Contains(args[num]))
					
					Local opt:Option = options.Get(args[num])
					
					' Set argument index
					opt.ArgIndex = num
					
					' Parse and add option specific arguments
					For Local i:Int = 1 To opt.ArgCount
						If num+i <= args.Length-1
							opt.Add(args[num+i])
						Endif
					Next
					
					' Execute associative function
					opt.Execute(opt)
					
				Endif
			Next
		Endif
	End

End Class

