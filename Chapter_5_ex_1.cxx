#include <iostream>
#include <locale.h>

int sum(int, int);

using namespace std;

int main()
{
setlocale(LC_ALL, "ru");

cout << "Введите 2 целых числа " << endl;
cout << "Первое: ";
int first;
cin >> first;
cout << endl;

cout << "Второе: ";
int second;
cin >> second;
cout << endl;
        
cout << "Сумма между первым и вторым числом: " << sum(first, second);

return 0;		
}

int sum(int first, int second)
{
int sum(0);
int rust_mejdu = second - first + 1;
int elem [rust_mejdu];

for ( int i = 0; i < rust_mejdu; i++)
{
     elem[i] = first;
     first += 1;
     sum += elem[i];
}    		   		

return (sum);
}