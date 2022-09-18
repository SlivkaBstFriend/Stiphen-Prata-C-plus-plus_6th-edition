#include <iostream>

using namespace std;

struct bank 
{
    float sum_invest;
    float procent;
} ;

int main ()
{
    bank girls[2] =
    {
        {100, 0.10},
        {100, 0.05}
    };
    
    float sum_1 = 100.0;
    float sum_2 = 100.0;
    
    int years(0);
        
    do
    {
        sum_1 += girls[0].sum_invest * girls[0].procent;
        sum_2 += girls[1].sum_invest * girls[1].procent;
        girls[1].sum_invest =  girls[1].sum_invest + (girls[1].sum_invest * girls[1].procent);
        years++;    
        cout << "За " << years << " год баланс девушек" << endl;
        cout << "Дафна : " << sum_1<< " $" << endl;
        cout << "Клео : " << sum_2 << " $" << endl << endl;
   }  while (sum_1 > sum_2);
 cout << "Через " << years 
          << " лет баланс Клео превзойдет баланс Дафны";    
 return 0;   
}