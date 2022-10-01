/*Write a C++ program that requests and displays information as shown in the following example of output:
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
Note that the program should be able to accept first names that comprise more
than one word.Also note that the program adjusts the grade downward—that is, up
one letter.Assume that the user requests an A,a B, or a C so that you don’t have to
worry about the gap between a D and an F*/

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
