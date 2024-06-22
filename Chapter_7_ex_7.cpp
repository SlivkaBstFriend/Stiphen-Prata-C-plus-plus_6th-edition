//Повторите программу из листинга 7.7, заменив три функции обработки массива
//версиями, работающими с диапазонами значений, заданными парой указателей.
//Функция fill_arraу() вместо возврата действительного числа прочитанных 
//значений должна возвращать указатель на место, следующее за последним
//введенным элементом; прочие функции должны использовать его в качестве
//второго аргумента для идентификации конца диапазона данных.

#include <iostream>
#include <locale.h>

using namespace std;

const int Max = 5;
//------------------------------------------------------------------------------------------------
// Прототипы функций 
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); // не изменять данные 
void revalue(double r, double ar[], int n);
//------------------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, "ru");


	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	if (size > 0)
	{
		cout << "Enter revaluation factor: "; // ввод коэффициента переоценки 
		double factor;
		while (!(cin >> factor)) // неправильный ввод 
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: "; // повторный запрос на ввод числа 
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();

	return 0;
}
//------------------------------------------------------------------------------------------------
int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": "; //Ввод значения
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n"; // процесс ввода прекращен 
			break;
		}
		else if (temp < 0) // сигнал завершения 
			break;
		ar[i] = temp;
	}
	return i;
}
//------------------------------------------------------------------------------------------------
// Следующая функция может использовать, но не изменять, массив по адресу аг 
void show_array(const double ar[], int n)
{
	using namespace std;
	// Вывод содержимого массива аг 
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}
// Умножает на г каждый элемент аг[] 
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}
