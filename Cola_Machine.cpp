#include <iostream>

using namespace std;

int main()
{
	int choice;
	char input, Y, N, y, n;

	cout << "#AVAILABLE DRINKS#" << endl;
	cout << "1.Coca - Cola.\n""2.Water.\n""3.Sprite.\n""4.Amita Motion.\n""5.Fanta.\n";
	cout << "Enter your choice (1 to 5): ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "You chose Coca - Cola." << endl;
		break;
	case 2:
		cout << "You chose Water." << endl;
		break;
	case 3:
		cout << "You chose Sprite." << endl;
		break;
	case 4:
		cout << "You chose Amita Motion." << endl;
		break;
	case 5:
		cout << "You chose Fanta." << endl;
		break;
	default:
		if (choice > 5)
		{
			cout << "Choice was not valid, here is your money back." << endl;
		}
		break;
	}

	cout << "Want to exit? (Y/N): ";
	cin >> input;

	if (input == Y || input == y)
	{
		exit;
	}
	else if (input == N || input == n)
	{
		main;
	}
	else if (input != Y || input != N || input != y || input != n)
	{
		cout << "You entered wrong letter.Please try again.: ";
		cin >> input;
	}
	return 0;
}
