#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
 setlocale(LC_ALL, "Russian");
 struct pizza
 {
    string name;
    float diametr;
    float weight;   
} user_pizza;

cout << "Введите название вашей пиццерии компании: ";
getline(cin, user_pizza.name);
cout << endl;

cout <<"Введите диметр пиццы (см.): ";
cin >> user_pizza.diametr;
cout << endl; 

cout << "Введите вес пиццы (гр.): ";
cin >> user_pizza.weight;
cout << endl;

cout << "Ваши данные " << endl 
         << "Название пиццерии: " << user_pizza.name << endl
         << "Диаметр пиццы: " << user_pizza.diametr << endl
         << "Вес пиццы: " << user_pizza.weight << endl;     
return 0;
}