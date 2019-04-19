Namespace myapp

#Import "<std>"
#Import "cmdparse"

Using std..
Using cmdparse..


Function Main()

	Local CMD:OptionSet = New OptionSet(AppArgs())
	
	CMD.Reg("-a", "[x] [y] [z] [w], --mmmm~tDoes a thing...", Lambda(this:Option)
		Print this.ID + "was entered - " + this.ArgC + " arguments: " + this.GetArg(0) + " " + this.GetArg(1) + " " + this.GetArg(2) + " " + this.GetArg(3)
	End, 4)		
	
	CMD.Reg("-b", "~t~tDoes another thing", Lambda(this:Option)
		Print "This did a thing..."
	End, 0)
	
	CMD.Reg("-h", ", --help~t~tPrints help page", Lambda(this:Option)
		CMD.PrintHelp()	
	End, 0)
	
	CMD.Reg("--help", "", Lambda(this:Option)
		CMD.PrintHelp()	
	End, 0)
	
	' If any arguments exist or not
	If AppArgs().Length > 1
		CMD.Parse()
	Else
		CMD.PrintHelp()	
	End
	
End