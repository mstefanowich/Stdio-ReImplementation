# Stdio ReImplementation

This repo contains several reimplementations of various functions from stdio.h (the standard C library).

## Getting Started

Any/all of these .c files can be downloaded in totality or individually copied. All of them act as standalone functions and will need to be defined in your application prior to usage:

```
PVOID VxCopyMemory(PVOID Destination, CONST PVOID Source, SIZE_T Length);
DWORD VxDecimalToAscii(PCHAR String, LPDWORD dwArray, DWORD dwLength);
DWORD VxDecimalToAsciiW(PWCHAR String, LPDWORD dwArray, DWORD dwLength);
PWCHAR VxStringConcatW(PWCHAR String1, LPCWSTR String2);
PCHAR VxStringConcat(PCHAR String1, LPCSTR String2);
PWCHAR VxUnsecureStringCopyW(PWCHAR String1, LPCWSTR String2);
PCHAR VxUnsecureStringCopy(PCHAR String1, LPCSTR String2);
PCHAR VxSecureStringCopy(PCHAR String1, LPCSTR String2, SIZE_T Size);
```

### Prerequisites

Please note that these functions were written with windows.h included. Hence all data types within these functions are not cross platform.

## Running the tests

Once you have the source code included and the functions defined you can simply replace strlen with VxStringLength or VxStringLengthW

## Built With

* [Dev C++](https://sourceforge.net/projects/orwelldevcpp/)
* [Microsoft Windows API](https://msdn.microsoft.com/en-us/library/aa383723(VS.85).aspx)

## Authors

* **Mathew A. Stefanowich** - *Initial work*

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* ReactOS
* StackOverflow
* Apple
