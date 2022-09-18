#include <iostream>
#include <locale.h>

float BMI(float, float);

using namespace std;

float BMI (float metr, float kg)
{
	float BMI = kg / (metr * metr);
	return (BMI); 
}	

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int fut_duim_to_duim = 12;
	const float duim_to_metr = 0.0254;
	const float funt_to_kg = 2.2;
	 
	cout << "Введите рост футах и дюймах " << endl;
	cout << "Фут: ";
	int fut;
	cin >> fut;
    cout << "Дюйм: ";	
    int duim;
	cin >> duim;
	cout << endl;
	
	cout << "Введите свой вес в фунтах: ";
	float funt;
	cin >> funt;
	cout << endl;

	float metr = (fut * fut_duim_to_duim + duim) * duim_to_metr;
	float kg =  funt / funt_to_kg;
	  				
	cout << "Ваш индекс тела равен: " << BMI(metr, kg);
	return 0;
}