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

cout << "#�������� ���� ������ ��� �� 1 ��� �� 100#" << endl;
  cout << "���� ��� ������: ";
  cin >> number;
  counter++;

  do
  {
    if (number < guess)
    {
      cout << "� ������� ��� ������ ����� ������.���������� ����: ";
      cin >> number;
      counter++;
    }
    else if (number > guess)
    {
      cout << "� ������� ��� ������ ����� �������.���������� ����: ";
      cin >> number;
      counter++;
    }

    if (number == guess)
    {
      cout << "�� ���������.� ������� �����: " << guess << " ��� �����������: " << counter << " ����� ��� �� �� �����." << endl;
    }

} while (number != guess);

    system("pause");
  return 0;
}