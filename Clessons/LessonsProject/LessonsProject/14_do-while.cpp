#include <iostream>

using namespace std;

//Цикл do while (цикл с постусловием)

int main()
{
	setlocale(LC_ALL, "Rus");

	/*
	do
		{тело цикла}
	while (условие цикла)

	Цикл сначала выполняет тело, а затем проверяет условие.

	Суть цикла в том, что цикл do while выполнится хотя бы один раз,
	а после перейдёт на условие цикла.
	*/

	int a = 20;

	do
	{
		cout << "a = " << a << endl;
		a++;

	} while (a < 20);

	return 0;
}