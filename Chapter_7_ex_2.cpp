//Напишите программу, которая запрашивает у пользователя 10 результатов игры
//в гольф, сохраняя их в массиве.При этом необходимо обеспечить возможность
//прекращения ввода до ввода всех 10 результатов.Программа должна отобразить
//все результаты в одной строке и сообщить их среднее значение.Реализуйте
//ввод, отображение и вычисление среднего в трех отдельных функциях,
//работающих с массивами.

#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

vector<int> input(void);
vector<double> average(vector<int>);
void view(vector<int>, vector<double>);

int main()
{
	system("chcp 1251 > nul");
	vector<int> result(20);
	result = input();
	vector<double> aver = average(result);
	view(result, aver);
	return 0;
}

vector<int> input(void)									//Ф-ия ввода значений
{
	int match(0);
	vector<int> result(21);
	for (int i = 0; i < 10; i++)						
	{
		cout << "Введите результаты матча: ";
		cin >> result[i * 2] >> result[(i * 2) + 1]; 
		cout << endl;
		if (!cin)
			break; 
		match++;
	}
	 result[20] = match;
	return result;
}

vector<double> average(vector<int> result)				//Ф-ия подсчета среднего значения
{
	vector<double> aver(10);
	for (int i = 0; i < result[20]; i++)
		aver[i] = (result[i * 2] + result[(i * 2) + 1]) / 2.0;
	return aver;
}

void view(vector<int> result, vector<double> aver)		//Ф-ия показа значений
{
	for (int i = 0; i < result[20]; i++)
	{
		cout << "Результат матча " << i + 1 << ": " << result[i * 2] << " " << result[(i * 2) + 1] << "\t"
			 << "Среднее значение матча: " << aver[i] << endl;
	}
}





