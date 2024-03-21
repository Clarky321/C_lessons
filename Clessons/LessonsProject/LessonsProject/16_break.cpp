#include <iostream>

using namespace std;

// ключевое слово break

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "начало цикла" << endl;

	for (i = 0; i < 10; i++)
	{
		cout << "переменна€ i = " << i << endl;

		// Ќесмотр€ на то, что у цикла for в условие i < 10, в операторе if есть условие, при котором
		// если i = 5, то происходит прерывани€ (break) и цикл идЄт в 26 строчку " онец цикла"

		if (i == 5)
		{
			break; // прерывани€ цикла, выход из него
		}
	}

	cout << " онец цикла" << endl;

	return 0;
}