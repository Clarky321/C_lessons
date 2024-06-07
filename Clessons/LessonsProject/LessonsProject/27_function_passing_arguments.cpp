#include <iostream>

using namespace std;

// Функции, передача аргументов (параметров)

int Foo(int a)
{
	return ++a; //преффикс получает приоритет
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int value = 1;

	value = Foo(value); // значение увеличивается на 1

	cout << value << endl; // результат = 2

	return 0;
}