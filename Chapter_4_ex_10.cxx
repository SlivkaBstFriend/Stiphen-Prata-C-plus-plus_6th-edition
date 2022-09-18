#include <iostream>
#include <locale>
#include <array>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    
    array<float, 3> rez;
    
    cout << "Введите первое значение в секундах: "; 	
	cin >> rez[0];
	cout << endl;
	
	cout << "Введите второе значение в секундах: ";
    cin >> rez[1];
	cout << endl;
	
	cout << "Введите тертье значение в секундах: ";   	
	cin >> rez[2];
    cout << endl;
       
    cout << "Среднее арифметическое: " << (rez[0] + rez[1] + rez[2]) / 3; 
    
    return 0;			
}