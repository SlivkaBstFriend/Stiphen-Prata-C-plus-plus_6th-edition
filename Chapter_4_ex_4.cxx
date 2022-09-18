#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your first name: ";
	string first_name;
	getline(cin, first_name);
		
	cout << "Enter your last name: ";
	string last_name;
	getline(cin, last_name);
	
	string letters = ", " ;
	
	cout << "Here's the information in a single string: " 
			 << last_name
			 << letters
			 << first_name; 
	return 0;
}