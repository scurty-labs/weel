#Import "../m2stp"
Using m2stp..

#Import "assets/version.txt"

Function Main()
	
	'Create a new simple text processing object
	Local formatText:=New StpString
	
	'Exactly the same as example1 but via external file
	Print formatText.Format( LoadString("asset::version.txt") )
End