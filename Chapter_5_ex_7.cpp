/*Design a structure called car that holds the following information about an automobile: 
its make,as a string in a character array or in a string object,and the year it was built,
as an integer.Write a program that asks the user how many cars to catalog.
The program should then use new to create a dynamic array of that many car structures. 
Next, it should prompt the user to input the make (which might consist
of more than one word) and year information for each structure. Note that this
requires some care because it alternates reading strings with numeric data (see Chapter 4). 
Finally, it should display the contents of each structure.A sample run
should look something like the following:

How many cars do you wish to catalog? 2
Car #1:
Please enter the make: Hudson Hornet
Please enter the year made: 1952
Car #2:
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
1952 Hudson Hornet
1951 Kaiser*/


#include <iostream>
#include <locale.h>
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
