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