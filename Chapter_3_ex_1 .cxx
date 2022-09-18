/*Write a short program that asks for your height in integer inches and then converts
your height to feet and inches. Have the program use the underscore character to
indicate where to type the response.Also use a const symbolic constant to represent the conversion factor.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int tofut = 12;
	cout << "Введите рост в дюймах: ";
    int duim;
	cin >> duim;
	cout << "Ваш рост равен: " << duim / tofut << " футов и " << duim % tofut << " дюйм" ; 
}
