/*You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array
contents and report the total sales for the yea*/

#include <iostream>
#include <locale.h>

int main()
{
     using namespace std;
    setlocale(LC_ALL, "ru");
    
    const int kol_mounth = 12;
    char mounth[kol_mounth][20] =
     {         
         "Январь :",
         "Февраль :",
         "Март :",
         "Апрель :",
          "Май :",
         "Июнь :",
         "Июль :",
         "Август :",
         "Сентябрь :",
         "Октябрь :",
         "Ноябрь :",
         "Декабрь :"
 };     
     char * mn[12];
     mn[0] = &mounth[0][0];
     mn[1] = &mounth[1][0];
     mn[2] = &mounth[2][0];
     mn[3] = &mounth[3][0];
     mn[4] = &mounth[4][0];
     mn[5] = &mounth[5][0];
     mn[6] = &mounth[6][0];
     mn[7] = &mounth[7][0];
     mn[8] = &mounth[8][0];
     mn[9] = &mounth[9][0];
     mn[10] = &mounth[10][0];
     mn[11] = &mounth[11][0];

     int sale [kol_mounth];
     int sum(0);
     cout << "Введите объемы продаж книг за год" << endl;
     for (int i = 0; i <  kol_mounth; i++)
     {
               cout << mn[i];
               cin >> sale[i];
               cout << endl;
               sum +=sale[i];
     }
     cout << endl;
     cout << "Общий объем продаж за год: " << sum;  

return 0;
}