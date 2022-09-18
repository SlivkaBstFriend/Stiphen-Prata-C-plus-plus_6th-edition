/*Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon. Note that in addition to using different units of measurement, the
U.S.approach (distance / fuel) is the inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles,and 1 gallon is 3.875 liters.Thus, 19
mpg is about 12.4 l/100 km,and 27 mpg is about 8.7 l/100 km.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main () 
{
setlocale(LC_ALL, "Russian");

const float mils = 62.14;
const float gallons = 3.875;

cout << "Введите расход бензина на 100 км в литрах:  ";
float lt(0);
cin >> lt;

cout << "Стиль принятый в Европе будет выглядеть так: " << lt << " литров/" << "100 км"  <<endl;
cout << "Стиль принятый в США будет выглядеть так: " << "1 галлон/" << mils / (lt / gallons) << " миль";

return 0;
}
