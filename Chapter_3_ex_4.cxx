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