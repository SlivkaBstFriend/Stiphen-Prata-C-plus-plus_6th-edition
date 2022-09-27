/*
The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following income tax code:
        First 5,000 tvarps: 0% tax
        Next 10,000 tvarps: 10% tax
        Next 20,000 tvarps: 15% tax
        Tvarps after 35,000: 20% tax
For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
loop to solicit incomes and to report tax owed.The loop should terminate when
the user enters a negative number or non-numeric input.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Введите ваш доход (чтобы прекратить введите символ отличный от цифры): ";
    int cash(0);
    cin >> cash;
    double nalog(0);
    while ((cash >= 0) && cin)
    {
        cout << endl;

        if ((cash / 10000) == 1)
            nalog += 10000 * 0.10;

        else if ((cash / 10000) == 2)
            nalog += (10000 * 0.10) + (20000 * 0.15);

        else if ((cash / 35000) >= 1)
            nalog += (10000 * 0.10) + (20000 * 0.15) + ((cash % 35000) * 0.20);

        cout << "Вы должны заплатить: " << nalog << " тварпов\n\n";

        cout << "Введите ваш доход (чтобы прекратить введите символ отличный от цифры): ";
        cin >> cash;
    }
    cout << "\n\nВсего Доброго!\n";
    return 0;
}

