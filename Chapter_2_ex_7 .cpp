/*Write a program that asks the user to enter an hour value and a minute value.The
main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28*/

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
