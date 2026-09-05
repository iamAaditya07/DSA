#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[]={88,99,77,66,43};
    // let's search 66
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==66)
        cout<<"target element is present at index no. "<<i<<endl;
        
        
    }
    
    return 0;
}