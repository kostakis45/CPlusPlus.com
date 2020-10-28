#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>

using namespace std;

int main()
{
  system("chcp 1253>nul");
      srand(time(NULL));

  int guess, number, counter = 0;

  guess = rand() % 100 + 1;

cout << "#Εισήγαγε έναν αριθμό απο το 1 έως το 100#" << endl;
  cout << "Βρές τον αριθμό: ";
  cin >> number;
  counter++;

  do
  {
    if (number < guess)
    {
      cout << "Ο αριθμός που έβαλες είναι μικρός.Προσπάθησε ξανά: ";
      cin >> number;
      counter++;
    }
    else if (number > guess)
    {
      cout << "Ο αριθμός που έβαλες είναι μεγάλος.Προσπάθησε ξανά: ";
      cin >> number;
      counter++;
    }

    if (number == guess)
    {
      cout << "Τα κατάφερες.Ο αριθμός είναι: " << guess << " και χρειάστηκες: " << counter << " φορές για να το βρείς." << endl;
    }

} while (number != guess);

    system("pause");
  return 0;
}