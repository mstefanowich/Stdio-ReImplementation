SIZE_T VxStringLength(LPCSTR String)
{
	LPCSTR String2;
	
	for(String2 = String; *String2; ++String2);
	
	return (String2 - String);
}

SIZE_T VxStringLengthW(LPCWSTR String)
{
	LPCWSTR String2;
	
	for(String2 = String; *String2; ++String2);
	
	return (String2 - String);
}