#include <iostream>

using namespace std;

//���� do while (���� � ������������)

int main()
{
	setlocale(LC_ALL, "Rus");

	/*
	do
		{���� �����}
	while (������� �����)

	���� ������� ��������� ����, � ����� ��������� �������.

	���� ����� � ���, ��� ���� do while ���������� ���� �� ���� ���,
	� ����� ������� �� ������� �����.
	*/

	int a = 20;

	do
	{
		cout << "a = " << a << endl;
		a++;

	} while (a < 20);

	return 0;
}