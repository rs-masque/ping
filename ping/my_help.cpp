#include "stdafx.h"
#include "header.h"


void my_help(void) {
	cout << TEXT("Утилита ping") << endl;
	cout << TEXT("Требования к системе: OS Windows") << endl;
	cout << TEXT("Список аргументов:") << endl;
	cout << TEXT("1 параметр: IP/DNS. \tDefault: help") << endl;
	cout << TEXT("2 параметр: файл лога. \tDefault: лог не ведётся") << endl;
	//system("pause");
}