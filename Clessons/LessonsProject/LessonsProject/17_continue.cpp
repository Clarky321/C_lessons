#include <iostream>

using namespace std;

// �������� ����� continue

int main()
{
	setlocale(LC_ALL, "Rus");

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue; // ��� �������� ����� continue, ���������� ������� ������� (i == 5)
		}

		cout << "���������� i = " << i << endl;
	}

	return 0;
}