Namespace APPLICATION_WEEL

#REM - Repository Format

package_name package_download_link.zip
package_name package_download_link.git
package_name package_download_link.git
	
#END

Function AddRepo(name:String, link:String)

	Print "Checking ~q"+link+"~q"
	If(link.StartsWith("http://") Or link.StartsWith("https://") )
		If( link.EndsWith(".git") Or link.EndsWith(".zip") )
		Else
			Print "Invalid URL format, be sure it ends with ~q.git~q or ~q.zip"
		End
	Else
		Print "Invalid URL format, be sure it starts with ~qhttp://~q or ~qhttps://~q"
		Return
	Endif

	AppendSourcesDB(name, link)
	Print "Repository added successfully."
	
End