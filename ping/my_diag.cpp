#include "stdafx.h"
#include "header.h"

string my_diag(int my_err)
{
	switch (my_err)
	{
	case 101:
		return TEXT("������! \n���� �� ����� ���� ������!\n");
	default:
		return TEXT("����������� ������!\n");
	}
}