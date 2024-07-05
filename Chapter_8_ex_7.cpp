//Измените программу из листинга 8.14 так, чтобы использовать
//две шаблонных функции по имени SumArray(), возвращающие сумму 
//содержимого массива вместо его отображения.Программа должна
//сообщать общее количество предметов и сумму всех задолженностей(debts).

#include <iostream>
#include <locale>

using namespace std;

struct debts
{
	char name[50];
	double amount;
};

template <typename T> // шаблон А 
T SumArray(T arr[], int n);
template <typename T> // шаблон В 
T SumArray(T* arr[], int n);

int main()
{
	setlocale(LC_ALL, "ru");
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};

	double* pd[3];
	// Установка указателей на члены amount структур в mr_E 
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Количество вещей Мистера Е: \n" << SumArray(things, 6) << endl;
	cout << "Сумма задолженостей: \n"  << SumArray(pd, 3) << endl;
	
	std::cin.get();
	std::cin.get();
	return 0;
}
template <typename T>
T SumArray(T arr[], int n)
{
	using namespace std;
	auto sum = 0;
	int kol = 0;
	for (int i = 0; i < n; i++) {
		kol++;
	}
	return kol;
}
template <typename T>
T SumArray(T* arr[], int n)
{
	using namespace std;
	auto sum = 0;
	int kol = 0;
	for (int i = 0; i < n; i++) {
		sum += *arr[i];
		kol++;
		
	}
	return sum;
}
