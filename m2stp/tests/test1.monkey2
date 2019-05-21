#Import "../m2stp"
Using m2stp..

Function Main()
	
	'Create a new simple text processing object
	Local formatText:=New StpString
	
	'Format test text
	Print formatText.Format( "STP version is v%stp_version%" )
	
	'Format again
	formatText.Format( "Next version will be v$add(%stp_version%,1)" )
	Print formatText
End