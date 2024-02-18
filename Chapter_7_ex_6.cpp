//Напишите программу, использующую описанные ниже функции.
//    Fill_array() принимает в качестве аргумента имя массива элементов типа
//                 double и размер этого массива.Она приглашает
//                 пользователя ввести значения double для помещения их в массив.Ввод
//                 прекращается при наполнении массива либо когда
//                 пользователь вводит нечисловое значение и возвращает
//                 действительное количество элементов.
//
//    Show_array() принимает в качестве аргументов имя массива значений double,
//                 а также его размер, и отображает содержимое массива.
//
//Reverse_array()  принимает в качестве аргумента имя массива значений
//                 double, а также его размер, и изменяет порядок его
//                 элементов на противоположный.
//
//Программа должна использовать эти функции для наполнения массива,
//обращения порядка его элементов, кроме первого и последнего, с последующим
//отображением.

#include <iostream>
#include <vector>
using namespace std;

int Fill_array(vector<double>, int);
void Show_array(vector<double>, int);
void Reverse_array(vector<double>, int);

int main()
{
	system("chcp 1251 > nul");
	cout << "Введите кол-во элементов в массиве: ";
	int size(0);
	cin >> size;
	vector<double> mas(size);
	Fill_array(mas, size);
	

	return 0;
}

int Fill_array(vector<double> mas, int size)
{
	int count(0);
	for (int i = 0; i < size; i++)
	{
		cout << "Введите значения double, для занесения их в массив: ";
		cin >> mas[i];
		if (!cin)
			break;
		count++;
	}
	Show_array(mas, count);
	Reverse_array(mas, count);
	return count;
}

void Show_array(vector<double> mas, int count)
{
	cout << "\n\nВаш массив состоит из: ";
	for (int i = 0; i < count; i++)
		cout << mas[i] << " ";
}

void Reverse_array(vector<double> mas, int count)
{
	vector<double> rev_mas(count);
	for (int i = 0; i < count; i++)
		rev_mas[i] = mas[count - i - 1];
	cout << "\n\nТак выглядит ваш перевернутый массив: ";
	for (int i = 0; i < count; i++)
		cout << rev_mas[i] << " ";
	cout << endl;
}