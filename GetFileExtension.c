PCHAR VxGetFileExtension(PCHAR FileName)
{
	PCHAR Extension = VxStringChar(FileName, '.');
	if(!Extension || Extension == FileName) return NULL;
	
	return Extension;
}

PCHAR VxStringChar(PCHAR FileName, INT Char)
{
	PCHAR Save;
	CHAR pC;
	
	for(Save = (PCHAR)0; (pC = *FileName); FileName++)
	{
		if(pC == Char)
			Save = (PCHAR)FileName;
	}
			
	return Save;
}


PWCHAR VxGetFileExtension(PWCHAR FileName)
{
	PWCHAR Extension = VxStringChar(FileName, '.');
	if(!Extension || Extension == FileName) return NULL;
	
	return Extension;
}

PWCHAR VxStringChar(PWCHAR FileName, INT Char)
{
	PWCHAR Save;
	WCHAR pC;
	
	for(Save = (PWCHAR)0; (pC = *FileName); FileName++)
	{
		if(pC == Char)
			Save = (PWCHAR)FileName;
	}
			
	return Save;
}

