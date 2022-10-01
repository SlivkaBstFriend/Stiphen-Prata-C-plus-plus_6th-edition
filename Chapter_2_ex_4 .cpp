/*Write a program that asks the user to enter his or her age.The program then should
display the age in months:
Enter your age: 29
Your age in months is 384*/

#include <iostream>
#include <locale.h>

int age1(0);
int age(int);
int month(int);

using namespace std;

int main() 
{
setlocale(LC_ALL, "Russian");

month(age(age1));

return 0;
}

int age (int age1)
{
	cout << "Введите ваш возраст: ";
	cin >> age1;

	return(age1);
}

int month (int n)
{
	n = n * 12;
	cout << "Ваш возсраст в месяцах: " << n;
	return(n);
}
	
	
