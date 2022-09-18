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