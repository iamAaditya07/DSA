#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // star pattern 
    for(int i=1;i<=5;i++){
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}