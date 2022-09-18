#include <iostream>
#include <locale>
#include <string>

using namespace std;


struct car 
{
    string brand ;
    short year;
};

int main()
{
    setlocale(LC_ALL, "ru");   
        
    cout << "Сколько автомобилей включить в каталог? ";
    int kol_auto(0);
    (cin >> kol_auto).get();
    
    //car carInfo [kol_auto];
    car *cr = new car [kol_auto];
        for (int i = 0; i < kol_auto; i++)
    {
          cout << "Автомобиль #" << i + 1 << endl;
          cout << "Укажите производителя : ";
          cin.clear();      
          getline(cin,cr[i].brand);
          cout << endl;
          
          cout << "Укажите год выпуска : ";
          cin >> cr[i].year;
          cout << endl;
          
}
    cout << "Вот ваша колекция :" << endl;
   for (int i = 0; i < kol_auto; i++)
        cout << cr[i].year << ' ' << cr[i].brand << endl;          
     
    delete [] cr;
    return 0;
}