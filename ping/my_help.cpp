#include "stdafx.h"
#include "header.h"


void my_help(void) {
	cout << TEXT("Утилита ping") << endl;
	cout << TEXT("Требования к системе: OS Windows") << endl << endl;
	cout << TEXT("Запуск утилиты:") << endl;
	cout << TEXT("ping [IP/DNS] [log]") << endl;
	cout << TEXT("1 параметр: IP/DNS. \tDefault: справка") << endl;
	cout << TEXT("2 параметр: файл лога. \tDefault: лог не ведётся") << endl;
}