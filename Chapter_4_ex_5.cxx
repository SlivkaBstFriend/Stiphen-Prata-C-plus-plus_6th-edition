#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct CandyBar
{
		string name;
		float weight;		
		int cal;
};
	CandyBar snack =
{	
			"Mocha munch",
			2.3,
			350
};
		cout << snack.name << ", " << snack.weight << ", " << snack.cal;
	return 0;	
}
