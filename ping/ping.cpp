#include "stdafx.h"
#include "header.h"

int _tmain(int argc, TCHAR *argv[])
{
	setlocale(LC_ALL, "");
	TCHAR* host = NULL;
	TCHAR* path = NULL;
	ofstream log_stream;
	int my_err = my_start(argc, argv, host, path, log_stream);
	switch (my_err)
	{
	case 0:
		my_help();
		break;
	case 1:
		// Указан только host
		break;
	case 2:
		// Указаны host и path
		break;
	default:
		cout << my_diag(my_err);
		system("pause");
		log_stream.close();
		return 1;
	}
	log_stream.close();
	system("pause");
    return 0;
}

