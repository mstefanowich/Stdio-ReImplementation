PCHAR VxSecureStringCopy(PCHAR String1, LPCSTR String2, SIZE_T Size)
{
	PCHAR pChar = String1;
	
	while(Size-- && (*String1++ = *String2++) != '\0');
	
	return pChar;
}

PCHAR VxUnsecureStringCopy(PCHAR String1, LPCSTR String2)
{
	PCHAR pChar = String1;
	
	while((*pChar++ = *String2++) != 0);
	
	return(String1);
}

PWCHAR VxUnsecureStringCopyW(PWCHAR String1, LPCWSTR String2)
{
	PWCHAR pChar = String1;
	
	while((*pChar++ = *String2++) != 0);
	
	return(String1);
}