#include <iostream>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int user_input, computer_guess, counter = 0, first = 1, last = 100;
char input, in_exit;
void win_or_loss();
void exit_or_not();

int main()
{
  srand(time(NULL));
  computer_guess = rand() % 100 + 1;

  cout << "Give a number between 1 to 100: ";
  cin >> user_input;

  do
  {
    counter++;
    cout << "Is the number " << computer_guess << " low or high? (L/H): ";
    cin >> input;

    if (input == 'h')
    {
      last = computer_guess;
      computer_guess = (last + first) / 2;
      computer_guess--;
      win_or_loss();
    }
    else if (input == 'l')
    {
      first = computer_guess;
      computer_guess = (first + last) / 2;
      computer_guess++;
      win_or_loss();
    }
  } while (computer_guess != user_input);

  system("pause");
  return 0;
}

void win_or_loss()
{
  if (computer_guess == user_input)
  {
    cout << "Congratulations.You won." << endl;
    cout << "Computer found the nunmber in question and it is: " << computer_guess << " after " << counter << " attempts." << endl;
  }
  else if (counter > 7)
  {
    cout << "Unfortunatly you didn't manage to find the number.You loose.Total attempts: " << counter << endl;
    exit_or_not();
  }
}

void exit_or_not()
{
  while (in_exit != 'y' || in_exit != 'n')
  {
    cout << "Do you want to exit? (Y/N): ";
    cin >> in_exit;

    if (in_exit != 'y' || in_exit != 'n')
    {
      cout << "Wrong letter.Try again." << endl;

      if (in_exit == 'y')
      {
        exit(EXIT_SUCCESS);
      }
      else if (in_exit == 'n')
      {
        counter = 1;
        computer_guess = rand() % 100 + 1;
        main();
      }
    }
  }
}