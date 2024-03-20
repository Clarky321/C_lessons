#include <iostream>

using namespace std;

// Оператор множественного выбора switch.

int main()
{
	setlocale(LC_ALL, "Rus");

	/*
	switch (выражение)
	{
	case значение1: если выражение равно 1, выполняется этот блок кода
		действие1;
		break;

	case значение2: если выражение равно 2, выполняется этот блок кода
		действие2;
		break;

	default: во всех остальных случаях, выполняется этот блок кода
		действие по умолчанию;
		break;

	*/

	int a;
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "Вы ввели 1" << endl;
		break;

	case 2:
		cout << "Вы ввели 2" << endl;
		break;

	default:
		cout << "Я не знаю этого числа!" << endl;
		break;
	}

	return 0;
}