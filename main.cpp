#include <iostream>
using namespace std;

int main()
{
    int number, counter = 0;
    while (number != 5)
    {
        cout << "Please enter a number that is not " << counter << ":", " ";
        cin >> number;

        if (number == counter)
        {
            break;
        }

        counter++;

        if (counter == 10)
        {
            cout << "Wow, you're more patient then I am, you win" << endl;
            system("pause");
            break;
        }

        if (number == 5)
        {
            cout << "Hey! you weren't supposed to enter 5!" << endl;
            system("pause");
            break;
        }
    }

    return 0;
}