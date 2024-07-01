//Напишите функцию, которая принимает ссылку на объект 
//string в качестве параметра и преобразует содержимое string
//в символы верхнего регистра.Используйте функцию toupper(), 
//описанную в табл. 6.4 (см.главу 6).Напишите программу, использующую
//цикл, которая позволяет проверить работу функции для разного ввода.
//Пример вывода может выглядеть следующим образом :
//
//Enter a string(q to quit) : go away
//GO AWAY
//Next string(q to quit) : good grief!
//GOOD GRIEF!
//Next string(q to quit) : q
//Bye.

#include <iostream>
#include <locale>
#include <string>

using namespace std;

const int SIZE = 50;

void word_upper(string& word);

int main()
{
	setlocale(LC_ALL, "ru");
	string word;
	while (cin)
	{
		cout << "Введите любое слово (q,чтобы выйти) : ";
		getline(cin, word);
		if (word == "q")
			break;
		word_upper(word);
		cout << endl;
	}
	return 0;
}

void word_upper(string& word)
{
	char char_array[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		if (i < size(word))
			char_array[i] = toupper(word[i]);
		else
			char_array[i] = '\0';
	cout << char_array[i];
	}
}
