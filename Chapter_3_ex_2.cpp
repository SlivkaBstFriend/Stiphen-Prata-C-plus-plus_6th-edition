/*Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.*/

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
