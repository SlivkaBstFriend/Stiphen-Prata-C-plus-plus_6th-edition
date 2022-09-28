/*
Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter the number 
of contributors and then solicit the user to enter the name and contribution of
each contributor.The information should be stored in a dynamically allocated array
of structures. Each structure should have two members:a character array (or else a
string object) to store the name and a double member to hold the amount of the
contribution.After reading all the data, the program should display the names and
amounts donated for all donors who contributed $10,000 or more.This list should
be headed by the label Grand Patrons.After that, the program should list the
remaining donors.That list should be headed Patrons. If there are no donors in one
of the categories, the program should print the word “none.”Aside from displaying
two categories, the program need do no sorting
*/

#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

struct micenats_data
{
    string name;
    double cash;
};

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Введите количество мицентаво: ";
    int size(0);
    cin >> size;
    cout << endl;
    int* k = new int[size]; 
    int* q = new int[size];
    short kol(0);
    micenats_data* micenat = new micenats_data[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Введите имя мицената: "; 
        getline(cin, micenat[i].name);
        cout << "Введите сумму пожертвования:";
        cin >> micenat[i].cash;
        cout << endl;
        if (micenat[i].cash >= 10000)
        {
            k[i] = i;
            kol++;
        }
        else
            q[i] = i;
    }

    if (kol > 0)
    {
        cout << "\n\nGrand Patrons\n\n";

        for (int i = 0; i < size; i++)
        {
            if (k[i] == i)
                cout << micenat[i].name << ' ' << micenat[i].cash << endl;
        }
    }
    cout << "\n\nPatrons\n\n";
    for (int i = 0; i < size; i++)
    {
        if (q[i] == i)
            cout << micenat[i].name << ' ' << micenat[i].cash << endl;
    }
    delete[] k;
    delete[] q;
    delete[] micenat;
    return 0;
}
