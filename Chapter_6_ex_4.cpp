#include <iostream>
#include <locale.h>

void showmenu();
using namespace std;

const int strsize = 80;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    setlocale(LC_ALL, "ru");

    bop men[5] =
    {
        {"Лаврентий Палыч", "Teamlid", "IT-дьякон" , 0},
        {"Генадий Мягенький", "Ведущий инженер", "Жиребец", 1},
        {"Станислав Сухогубов", "Старший сборщик", "Танкист",2},
        {"Константин Прус", "Веб-разработчик", "Стальная хватка", 2},
        {"Дмитрий Мясоедов", "Full-stack Разработчик", "Гиря", 0}
    };
    showmenu();
    char letter(0);
    cin >> letter;
    cout << endl;
    
    while (letter != 'q')
    {
        switch (letter)
        {
        case 'a':
        case 'A': for (int i = 0; i < 5; i++) 
                  {
                      cout << men[i].fullname;
                      cout << endl;
                  }
                  cout << "\nВведите другой символ\n\n";
            break;

        case 'b':
        case 'B':  for (int i = 0; i < 5; i++)
                   {
                       cout << men[i].title;
                       cout << endl;
                   }
                   cout << "\nВведите другой символ\n\n";
            break;

        case 'c':
        case 'C':  for (int i = 0; i < 5; i++)
                   {
                       cout <<men[i].bopname;
                       cout << endl;
                   }
                   cout << "\nВведите другой символ\n\n";
            break;

        case 'd':
        case 'D':  for (int i = 0; i < 5; i++)
                   {
                        if (men[i].preference == 0)
                            cout << men[i].fullname;
                        else if (men[i].preference == 1)
                            cout << men[i].title;
                        else
                            cout << men[i].bopname;
                        cout << endl;
                   }
                   cout << "\nВведите другой символ\n\n";
                break;

        default:  
                    cout << "\nВведите другой символ\n\n";
                    break;
        };
        cin >> letter;
        cout << endl;
    }
    cout << "\nВсего Доброго!\n";
    return 0;
}

void showmenu()
{
    cout << "Выберите один из представленных пунктов меню:\n\n"
        "a. Отображать имя           b. Отображать должность\n"
        "c. Отображать кодовое имя   d. Преоритетное имя\n"
        "q. Выход \n\n";
}