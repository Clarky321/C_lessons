#include <iostream>

using namespace std;

// �������, �������� ���������� (����������)

int Foo(int a)
{
	return ++a; //�������� �������� ���������
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int value = 1;

	value = Foo(value); // �������� ������������� �� 1

	cout << value << endl; // ��������� = 2

	return 0;
}