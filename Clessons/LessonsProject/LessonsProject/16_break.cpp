#include <iostream>

using namespace std;

// �������� ����� break

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "������ �����" << endl;

	for (i = 0; i < 10; i++)
	{
		cout << "���������� i = " << i << endl;

		// �������� �� ��, ��� � ����� for � ������� i < 10, � ��������� if ���� �������, ��� �������
		// ���� i = 5, �� ���������� ���������� (break) � ���� ��� � 26 ������� "����� �����"

		if (i == 5)
		{
			break; // ���������� �����, ����� �� ����
		}
	}

	cout << "����� �����" << endl;

	return 0;
}