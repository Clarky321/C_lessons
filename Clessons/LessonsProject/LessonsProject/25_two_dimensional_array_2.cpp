#include <iostream>
#include <ctime>

using namespace std;

/* 
двумерный массив.

двумерный массив вывод. «аполнение. ƒвумерный массив циклы.
*/

int main()
{
	setlocale(LC_ALL, "Rus");

	const int ROWS = 5;
	const int COLS = 8;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "t\";
		}

		cout << endl;
	}

	return 0;
}