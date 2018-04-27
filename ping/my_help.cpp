#include "stdafx.h"
#include "header.h"

void my_help(void) {
	cout << TEXT("Ping — утилита для проверки целостности и качества соединений в сетях на основе TCP/IP.\n");
	cout << TEXT("Требования к системе: OS Windows\n\n");
	cout << TEXT("Список аргументов:\n");
	cout << TEXT("1 параметр: IP-адрес или DNS-имя. \tDefault: help\n");
	cout << TEXT("2 параметр: путь к файлу лога. \t\tDefault: лог не ведётся\n\n");
	cout << TEXT("Авторы программы: Иванникова Валентина, Шариков Алексей.\n");
	cout << TEXT("Распространяется под лицензией GNU GPLv3.\n");
}