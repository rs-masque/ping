#include "stdafx.h"
#include "header.h"


void my_help(void) {
	cout << TEXT("Ping — утилита для проверки целостности и качества соединений в сетях на основе TCP/IP.") << endl;
	cout << TEXT("Требования к системе: OS Windows") << endl << endl;
	cout << TEXT("Список аргументов:") << endl;
	cout << TEXT("1 параметр: IP/DNS. \t\tDefault: help") << endl;
	cout << TEXT("2 параметр: путь к файлу лога. \tDefault: лог не ведётся") << endl << endl;
	cout << TEXT("Авторы программы: Иванникова Валентина, Шариков Алексей") << endl;
}