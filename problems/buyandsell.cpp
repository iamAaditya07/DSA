#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {3, 5, 1, 7, 8};
    int small = arr[0];
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < small)
        {
            c=i;
            small = arr[i];
        }
    }
    // cout<<small<<c<<endl;
    // int st = small;
    int big=arr[0];
    for (int j = c+1; j < 5; j++)
    {
        if(arr[j]>big)
        big=arr[j];
        
    }
    cout<<(big-small)<<endl;
    return 0;
}