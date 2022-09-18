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
