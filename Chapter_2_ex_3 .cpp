/*Write a C++ program that uses three user-defined functions (counting main() as
one) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines,and the remain
ing function,also called twice, should produce the remaining output*/

#include <iostream> 
#include <locale.h>

void second(void);
void first(void);

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");

 first();
 first();
 second();
 second();

return 0;
}

void second() 
{
cout << "See how they run \n";
}

void first () 
{
	cout << "Three blind mice \n";
}
