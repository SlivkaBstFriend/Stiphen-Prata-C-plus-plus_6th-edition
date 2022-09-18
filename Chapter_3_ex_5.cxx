#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main() 
{
	 setlocale(LC_ALL, "Russian"); 
	 cout << "Введите население Земли: ";
	 long long population_Earth;
	 cin >> population_Earth;
	 cout << endl << "Введите население США: ";
	 long long population_USA;
	 cin >> population_USA;
	//double x1 = population_USA * 100;
	 double procent =  (population_USA * static_cast<double>(100)) / population_Earth ;
	 cout << endl << "Популяция США составляет " << procent << '%' << " от населенипя Земли";
	 }   