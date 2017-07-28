PVOID VxCopyMemory(PVOID Destination, CONST PVOID Source, SIZE_T Length)
{
	PCHAR D		= Destination;
	LPCSTR S	= Source;
	
	while(Length--)
		*D++ = *S++;
	
	return Destination;
}