/*Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
cout << "Введите расстояние в фарлогах: ";
float farlong(0);
cin >> farlong;
cout <<" фарлогов" << endl;

cout << "Расстояние в ярдах: "<< farlong * 220 << " ярдов";

return 0;
}
