/*Write a C++ program that displays your name and address (or if you value your
privacy,a fictitious name and address).*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Вячеслав\n";
	cout << "Россия, Санкт-Петербург";
return 0;
}
