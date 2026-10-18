#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime> // different random number on each run
using namespace std;

int main()
{

    int win[2];
    for (int i = 1; i <= 2; i++)
    {
        cout << "Player " << i << endl;
        srand(time(0));

        int target = rand() % 100 + 1;

        int c = 0;
        int inp = 0;
        while (inp != target)
        {
            cout << "Make a guess:";
            cin >> inp;
            c++;
            if (inp == target)
            {
                cout << "correct guessed in " << c << " moves" << endl;
            }
            else if (inp < target)
            {
                cout << "Higher\n";
            }
            else
                cout << "Lower\n";
        }
        win[i - 1] = c;
    }
    if (win[0] > win[1])
        cout << "Player2 won" << endl;
    else
        cout << "Player1 won" << endl;
    return 0;
}