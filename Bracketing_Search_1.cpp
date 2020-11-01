#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>

using namespace std;

int main()
{
  srand(time(NULL));

  int guess, number, counter = 0;

  guess = rand() % 100 + 1;

  cout << "# Give a number from 1 to 100 #" << endl;
  cout << "Find the number: ";
  cin >> number;
  counter++;

  do
  {
    if (number < guess)
    {
      cout << "The number you entered is low.Try again: ";
      cin >> number;
      counter++;
    }
    else if (number > guess)
    {
      cout << "The number you entered is high.Try again: ";
      cin >> number;
      counter++;
    }

    if (number == guess)
    {
      cout << "You did it.The number is: " << guess << " and you found it after : " << counter << " tries." << endl;
    }

  } while (number != guess);

  system("pause");
  return 0;
}
