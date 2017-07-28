DWORD VxDecimalToAscii(PCHAR String, LPDWORD dwArray, DWORD dwLength)
{
	DWORD dwX = ERROR_SUCCESS;
	
	if(String == NULL)
		return ERROR_SUCCESS;
	
	for(;dwX < dwLength; dwX++){	String[dwX] = (TCHAR)dwArray[dwX];	}
	
	return dwX;
	
}

DWORD VxDecimalToAsciiW(PWCHAR String, LPDWORD dwArray, DWORD dwLength)
{
	DWORD dwX = ERROR_SUCCESS;
	
	if(String == NULL)
		return ERROR_SUCCESS;
	
	for(;dwX < dwLength; dwX++){	String[dwX] = (WCHAR)dwArray[dwX];	}
	
	return dwX;
}