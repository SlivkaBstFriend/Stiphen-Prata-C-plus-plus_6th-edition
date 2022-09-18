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