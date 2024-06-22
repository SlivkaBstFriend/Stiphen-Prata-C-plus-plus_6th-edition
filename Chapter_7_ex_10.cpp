//Спроектируйте функцию calculate(), которая принимает два значения типа double и указатель на функцию,
//принимающую два аргумента double и возвращающую значение double. Функция calculate() также должна иметь
//тип double и возвращать значение, вычисленное функцией, которая задана указателем, используя аргумент double
//функции calculate(). Например, предположим, что имеется следующее определение функции add():
//
//	double add(double x, double y)
//{
//	return x + y;
//}
//
//Приведенный ниже вызов функции должен заставить calculate() передать значения 2.5 и 10.4 функции add()
//и вернуть ее результат(12.9) :
//
//	double q = calculate(2.5, 10.4, add);
//
//Используйте в программе эти функции и еще хотя бы одну дополнительную, которая подобна add().В программе должен 
//быть организован цикл, позволяющий пользователю вводить пары чисел.Для каждой пары calculate() должна вызвать add() 
//и хотя бы еще одну функцию такого рода.Если вы чувствуете себя уверенно, попробуйте создать массив указателей на функции,
//подобные add(), и организуйте цикл, применяя calculate() для вызова этих функций по их указателям.Подсказка: вот как можно
//объявить массив из трех таких указателей :
//
//double (*pf[3])(double, double);
//
//Инициализировать такой массив можно с помощью обычного синтаксиса инициализации массивов и имен функций в качестве адресов.

#include <iostream>
#include <locale>

using namespace std;

double add(double n, double m);
double calculate(double n, double m, double(*calcul)(double n, double m));
double multiplication(double n, double m);

const int PARA = 2;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Вводите пары чисел: ";

	while (cin)
	{ 
		
		double arr[PARA];
		for (int i = 0; i < PARA; i++)
			cin >> arr[i];
		if (!cin)
			break;
		double result_add = calculate(arr[0], arr[1], add);
		double result_mult = calculate(arr[0], arr[1], multiplication);

		cout << endl << "Сумма вашей пары равна: " << result_add << endl;
		cout << "Произведение вашей пары равно: " << result_mult << endl;
		cout << endl << "Чтобы прекратить ввод, введите q" << endl;
		cout << endl << "Введите слудующую пару: ";

	}
	return 0;
}

double calculate(double n, double m, double(*calcul)(double n, double m))
{
	double result = calcul(n, m);
	return result;
}

double add(double n, double m)
{
	return n + m;
}

double multiplication(double n, double m)
{
	return n * m;
}
