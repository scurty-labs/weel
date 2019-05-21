#Import "<std>"
#Import "<mojo>"
#Import "<mojox>"
Using std..
Using mojo..
Using mojox..

#Import "../m2stp"
Using m2stp..

Class MyWindow Extends Window
	
	Field script:StpString
	Field code:TextField
	Field dock:DockingView
	
	Method New()
		Super.New( "Simple Mojo Gui App",640,480,WindowFlags.Resizable )
		
		script=New StpString
		code=New TextField( "Mouse location is %mouse_x%,%mouse_y% (write here!)" )
		dock=New DockingView
		
		Self.ContentView=dock
		dock.AddView( code, "top", 32 )
	End
	
	Method OnRender( canvas:Canvas ) Override
		App.RequestRender()
		script.SetVar( "mouse_x", Mouse.Location.X )
		script.SetVar( "mouse_y", Mouse.Location.Y )
		canvas.DrawText( script.Format( code.Text ), Width/2, Height/2, 0.5, 0.5 )
	End
End

Function Main()
	New AppInstance
	New MyWindow
	App.Run()
End