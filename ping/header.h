#pragma once
#include <iostream>

using namespace std;

#ifdef UNICODE
#define TCHAR wchar_t
#define TEXT(p) L##p
#define cout wcout
#define cin wcin
#define strlen wcslen
#define strcpy_s wcscpy_s
#else
#define TCHAR char
#define TEXT(p) p
#endif