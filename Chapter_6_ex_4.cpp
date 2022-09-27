/*
When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.Write a program 
that can list members by real name, by job title, by secret name, or by a member’s preference.
Base the program on the following structure:

            // Benevolent Order of Programmers name structure
            struct bop {
            char fullname[strsize]; // real name
            char title[strsize]; // job title
            char bopname[strsize]; // secret BOP name
            int preference; // 0 = fullname, 1 = title, 2 = bopname
            };

In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
            a. display by name b. display by title
            c. display by bopname d. display by preference
            q. quit

Note that “display by preference” does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer’s job title.A sample run
may look something like the following:

            Benevolent Order of Programmers Report
            a. display by name b. display by title
            c. display by bopname d. display by preference
            q. quit
            Enter your choice: a
            Wimp Macho
            Raki Rhodes
            Celia Laiter
            Hoppy Hipman
            Pat Hand
            Next choice: d
            Wimp Macho
            Junior Programmer
            MIPS
            Analyst Trainee
            LOOPY
            Next choice: q
            Bye!
*/



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
