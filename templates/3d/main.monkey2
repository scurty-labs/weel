Namespace APPLICATION_%APPLICATION_NAME%

#Import "<std>"
#Import "<mojo>"
#Import "<mojo3d>"

Using std..
Using mojo..
Using mojo3d..

Class MainWindow Extends Window
	
	Field _scene:Scene
	Field _camera:Camera
	
	Method New(title:String = "%APPLICATION_NAME%", width:Int = 640, height:Int = 480, flags:WindowFlags = Null)
		Super.New(title, width, height, flags)
	End
	
	Method OnCreateWindow() Override
		
		' Initialize Scene
		_scene = New Scene
		_scene.ClearColor = New Color( 0, 0, 0 )
		_scene.AmbientLight = _scene.ClearColor * 0.25
		_scene.FogColor = _scene.ClearColor
		_scene.FogNear = 1.0
		_scene.FogFar = 200.0
		
		' Initialize Camera
		_camera = New Camera( Self )
		
	End
	
	Method OnRender( c:Canvas ) Override
		
		RequestRender()
		_scene.Update()
		
		_camera.Render( c )
		
	End
	
End

Function Main()

	New AppInstance
	New MainWindow
	
	App.Run()
	
End
