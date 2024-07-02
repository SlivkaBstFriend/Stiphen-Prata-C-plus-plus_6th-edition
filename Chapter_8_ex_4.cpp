//Ниже представлена общая структура программы :
//
//#include <iostream>
//#include <cstring> // для strlen(), strcpy()
//using namespace std;
//
//struct stringy
//{
//	char* str; // указывает на строку 
//	int ct; // длина строки (не считая символа '\0') 
//};
//
//// Здесь размещаются прототипы функций set() и show()
//
//int main()
//{
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//	set(beany, testing); // первым аргументом является ссылка, 
//	// Выделяет пространство для хранения копии testing, 
//	// использует элемент типа str структуры beany как указатель 
//	// на новый блок, копирует testing в новый блок и 
//	// создает элемент ct структуры beany 
//	show(beany); // выводит строковый член структуры один раз 
//	show(beany, 2); // выводит строковый член структуры два раза 
//	testing[0] = 'D';
//	testing[1] = ' u';
//	show(testing); // выводит сроку testing один раз 
//	show(testing, 3); // выводит строку testing три раза 
//	show("Done!");
//	return 0;
//}
//
//Завершите программу, создав соответствующие функции и прототипы.Обратите
//внимание, что в программе должны быть две функции show(), и каждая из них
//использует аргументы по умолчанию.Где необходимо, используйте const.Функция
//set() должна использовать операцию new для выделения достаточного пространства
//памяти под хранение заданной строки.Используемые здесь методы аналогичны методам,
//применяемым при проектировании и реализации классов. (В зависимости от используемого
//компилятора, может понадобиться изменить имена заголовочных файлов и удалить
//директиву using.)

#include <iostream>
#include <locale>
#include <cstring> // для strlen(), strcpy()

using namespace std;

struct stringy
{
	char* str; // указывает на строку 
	int ct; // длина строки (не считая символа '\0') 
};

void set(stringy& name, char* arr);
void show(const stringy& str, int n = 1);
void show(const char* arr, int n = 1);
// Здесь размещаются прототипы функций set() и show()

int main()
{
	setlocale(LC_ALL, "ru");
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // первым аргументом является ссылка, 
	// Выделяет пространство для хранения копии testing, 
	// использует элемент типа str структуры beany как указатель 
	// на новый блок, копирует testing в новый блок и 
	// создает элемент ct структуры beany 
	show(beany); // выводит строковый член структуры один раз 
	show(beany, 2); // выводит строковый член структуры два раза 
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // выводит сроку testing один раз 
	show(testing, 3); // выводит строку testing три раза 
	show("Done!");
	delete[] beany.str;
	return 0;
}

void set(stringy& name, char* arr)
{
	name.str = new char[strlen(arr) + 1];
	strcpy_s(name.str, strlen(arr) + 1, arr);
	name.ct = strlen(arr);
}

void show(const stringy& name, int n)
{
	for (int i = 0; i < n; i++)
		cout << endl << name.str; 
}

void show(const char* arr, int n)
{
	cout << endl << arr;
	
}
