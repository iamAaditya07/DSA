#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int s=0;
    for (int i = 0; i <=5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(j%2==0)
            s=1;
            else
            s=0;
            cout<<s;
        }
        cout<<endl;
    }
    
    
    return 0;
}