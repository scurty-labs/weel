Namespace m2ci

#Import "<std>"
#Import "../m2stp/m2stp"

Using std..
Using m2stp..

Class M2CI
	
	Field MX2CC:String
	
	Method New()
		
		' --- Get 'Host Specific' Monkey Compiler Path
		#If __TARGET__="linux"
			MX2CC = "mx2cc_linux"
		#ElseIf __TARGET__="windows"
			MX2CC = "mx2cc_windows"
		#ElseIf __TARGET__"macos"
			MX2CC = "mx2cc_macos"
		#Endif
		
	End
	
	Function GetHost:String()
		Local platform:String
		#If __TARGET__="linux"
			platform = "Linux"
		#ElseIf __TARGET__="windows"
			platform = "Windows"
		#ElseIf __TARGET__"macos"
			platform = "Macos"
		#Endif
		Return platform
	End
	
	Method BuildModules(mods:String, clean:Bool, release:Bool, target:String)
		
		Local cmd:String = MX2CC+" makemods %CLEAN% -target=%TARGET% -config=%MODE% %MODS%"
		Local code:StpString = New StpString
		code.SetVar("CLEAN", (clean) ? "-clean" Else "")
		code.SetVar("TARGET", target)
		code.SetVar("MODE", (release) ? "release" Else "debug")
		code.SetVar("MODS", mods)
		libc.system(code.Format(cmd))

	End
	
	Method BuildProject(mainFileName:String, clean:Bool, release:Bool, gui:Bool, target:String, name:String)
		
		Local cmd:String = MX2CC + " makeapp -apptype=%TYPE% -build -config=%MODE% -target=%TARGET% -product=" + CurrentDir() + "%MAIN%" + ".products/%PRODUCT%/%NAME% %PATH%"
		Local code:StpString = New StpString
		code.SetVar("NAME", name)
		code.SetVar("TARGET", target)
		code.SetVar("PRODUCT", target.Capitalize())
		code.SetVar("TYPE", (gui) ? "gui" Else "console")
		code.SetVar("MODE", (release) ? "release" Else "debug" )
		code.SetVar("MAIN", StripExt(mainFileName))
		code.SetVar("PATH", mainFileName)
	
		libc.system(code.Format(cmd))
	End
	
	Method BuildDocs()
		libc.system(MX2CC + " makedocs ")
	End
	
	Method BuildDocs(modules:String)
		libc.system(MX2CC + " makedocs " + modules)
	End
	
	Method RebuildMX2CC(clean:Bool=True)
		Local host:String = GetHost().ToLower()
		BuildModules("monkey libc miniz stb-image stb-image-write stb-vorbis zlib", clean, True, host)
		
		Local curDir:String = CurrentDir()
		ChangeDir(AppDir()+"../src/mx2cc/")
		
		BuildProject("mx2cc.monkey2", clean, True, False, host, "mx2cc")
		CopyFile("mx2cc.products/mx2cc", "../../bin/mx2cc_"+host)
		
		ChangeDir(curDir)
	End
	
	
End Class