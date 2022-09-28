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
