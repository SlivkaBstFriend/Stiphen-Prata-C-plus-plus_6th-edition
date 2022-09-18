#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your first name: ";
	char first_name [20] = {};
	cin.getline(first_name, 20);
		
	cout << "Enter your last name: ";
	char last_name [20] = {};
	cin.getline(last_name, 20);
	
	char letters[] = ", " ;
	strcat(last_name, letters);
	strcat(last_name, first_name);
	cout << "Here's the information in a single string: " << last_name;
	
	return 0;
}