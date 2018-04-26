#include "stdafx.h"
#include "header.h"

int _tmain(int argc, TCHAR *argv[])
{
	setlocale(LC_ALL, "rus");
	TCHAR* host;
	TCHAR* path;
	//TCHAR const* test = TEXT("Тест. Test.");
	if (argc == 2 || argc == 3)
	{
		host = argv[1];
		if (argc == 3)
		{
			path = argv[2];
			wofstream log_file;
			log_file.open(path);
			log_file.imbue(std::locale(""));
			if (log_file.is_open())
			{
				//log_file << test << "\n" << host << "\n" << path;
				log_file.close();
			}
		}

	}
	else
	{
		my_help();
		return 1;
	}
	system("pause");
    return 0;
}

