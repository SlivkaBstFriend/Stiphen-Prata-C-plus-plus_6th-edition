//Структура CandyBar содержит три члена.Первый член хранит название коробки конфет.
//Второй — ее вес(который может иметь дробную часть), а третий — количество калорий(целое значение)
//
//Напишите программу, использующую функцию, которая принимает в качестве аргументов ссылку на CandyBar,
//указатель на char, значение double и значение int.Функция использует три последних значения для установки
//соответствующих членов структуры.Три последних аргумента должны иметь значения по умолчанию : "Millennium Munch",
//2, 85 и 350. Кроме того, программа должна использовать функцию, которая принимает в качестве аргумента
//ссылку на CandyBar и отображает содержимое этой структуры.Где необходимо, используйте const.


#include <iostream>
#include <locale>


using namespace std;

struct CandyBar
{
	const char *name;
	double weight;
	int call;

};

void candy(CandyBar &snikers, const char* name = "Millennium Munch", double weight = 2.85, int call = 350);
void show_candy(CandyBar &snikers);

int main()
{

	setlocale(LC_ALL, "ru");
	CandyBar snikers;
	CandyBar &pt = snikers;
	candy(pt);
	show_candy(pt);
	return 0;
}

void candy(CandyBar &snikers, const char* name, double weight, int call)
{
	snikers.name = name;
	snikers.weight = weight;
	snikers.call = call;
}

void show_candy(CandyBar &snikers)
{
	cout << "Название конфеты: " << snikers.name << endl;
	cout << "Вес: " << snikers.weight << endl;
	cout << "Каллории: " << snikers.call << endl;
}
