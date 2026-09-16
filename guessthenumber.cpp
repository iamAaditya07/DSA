#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime> // different random number on each run
using namespace std;

int main()
{
    srand(time(0));
    int inp=0;
    int target = rand() % 100 + 1;
    while (inp != target)
    {
        cout << "Make a guess:";
        cin >> inp;

        if (inp == target)
        {
            cout << "correct";
        }
    else if(inp<target){
        cout<<"Higher\n";
    }
    else 
    cout<<"Lower\n";
    }
    return 0;
}