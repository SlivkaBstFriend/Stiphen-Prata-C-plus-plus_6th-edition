//Напишите шаблонную функцию max5(), которая принимает в качестве
//аргумента массив из пяти элементов типа T и возвращает наибольший
//элемент в массиве. (Поскольку размер массива фиксирован, его можно
//жестко закодировать в цикле, а не передавать в виде аргумента.)
//Протестируйте функцию в программе с использованием массива из пяти
//значений int и массива из пяти значений double.

#include<iostream>
#include <locale>

using namespace std;

const int SIZE = 5;

template <typename Any>
Any max5(Any arr[]);

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "\nВведите 5 integer элементов массива: \n";
	int n[SIZE];
	for (int i = 0; i < SIZE; i++)
		cin >> n[i];

	int max_int = max5(n);
	cout << "Наибольший integer элемент: " << max_int << endl;


	cout << "\nВведите 5 double элементов массива: ";
	double m[SIZE];
	for (int i = 0; i < SIZE; i++)
		cin >> m[i];

	double max_double = max5(m);
	cout << "\nНаибольший double элемент: " << max_double;


	return 0;
}

template <typename Any>
Any max5(Any arr[])
{
	Any max = arr[0];
	for (int i = 0; i < sizeof(arr); i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
