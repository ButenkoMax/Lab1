/*Лабораторнаная работа №1 Графики*/
/*Вариант 5 Бутенко М.Г.*/

#include <iostream>
#include <cmath>
using namespace std;

float y, i;

double f1(float x)
{
    int r = 2;
    int kvadrat = 2;

    if (-4 <= x && x <= -2)
    { 
        y = x + 3;
    }
    else if (-2 <= x && x <= 4)
    { 
        y = -0.5 * x;
    }
    else if (4 <= x && x <= 6)
    {
        y = -2;
    }
    else if (6 <= x && x <= 10)
    { 
        y = sqrt(pow(2, kvadrat) - pow((x - 8), kvadrat)) - 2;
    }
    return y;
}

int main()
{
    for (i = -4; i <= 10; i++)
    {
        y = f1(i);
        cout << "Y("<<i<<") ="<<y<<"\n";
    }
    return 0;
}