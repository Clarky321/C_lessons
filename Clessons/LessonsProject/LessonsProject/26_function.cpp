#include <iostream>

using namespace std;

/* ������� */

/*
������������_�������� ���_������� (���������)
{
	����_��������������_���� (����);
}
*/

void foo()
{
	cout << "� �������, ���� �������!" << endl;

	return;
}

int Sum(int a, int b)
{
	int result;
	result = a + b;
	return result;

	// ��� ����������� (���������) ����� ������ ��������:

	return a + b;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	//foo();

	int c;

	int q = 11;
	int w = 12;

	c = Sum(2, 5);

	cout << c << endl;

	return 0;
}