/*Write a program that asks the user to type in numbers.After each entry, the program should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.*/

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
        
   cout << "Эта программа складывает введенные вами числа \n"
           << "После того как вы введете значение 0, программа завершится "
           << endl;
   cout << "Введите числа: " << endl;
   int num(0);
   int sum(0);
   
   do 
   {
       cin >> num;
       sum+=num;
       cout << "Сумма равна: " << sum << endl;
   } while (num != 0) ;
   
    return 0;
}
    
