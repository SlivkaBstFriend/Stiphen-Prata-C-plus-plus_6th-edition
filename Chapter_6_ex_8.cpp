//Напишите программу, которая открывает текстовый файл, читает его символ за символом до самого конца
//и сообщает кол-во символов в файле
#include <iostream>
#include <fstream>   // для файлового ввода-вывода 
#include <cstdlib>   // поддержка exit() 

int main()
{
	setlocale(LC_ALL, "ru");
	using namespace std;

	ifstream inFile;												 // объект для обработки файлового ввода 
	inFile.open("test_1.txt");										 // ассоциирование inFile с файлом 
	if (!inFile.is_open())											 // не удалось открыть файл 
	{
		cout << "Невозможно открыть файл: test_1.txt" << endl;
		exit(EXIT_FAILURE);
	}
	char value;
	int count = 0;													 // количество прочитанных элементов 
	while (inFile >> value)											 // пока ввод успешен и не достигнут EOF 
	{
		if (isalnum(value))
			++count;												 // еще один элемент прочитан
	}
	if (inFile.eof())
		cout << "Достигнут конец файла.\n";
	else if (inFile.fail()) 
		cout << "Ввод прекращен из-за несоответствия типа данных.\n";
	else 
		cout << "Ввод прекращен по неизвестной причине.\n";
	if (count == 0) 
		cout << "Данные для обработки отсутствуют.\n";
	else
	{
		cout << "Кол-во символов: " << count << endl;				 // прочитано элементов 
	}
	inFile.close();													 // завершение работы с файлом 

	std::cin.get();
	std::cin.get();
	return 0;
}
