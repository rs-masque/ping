#include "stdafx.h"
#include "header.h"

int my_start(int argc, TCHAR **argv, TCHAR* host, TCHAR* path, ofstream& log_stream)
{
	switch (argc)
	{
	case 2:
		host = argv[1];
		return 1;
		break;
	case 3:
		host = argv[1];
		path = argv[2];
		log_stream.open(path);
		log_stream.imbue(std::locale(""));
		if (!log_stream.is_open())
			return 101;
		return 2;
	default:
		return 0;
	}
}