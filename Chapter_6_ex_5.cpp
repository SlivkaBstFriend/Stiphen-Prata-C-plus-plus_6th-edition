#include <iostream>
#include <locale.h>
#include <cctype>


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

