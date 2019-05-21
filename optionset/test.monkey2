Namespace myapp

#Import "<std>"
#Import "optionset"

Using std..


Function Main()

	Local CMD:OptionSet = New OptionSet(AppArgs())
	
	CMD.Add("-a", Lambda(this:Option)
		Print this.Command + "was entered - " + this.ArgCount + " arguments: " + this[0] + " " + this[1] + " " + this[2] + " " + this[3]
	End, 4)		
	
	CMD.Add("-b", Lambda(this:Option)
		Print "This did a thing..."
	End, 0)
	
	CMD.Add("-h", Lambda(this:Option)
		
	End, 0)
	
	CMD.Add("--help", Lambda(this:Option)
		
	End, 0)
	
	' If any arguments exist or not
	If AppArgs().Length > 1
		CMD.Parse()
	Else
		
	End
	
End