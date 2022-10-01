/*Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.*/

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    cout << " Вводите слова "
                   "(для завершения введите слово done) :" << endl; 
    string str1;
    cin >> str1;
    int kol(0);
        while (str1 != "done")
    {
        cin >> str1;
        kol++;
     };
    cout << "Вы ввели " << kol << " слов";
    return 0;
}
