#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    cout << " Вводите слова "
                   "(для завершения введите слово done) :" << endl;
    char user_words [20];
    cin >> user_words;
    
    int kol(0);
    while (strcmp (user_words, "done") != 0)
    {
        cin >> user_words;
        kol++;
    }
    cout << "Вы ввели " << kol << " слов";
    return 0;
}