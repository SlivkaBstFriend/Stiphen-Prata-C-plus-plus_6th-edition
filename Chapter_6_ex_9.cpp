/*Выполните упражнение 6, но измените его так, чтобы данные можно было
получать из файла.Первым элементом файла должно быть количество меценатов,
а остальная часть состоять из пар строк, в которых первая строка содержит
имя, а вторая — сумму пожертвования.То есть файл должен выглядеть
примерно так :

4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
*/

#include <iostream>
#include <locale.h>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    ifstream inFile;												 // объект для обработки файлового ввода
    int sum(0);
    inFile.open("micenat.txt");
    if (!inFile.is_open())											 // не удалось открыть файл 
    {
        cout << "Невозможно открыть файл: micenat.txt" << endl;
        exit(EXIT_FAILURE);
    }
    int Imicenat;
    string Smicenat;
    inFile >> Imicenat;
    int kol_mic = Imicenat;
    cout << "Всего мецинатов: " << Imicenat << endl;
   
    for (int i = 0; i < kol_mic * 2; i++)
    {
        if (i % 2 == 0)
        {
            inFile >> Smicenat;
            cout << Smicenat << " ";
            inFile >> Smicenat;
            cout << Smicenat << ": ";
        }
        else
        {
            inFile >> Imicenat;
            sum += Imicenat;
            cout << Imicenat << endl;
        }
    }
    inFile.close(); 
    cout << "Общая Сумма пожертвований: " << sum;
    return 0;
}