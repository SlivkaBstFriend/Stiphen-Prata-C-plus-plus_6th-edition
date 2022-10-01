/*Write a program that has main() call a user-defined function that takes a Celsius
temperature value as an argument and then returns the equivalent Fahrenheit value.
The program should request the Celsius value as input from the user and display
the result,as shown in the following code:
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
For reference, here is the formula for making the conversion:
Fahrenheit = 1.8 × degrees Celsius + 32.0*/

#include <iostream>
#include <locale.h>

float c_to_fr(void);

using namespace std;

int main() 
{
setlocale(LC_ALL, "Russian");


c_to_fr();

return 0;
}

 float c_to_fr(void)
{
	cout << "Введите значение градусов в Цельсиях: ";
	float c(0);
	cin >> c;
	cout << endl;
	cout << c << " градусов Цельсия равны "
			 << (c * 1.8) + 32 << " градусам по Фарингейту";
	return (c);
}
