#include <iostream>

using namespace std;

/* sizeof */

int main()
{
	setlocale(LC_ALL, "rus");

	int arr[]{ 53,53,67,754,5 };

	cout << sizeof(arr)/sizeof(int) << endl;

	return 0;
}