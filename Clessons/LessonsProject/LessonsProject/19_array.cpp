#include <iostream>

using namespace std;

// ћассивы

int main()
{
	setlocale(LC_ALL, "Rus");

	/*
	ћассив представл€ет набор однотипных данных. ‘ормальное определение массива выгл€дит так:

	тип_переменной название_массива [длина_массива]

	int numbers[]
	*/

	int arr[4];

	arr[0] = 5;
	arr[1] = 7;
	arr[2] = 10;
	arr[3] = 3333;

	cout << arr[0] << endl;

	return 0;
}