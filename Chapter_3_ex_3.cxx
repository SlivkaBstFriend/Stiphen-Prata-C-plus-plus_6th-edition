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