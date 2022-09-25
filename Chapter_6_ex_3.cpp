/*
Write a precursor to a menu-driven program.The program should display a menu
offering four choices, each labeled with a letter. If the user responds with a letter
other than one of the four valid choices, the program should prompt the user to
enter a valid response until the user complies.Then the program should use a
switch to select a simple action based on the user’s selection.A program run could
look something like this:
Please enter one of the following choices:
c) carnivore p) pianist
t) tree g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.
*/

#include <iostream>

using namespace std;
void showmenu();

int main()
{	
	char user_write;
	showmenu();
	cin >> user_write;
	while ((user_write != 'c') && (user_write != 'C') &&
		   (user_write != 't') && (user_write != 'T') &&
		   (user_write != 'p') && (user_write != 'P') &&
		   (user_write != 'g') && (user_write != 'G'))
		{
			cout << endl;
			cout << "Please enter a c, p, t, or g:";
			cin >> user_write;
			cout << endl;
		}

	switch (user_write)
	{
		case 'c':
		case 'C': cout << "A tiger is a carnivore.";
			break;
		case 't':
		case 'T': cout << "A maple is a tree.";
			break;
		case 'p':
		case 'P': cout << "Fryderyk Chopin pianist.";
			break;
		case 'g':
		case 'G': cout << "Mario is a game.";
			break;
		default:  cout << "Please enter a c, p, t, or g: ";
	}
	return 0;
}

void showmenu()
{
	cout << "Please enter one of the following choices:\n"
		"c) carnivore p)	pianist\n"
		"t) tree      g)	game\n";
}
