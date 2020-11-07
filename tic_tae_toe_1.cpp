#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

using namespace std;
char arr[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
char again;
const char player_1 = 'X', player_2 = 'O';
int player_1_temp, player_2_temp, ds = 0, winner = 0, choose = 0, count;
void display();
void dice();
void turns();
void check_winner();
void again_or_not();

int main()
{
    cout << "~~To decide who will play first please roll the dice.~~\n"
         << endl;
    display();
    dice();
    again_or_not();
    system("pause");
    return 0;
}

void display()
{
    cout << "_" << arr[0] << "_|_" << arr[1] << "_|_" << arr[2] << "_" << endl;
    cout << "_" << arr[3] << "_|_" << arr[4] << "_|_" << arr[5] << "_" << endl;
    cout << " " << arr[6] << " | " << arr[7] << " | " << arr[8] << endl;
}

void dice()
{
    srand(time(NULL));

    if (ds == 0)
    {
        while (player_1_temp == player_2_temp)
        {
            cout << "Player 1 roll the dice." << endl;
            player_1_temp = rand() % 6 + 1;
            cout << "Player 1 rolled: " << player_1_temp << endl
                 << endl;
            cout << "Player 2 roll the dice." << endl;
            player_2_temp = rand() % 6 + 1;
            cout << "Player 2 rolled: " << player_2_temp << endl
                 << endl;
        }

        if (player_1_temp > player_2_temp)
        {
            cout << "Player 1 plays first.\n"
                 << endl;
            count = 0;
            turns();
        }
        else if (player_1_temp < player_2_temp)
        {
            cout << "Player 2 plays first.\n"
                 << endl;
            count = 1;
            turns();
        }
        else if (player_1_temp == player_2_temp)
        {
            system("cls");
            display();
        }

        ds++;
    }
}

void turns()
{
    while (winner != 1)
    {
        if (count == 0)
        {
            do
            {
                cout << "Player 1 pick a number: ";
                cin >> choose;
            } while (choose < 0 || choose > 8);

            arr[choose] = player_1;
            choose = 0;
            count++;
            system("cls");
            check_winner();
            display();
        }
        else if (count == 1)
        {
            do
            {
                cout << "Player 2 pick a number: ";
                cin >> choose;
            } while (choose < 0 || choose > 8);

            arr[choose] = player_2;
            choose = 0;
            count--;
            system("cls");
            check_winner();
            display();
        }
    }
}

void check_winner()
{
    if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
    {
        cout << "\nPLAYER 1 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }
    else if (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')
    {
        cout << "\nPLAYER 2 IS THE WINNER.\n"
             << endl;
        winner++;
    }

    if (winner == 1)
    {
        arr[0] = '0';
        arr[1] = '1';
        arr[2] = '2';
        arr[3] = '3';
        arr[4] = '4';
        arr[5] = '5';
        arr[6] = '6';
        arr[7] = '7';
        arr[8] = '8';
    }
}

void again_or_not()
{
    cout << "Would you like to play again? (Y/N): ";
    cin >> again;

    if (again != 'Y' && again != 'y' && again != 'N' && again != 'n')
    {
        cout << "Wrong letter.Try again: ";
        cin >> again;
    }

    if (again == 'Y' || again == 'y')
    {
        ds = 0;
        winner = 0;
        count = 0;
        choose = 0;
        player_1_temp = 0;
        player_2_temp = 0;
        system("cls");
        main();
    }
    else if (again == 'N' || again == 'n')
    {
        exit(EXIT_SUCCESS);
    }
}
