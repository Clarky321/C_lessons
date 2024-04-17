#include <iostream>

using namespace std;

// ключевое слово continue

int main()
{
	setlocale(LC_ALL, "Rus");

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue; // при ключевом слове continue, происходит пропуск условия (i == 5)
		}

		cout << "переменная i = " << i << endl;
	}

	return 0;
}