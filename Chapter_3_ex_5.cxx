/*Write a program that requests the user to enter the current world population and
the current population of the U.S. (or of some other nation of your choice). Store
the information in variables of type long long. Have the program display the percent that the U.S. (or other nation’s) population is of the world’s population.The
output should look something like this:
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
You can use the Internet to get more recent figures.*/

#include <iostream>
#include <locale.h>

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
	 double procent =  (population_USA * static_cast<double>(100)) / population_Earth ;
	 cout << endl << "Популяция США составляет " << procent << '%' << " от населенипя Земли";
}   
