#include <iostream>
#include <locale.h>

void time (int, int);

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russia");

	cout << "Введите количество часов: ";
	int hours(0);
	cin >> hours;
	cout << endl;
	
	cout << "Введите количество минут: ";
	int min(0);
	cin >> min;
	cout << endl;
	
	time (hours, min);
			
	return 0;
}

void time (int hours, int min) 
{
	cout << "Время: " << hours << ":" << min;	
}
