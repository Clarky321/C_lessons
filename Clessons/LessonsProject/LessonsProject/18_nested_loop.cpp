#include <iostream>
using namespace std;

// вложенные циклы

int main()
{
	setlocale(LC_ALL, "Rus");

	for (i = 1; i < 5; i++)
	{
		cout << "Сработал 1-й цикл for итерация № " << i << endl;

		for (int j = 1; j < 5; j++)
		{
			cout << "\tсработал 2й цикл for итерация № " << j << endl;
		}
	}

	return 0;
}