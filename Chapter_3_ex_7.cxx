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