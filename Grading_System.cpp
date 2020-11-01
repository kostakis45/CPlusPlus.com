#include <iostream>
using namespace std;

int main()
{
	int grades;

	cout << "Enter the student score: ";
	cin >> grades;

	if (grades == 0 || grades <= 59)
	{
		cout << "You scored a F' grade." << endl;
	}
	else if (grades == 60 || grades <= 69)
	{
		cout << "You scored a D' grade." << endl;
	}
	else if (grades == 70 || grades <= 79)
	{
		cout << "You scored a C' grade." << endl;
	}
	else if (grades == 80 || grades <= 89)
	{
		cout << "You scored a B' grade." << endl;
	}
	else if (grades == 90 || grades <= 100)
	{
		cout << "You scored a A' grade." << endl;
	}

	return 0;
}
