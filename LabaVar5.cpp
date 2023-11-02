/*Лабораторнаная работа №1 Графики*/
/*Вариант 5 Бутенко М.Г.*/

#include <iostream>
#include <cmath> 

using namespace std;
int main()
{
    float x, y;       //объявляем пременные
    

    int r = 2;
    int a = -4;
    int b = -2;
    int c = 4;
    int d = 6;
    int e = 10;
    int kvadrat = 2;
   
   
    cout <<"x = ";
    cin>>x;
    
    if (a <= x && x <= b) {  //отрезок от -4 до -2
        
        cout << " y = ";
        cout << x+3;           //расчет у для заданного отрезка
    
    
    } else if (b <= x && x <= c) {   // отрезок от -2 до 4
       
       cout << " y = ";
       cout << -0.5*x;        //расчет у для заданного отрезка

    } else if (c <= x && x <= d) { // отрезок от 4 до 6
       
       cout << " y = ";
       cout << -2;  //расчет у для заданного отрезка
    
    } else if (d <= x && x <= e) { // отрезок от 6 до 10
       
       cout << " y = ";
       cout << sqrt(pow(2, kvadrat)-pow((x-8), kvadrat))-2;  //расчет у для заданного отрезка


    } else {
        cout << "Ne opredeleno";
    }
}


