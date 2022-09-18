/*Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers*/

#include <iostream>
#include <locale.h> 

using namespace std;

int main() 
{
setlocale(LC_ALL, "Russian");

cout <<	"Введите расстояние в км и объем бензина в литрах: \n";
cout << "км: ";
float km(0);
cin >> km;
cout <<'\n';

cout << "литры: ";
float lt(0);
cin >> lt;
cout <<'\n';

cout << "Ваш расход бензина на 100 км = " << km / lt;
return 0;
}
