#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const int size = 10;

	int arr[size]{55,511,2,123,95};

	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}