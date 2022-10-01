/*Write a program that asks the user to enter his or her first name and then last
name,and that then constructs, stores,and displays a third string, consisting of the
user’s last name followed by a comma,a space,and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip*/

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
