#include <iostream>

using namespace std;

/* функции */

/*
возвращаемое_значение им€_функции (параметры)
{
	блок_повтор€ющегос€_кода (тело);
}
*/

void foo()
{
	cout << "я функци€, мен€ вызвали!" << endl;

	return;
}

int Sum(int a, int b)
{
	int result;
	result = a + b;
	return result;

	// при оптимизации (упрощении) можно просто написать:

	return a + b;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	//foo();

	int c;

	int q = 11;
	int w = 12;

	c = Sum(2, 5);

	cout << c << endl;

	return 0;
}