#include <iostream>
using namespace std;

// ��������� �����

int main()
{
	setlocale(LC_ALL, "Rus");

	for (i = 1; i < 5; i++)
	{
		cout << "�������� 1-� ���� for �������� � " << i << endl;

		for (int j = 1; j < 5; j++)
		{
			cout << "\t�������� 2� ���� for �������� � " << j << endl;
		}
	}

	return 0;
}