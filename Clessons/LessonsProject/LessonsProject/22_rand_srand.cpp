#include <iostream>
#include <ctime>

using namespace std;

/* Генератор случайных чисел */

int main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL));

	// генерация случайных чисел
	int a = rand() % 10;
	cout << a << endl;

	a = rand() % 10;
	cout << a << endl;

	// генерация случайных чисел в массиве
	int const SIZE = 10;
	int arr[];

	for (int i = 0; i < SIZE; i++)
	{
		arr[] = rand() % 100;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}