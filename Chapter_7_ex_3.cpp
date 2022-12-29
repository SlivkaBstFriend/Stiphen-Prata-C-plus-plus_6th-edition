//Пусть имеется следующее объявление структуры :
//struct box
//{
//    char maker[40];
//    float height;
//    float width;
//    float length;
//    float volume;
//};
//а.Напишите функцию, принимающую структуру box по значению и
//отображающую все ее члены.
//б.Напишите функцию, принимающую адрес структуры box и устанавливающую
//значение члена volume равным произведению остальных трех членов.
//в.Напишите простую программу, которая использует эти две функции.


// a.
//#include <iostream>
//using namespace std;

//struct box
//{
//    char maker[40];
//    float height;
//    float width;
//    float length;
//    float volume;
//};

//void view(void);

//int main()
//{
//    view();
//    return 0;
//}

//void view(void)
//{
//    box str;
//    str = { "mmmm", 1.11, 2.22, 3.33, 4.44 };
//    cout << str.maker;
//    cout << str.height;
//    cout << str.width;
//    cout << str.length;
//    cout << str.volume;

//}

//б.
/*#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void view(const box * p);

int main()
{
	box p;
	view(&p);
	return 0;
}

void view(const box* p)
{
	box str;
	str = { "mmmm", 1.11, 2.22, 3.33, 4.44 };
	cout << str.volume * str.length * str.width * str.height;
}*/

//#include <iostream>
//using namespace std;
//
//struct box
//{
//    char maker[40];
//    float height;
//    float width;
//    float length;
//    float volume;
//};
//
//void comp(const box * str);
//box view(void);
//
//int main()
//{
//    box str = view();
//    comp(&str);
//    return 0;
//}
//
//void comp(const box* str)
//{
//    cout << "Comlication Volume: ";
//    cout << str->volume * str->length * str->width * str->height << endl;
//}
//
//box view(void)
//{
//    box str;
//    str = { "mmmm", 1.11, 2.22, 3.33, 4.44 };
//    cout << "View every  init type : ";
//    cout << str.maker << " ";
//    cout << str.height << " ";
//    cout << str.width << " ";
//    cout << str.length << " ";
//    cout << str.volume << " ";
//    cout << endl;
//    return str;
//}