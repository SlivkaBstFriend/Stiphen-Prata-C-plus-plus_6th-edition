/*Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row,and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:

Enter number of rows: 5

....*
...**
..***
.****
*****

*/

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
