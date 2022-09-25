#include <iostream>
#include <locale.h>
#include <array>
#include <cctype>

using namespace std;

int main ()
{
     setlocale(LC_ALL, "ru");
     array<double, 10> donat;
     double sredn(0);
     int i(0);
     for (i; i < 10; i++)
     {
         cout << "Введите пожертвование: ";
         cin >> donat[i]; 
          if (isalpha(donat[i]) == true)
              break;
          else
          sredn+= donat[i];    
     }
     cout << sredn / i; 
      return 0;
}