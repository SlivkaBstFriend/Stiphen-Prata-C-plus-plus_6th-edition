/*
Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase,and vice
versa. (Don’t forget the cctype family.)
*/

#include <iostream>
#include <locale.h>
#include <cctype>

using namespace std;
 
 int main () 
 {
     setlocale(LC_ALL, "ru");
     
     char write(0);
     cout << "Вводите символы верхнего и нижнего регистра "
              << "(для прекращения введите @) " << endl;
     while (write != '@')
     {
         cout << "Вводите символ: ";
         cin >> write;
         cout <<endl;
         if (isdigit(write))
         {
              cout << "Введите другой символ!" << endl;
              continue;
          }
          else if (tolower(write) == write)
              write = toupper(write);
           else
              write = tolower(write);
          cout << "Ваш символ: " << write << endl;  
     };
      return 0;
 }   
