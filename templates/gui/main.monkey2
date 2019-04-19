Namespace %APPLICATION_NAME%

#Import "<std>"
#Import "<mojo>"
#Import "<mojox>"

Using std..
Using mojo..
Using mojox..

Class MainWindow Extends Window

	Method New(title:String = "%APPLICATION_NAME%", width:Int = 640, height:Int = 480, flags:WindowFlags = Null)
		Super.New(title, width, height, flags)
	End

End

Function Main()

	New AppInstance
	New MainWindow
	
	App.Run()
	
End

