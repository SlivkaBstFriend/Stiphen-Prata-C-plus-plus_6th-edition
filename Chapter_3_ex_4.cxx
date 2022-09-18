/*Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
time in days, hours, minutes,and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour,and the number
of seconds in a minute.The output should look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/

#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
setlocale(LC_ALL, "Russian");

cout << "Введите количество секунд: ";
long long sec(0);
cin >> sec;
long long sec1 = sec;
cout << endl;

int days = sec / 86400;
sec = sec % 86400;

int hours = sec / 3600;

sec = sec % 3600;

int min = sec / 60;

sec = sec % 60;

cout << sec1    <<	" секунд = " 
		 << days    <<	" дней, " 
		 << hours  <<	" часов, " 
		 << min      <<	" минут, " 
		 << sec 	 <<    " секунд";
		 
return 0;
}
