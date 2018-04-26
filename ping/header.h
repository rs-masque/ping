#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#ifdef UNICODE
#define TCHAR wchar_t
#define TEXT(p) L##p
#define cout wcout
#define cin wcin
#define string wstring
#define strlen wcslen
#define strcpy_s wcscpy_s
#define ofstream wofstream
#else
#define TCHAR char
#define TEXT(p) p
#endif

void my_help(void);
bool my_echo(string host);