/*Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
10% of the original investment, or $10 each and every year:
interest = 0.10 × original balance
At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
of the current balance, including previous additions of interest:
interest = 0.05 × current balance
Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
$105, or $5.25,and so on.Write a program that finds how many years it takes for
the value of Cleo’s investment to exceed the value of Daphne’s investment and then
displays the value of both investments at that time.*/

#include <iostream>
#include <locale.h>

using namespace std;

struct bank 
{
    float sum_invest;
    float procent;
} ;

int main ()
{
    setlocale(LC_ALL, "Russian");

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
