#include <iostream>
#include <locale.h>
#include <cmath>
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