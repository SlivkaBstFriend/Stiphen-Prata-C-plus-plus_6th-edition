/*Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.*/

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
 setlocale(LC_ALL, "Russian");
 struct pizza
 {
    string name;
    float diametr;
    float weight;   
};
pizza *user_pizza = new pizza;

cout << "Введите название вашей пиццерии компании: ";
getline(cin, user_pizza->name);

cout << endl;

cout <<"Введите диметр пиццы (см.): ";
cin >> user_pizza->diametr;
cout << endl; 

cout << "Введите вес пиццы (гр.): ";
cin >> user_pizza->weight;
cout << endl;

cout << "Ваши данные " << endl 
         << "Название пиццерии: " << user_pizza->name << endl
         << "Диаметр пиццы: " << user_pizza->diametr << endl
         << "Вес пиццы: " << user_pizza->weight << endl;     

delete user_pizza;
return 0;
}
