/*
Write a program that reads up to 10 donation values into an array of double. (Or, if
you prefer, use an array template object.) The program should terminate input on
non-numeric input. It should report the average of the numbers and also report
how many numbers in the array are larger than the average.
*/

#include <iostream>
#include <locale.h>
#include <array>

using namespace std;

int  main()
{
    setlocale(LC_ALL, "ru");

    cout << "Введите пожертвования через ENTER \n"
        << "Учтите, что можно ввести до 10 пожертвований \n"
        << "Если хотите прекратить ввод введите символ отличный от цифры. \n"
        << endl;
    cout << "Введите пожертвования: \n";
    
    array <double,10> donat;
    int i(0);
    double sr(0);
    for (i; i < 10; ++i)
    {
        cin >> donat[i];
        if (!cin)
            break;
        sr += donat[i];
    }

    int j(0);
    short kol(0);
    for (j; j < 10; j++)
    {
        if (donat[j] > (sr / i))
            kol++;
    }
   
    cout << "Среднее значение введенных чисел: " << sr / i << endl;
    cout << "Количество значений в массиве превышающих среднее: " << kol;

 return 0;
}
