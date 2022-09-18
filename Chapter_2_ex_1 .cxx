#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Вячеслав\n";
	cout << "Россия, Санкт-Петербург";
return 0;
}