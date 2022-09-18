#include <iostream>
#include <locale.h>

double light_to_astranomic(void);

using namespace std;

int main() 
{
setlocale(LC_ALL, "Russian");


light_to_astranomic();

return 0;
}

 double light_to_astranomic(void)
{
	cout << "Введите значение в световых годах: ";
	double light(0);
	cin >> light;
	cout << endl;
	
	cout << light << " световых лет =  "
			 << light * 63240 << " асвтрономическим единицам";
	return (light);
}
