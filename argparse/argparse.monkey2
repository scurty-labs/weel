Namespace argparse

#Import "<std>"
Using std..

Class Option
	
	Private
	
	Field id:String
	Field text:String
	Field func:Void(Option)
	Field args:StringStack
	Field argc:Int
	Field argi:Int ' Argument Index (Start of)
	
	Public
	Method New(id:String, text:String, func:Void(Option), argc:Int)
		Self.id = id ; Self.text = text ; Self.func = func ; Self.argc = argc
		Self.args = New StringStack()
	End
	
	Property ID:String()
		Return Self.id
	End
	
	Property ArgI:Int()
		Return Self.argi
	Setter( argi:Int )
		Self.argi = argi
	End
	
	Property ArgC:Int()
		Return Self.argc
	End
	
	Method AddArg(arg:String)
		args.Add(arg)
	End
	
	Method GetArg:String(index:Int)
		Return Self.args[index]
	End
	
	Method Execute(option:Option)
		If(argc = args.Length)
			Self.func(option)
		Else
			Print "Invalid Arguments..."
		Endif
	End
	
End Class

Class OptionSet
	
	Private
	
	Field optionList:StringMap<Option>
	Field cmdArgs:String[]
	
	Public
	
	Method New(args:String[])
		cmdArgs = args
		optionList = New StringMap<Option>
	End

	Method Reg(id:String, text:String="", func:Void(Option), argc:Int)
		optionList.Add(id, New Option(id, text, func, argc))
	End
	
	Method Get:Option(id:String)
		Return optionList.Get(id)
	End
	
	' Print Help Page
	Method PrintHelp()
		For Local opt:Option = Eachin optionList.Values
			If(opt.text.Length > 0)
				Print opt.id + opt.text
			Endif
		Next
	End
	
	Method Parse()
		If cmdArgs.Length > 1
			For Local num:Int = 0 To cmdArgs.Length-1
				If(optionList.Contains(cmdArgs[num]))
					
					Local opt:Option = optionList.Get(cmdArgs[num])
					
					' Set argument index
					opt.ArgI = num
					
					' Parse and add option specific arguments
					For Local i:Int = 1 To opt.ArgC
						If num+i <= cmdArgs.Length-1
							opt.AddArg(cmdArgs[num+i])
						Endif
					Next
					
					' Execute associative function
					opt.Execute(opt)
					
				Endif
			Next
		Endif
	End

End Class

