#include <iostream>

using namespace std;

// ���������� ��������

/*

////////////////// 1. ��������� ���������

<	- ������
>	- ������
<=	- ������ ��� �����
>=	- ������ ��� �����

////////////////// 2. ��������� ���������

==	- �����
!=	- �� �����

////////////////// 3. ���������� ��������� ����������� � ������������� ��������

&&	- �
||	- ���
!=	- ��

*/

int main()
{
	cout << (4 > 5) << endl; // �����: false ��� �� �����
	
	cout << (5 > 4) << endl; // �����: true ��� �����

	cout << (5 <= 5) << endl; // �����: true, ��� ��� ������ ��� �����

	cout << (4 == 5) << endl; // �����: false, 4 �� ����� 5

	cout << (5 == 5) << endl; // �����: true, 5 ����� 5

	cout << (5 != 5) << endl; // �����: false , ��� ��� 5 ��������� 5

	cout << !(5 == 5) << endl; // �����: false, ��� ��� �� ����������� �� ���������

	cout << !(5 != 5) << endl; // �����: true, ��� ��� ������ �������������

	cout << ((5 == 5) && (5 > 4)) << endl; // �����: true, ���� ��������� ���� ��������� �������, �� � ��������� �������, � ������ ���� �� ��������� ����, �� �� ��������� ����

	cout << ((3 == 3) || (1 > 0)) << endl; //�����: true, ��� ���, ���� ��������� ���� �� ������ ��������� �������, �� � �� ��������� �������

	return 0;
}