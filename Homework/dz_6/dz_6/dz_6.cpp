#include <iostream>

using namespace std;

/*
Написать программу, которая выводит на экран прямоугольник символом #. Высота и ширина задаётся пользователям. 
*/

int main()
{
    setlocale(LC_ALL, "Rus");

    int height, width;

    cout << "Введите высоту прямоугольника" << endl;
    cin >> height;

    cout << "Введите ширину прямоугольника" << endl;
    cin >> width;

    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            cout << "#";
        }

        cout << endl;
    }

    return 0;
}
