#include <iostream>

using namespace std;

int main()
{
    int person[10], counter = 0, answer = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Give some pancakes to person " << i + 1 << ":";
        cin >> person[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (person[i] > answer)
        {
            counter = i + 1;
            answer = person[i];
        }
    }

    cout << "The person who ate the most pancakes is person " << counter << " with total of " << answer << " pancakes." << endl;

    for (int i = 0; i < 10; i++)
    {
        if (person[i] < answer)
        {
            counter = i + 1;
            answer = person[i];
        }
    }

    cout << "The person who ate the least pancakes is person " << counter << " with total of " << answer << " pancakes." << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Person " << i + 1 << " ate:" << person[i] << " pancakes." << endl;
    }

    system("pause");
    return 0;
}