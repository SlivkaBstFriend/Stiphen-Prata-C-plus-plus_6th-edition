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
 
 CandyBar * snack = new CandyBar[3];
 
 snack [0] = { "Mocha Munch", 2.3, 350};
 snack [1] = { "Mocha Munch", 2.3, 350};
 snack [2] = { "Mocha Munch", 2.3, 350};
		
		cout << "First mas: "<< snack[0].name << ", " 
				 						  << snack[0].weight << ", " 
				 						  << snack[0].cal;
		cout << endl;
		cout << "Sec mas: " << snack[1].name << ", " 
										  << snack[1].weight << ", " 
										  << snack[1].cal;
		cout << endl;
		cout << "Fird mas: "<< snack[2].name << ", " 
										  << snack[2].weight << ", " 
										  << snack[2].cal;
    delete [] snack;
	return 0;	
}
