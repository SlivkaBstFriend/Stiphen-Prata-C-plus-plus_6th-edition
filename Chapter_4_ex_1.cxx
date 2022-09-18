#include <iostream>
#include <string>

using namespace std;

int main() 
{
	cout << "What is your first name? ";
	string first_name;
	getline(cin, first_name);
		
	cout << "What is your last name? ";
	string last_name;
	getline(cin, last_name);
		
	cout << "What letter grade do you deserve? ";
	char letter;
	cin >> letter;
		
	cout << "What is your age? ";
	int age;
	cin >> age;
		
	cout << "Name: " << first_name << " " << last_name << endl;
	cout << "Grade: ";
	cout.put(letter + 1);
	cout << endl;   		
	cout << "Age: " << age; 
	return 0;
}