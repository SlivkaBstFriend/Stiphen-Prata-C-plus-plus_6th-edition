/*Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
You should include the cstring header file and use the strcmp() function to
make the comparison test.*/

#include <iostream>
#include <cstring>
#include <locale.h>

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
