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
    cout << "Введите количество студентовe: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfо(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
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
        cout << "Полное имя " << i + 1 << " студента : ";
        
        
        cin.getline(pa[i].fullname, SLEN);
        /*if (cin.get() == '\n')
            break;*/

        cout << "Хобби " << i +1 << " студента : ";
        cin >> pa[i].hobby;

        cout << "Уровень ООП " << i + 1 << " студента : ";
        cin >> pa[i].ooplevel;
        cin.ignore();
        kol++;

    }
    return kol;
}

void displayl(student st)
{
    cout << "\n\nФункция  dis[lay1, которая принимает структуру student: \n\n";
    cout << "Имя студента: " << st.fullname << endl;
    cout << "Хобби студента: " << st.hobby << endl;
    cout << "Уровень ООП: " << st.ooplevel << endl;
}

void display2(const student* ps)
{
    cout << "\n\nФункция  dis[lay2, которая принимает указатель const на структуру student: \n\n";
    cout << "Имя студента: " << ps->fullname << endl;
    cout << "Хобби студента: " << ps->hobby << endl;
    cout << "Уровень ООП: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    cout << "\n\nФункция  dis[lay3, которая принимает указатель на первый элемент м массива структуры student и количество элементов: \n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Имя студента: " << pa[i].fullname << endl;
        cout << "Хобби студента: " << pa[i].hobby << endl;
        cout << "Уровень ООП:" << pa[i].ooplevel << endl;
    }
}
