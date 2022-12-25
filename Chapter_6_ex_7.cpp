#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
	system("chcp 1251 > nul");

	cout << "Вводите слова через Enter: " << endl;

	int count_gl(0);
	int count_sogl(0);
	int count_dif(0);
	char* word = new char[50];

	cin >> word;
	
	while (word[0] != ('q'))
	{
		if (( word[0] == ('а')) || (word[0] == ('и')) || (word[0] == ('о')) || (word[0] == ('у')) || (word[0] == ('ы')) ||
		     (word[0] == ('э')) || (word[0] == ('е')) || (word[0] == ('ё')) || (word[0] == ('ю')) || (word[0] == ('я')))
			count_gl++;
			
		else if ((word[0] == ('б')) || (word[0] == ('в')) || (word[0] == ('г')) || (word[0] == ('д')) || (word[0] == ('ж')) ||
				 (word[0] == ('й')) || (word[0] == ('к')) || (word[0] == ('л')) || (word[0] == ('м')) || (word[0] == ('н')) ||
				 (word[0] == ('п')) || (word[0] == ('р')) || (word[0] == ('с')) || (word[0] == ('т')) || (word[0] == ('ф')) ||
				 (word[0] == ('х')) || (word[0] == ('ц')) || (word[0] == ('ч')) || (word[0] == ('ш')) || (word[0] == ('щ')))
			count_sogl++;
			
		else 
			count_dif++;

		cin >> word;
		
	}

	delete[]  word;
	cout << count_gl << " слов(-о) начинае(-ю)тся с гласной\n";
	cout << count_sogl << " слов(-о) начинае(-ю)тся с согласной\n";
	cout << count_dif << " слов(-о) начинае(-ю)тся ни с гласной ни с согласной\n";
	return 0;
}
