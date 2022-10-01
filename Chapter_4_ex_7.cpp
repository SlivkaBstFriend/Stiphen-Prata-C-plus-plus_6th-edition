/*William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:
n The name of the pizza company, which can consist of more than one word
n The diameter of the pizza
n The weight of the pizza
Devise a structure that can hold this information and write a program that uses a
structure variable of that type.The program should ask the user to enter each of the
preceding items of information,and then the program should display that information. Use cin (or its methods) and cout*/

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
