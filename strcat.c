PCHAR VxStringConcat(PCHAR String1, LPCSTR String2)
{
	VxUnsecureStringCopy(&String1[VxStringLength(String1)], String2);
	
	return String1;
}

PWCHAR VxStringConcatW(PWCHAR String1, LPCWSTR String2)
{
	VxUnsecureStringCopyW(&String1[VxStringLengthW(String1)], String2);
	
	return String1;
}