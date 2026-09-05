#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // reversing an array using 2 pointer approach
    int arr[]={2,4,5,9,87,52,76};
    int s=0,e = sizeof(arr)-1;
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < sizeof(arr); i++)
    {
        cout<<arr[i]<<endl;
    }
    
      
    return 0;
}