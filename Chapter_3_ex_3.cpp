/*Write a program that asks the user to enter a latitude in degrees, minutes,and seconds and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic constants.You should use a separate variable for each input value.A sample
run should look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const float angle_min = 1.0 / 60.0;
	const float angle_sec = angle_min / 60.0;
	 
	cout << "Введите широту в градусах, минутах и секундах:" << endl;
	cout << "Градусы: ";
	float degree;
	cin >> degree;
	
	cout << endl << "Минуты: ";
	float minuts;
	cin >> minuts;
	cout << endl;
	
	cout << "Секунды: ";
	float sec;
	cin >> sec;
	
	cout << degree << " градусов," << minuts << " минут," << sec <<" секунд"  << " = ";
	cout <<degree +  (minuts * angle_min) + (sec * angle_sec);  
	return 0;
}
