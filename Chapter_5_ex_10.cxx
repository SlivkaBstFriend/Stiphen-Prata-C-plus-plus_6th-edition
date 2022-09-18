#include <iostream>
#include <locale>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    
    
        cout << "Введите количество строк: ";
        int kol(0);
        cin >> kol;
        for (int j = kol; j > 0; j-- )
        {
            for (int i = 0; i < j; i++)
            {
                cout << '.';
            }
            cout << '*';
              cout  << endl;
            
         }
             return 0;
             }     