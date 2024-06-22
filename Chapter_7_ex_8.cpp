//Следующее упражнение позволит попрактиковаться в написании функций, 
//работающих с массивами и структурами. Ниже представлен каркас программы.
//Дополните его функциями, описанными в комментариях.


#include <iostream> 
#include <locale.h>

using namespace std;

const int SLEN = 30;

struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

// getinfo() принимает два аргумента: указатель на первый элемент
// массива структур student и значение int, представляющее
// количество элементов в массиве. Функция запрашивает и
// сохраняет данные о студентах. Ввод прекращается либо после
// наполнения массива, либо при вводе пустой строки в качестве
// имени студента. Функция возвращает действительное количество
// введенных элементов.
int getinfо(student pa[], int n);

// display1() принимает в качестве аргумента структуру student 
// и отображает ее содержимое.
void displayl(student st);

// display2() принимает адрес структуры student в качестве аргумента 
// и отображает ее содержимое, 
void display2(const student* ps);

// display3() принимает указатель на первый элемента массива
// структур student и количество элементов в этом массиве и
// отображает содержимое всех структур в массиве,
void display3(const student pa[], int n);

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfо(ptr_stu, class_size);
	for (int i = 0; i < entered; i ++)
	{
		displayl(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}



int getinfо(student pa[], int n)
{
	int kol = 0;
	
	cout << "Введите полное имя, Хобби и ООП уровень:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Полное имя " << i << " студента : ";
		cin >> pa[i].fullname;
		if (cin.get() == '\n')
			break;

		cout << "Хобби " << i << " студента : ";
		cin >> pa[i].hobby;

		cout << "Уровень ООП " << i << " студента : ";
		cin >> pa[i].ooplevel;

		
		kol++;

	}
	return kol;
}



void displayl(student st)
{
	cout << "Student fullname: " << st.fullname << endl;
	cout << "Student hobby: " << st.hobby << endl;
	cout << "Student ooplevel: " << st.ooplevel << endl;
}

void display2(const student* ps)
{
	cout << "Student fullname: " << ps->fullname<< endl;
	cout << "Student hobby: " << ps->hobby << endl;
	cout << "Student ooplevel: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Student fullname: " << pa[i].fullname << endl;
		cout << "Student hobby: " << pa[i].hobby << endl;
		cout << "Student ooplevel:" << pa[i].ooplevel << endl;
	}
}
