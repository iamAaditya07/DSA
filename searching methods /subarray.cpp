#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // total number of subarrays = (n*(n+1)/2) n = no. of elements
    int arr[]={1,2,3,4,5};
    for (int st = 0; st < 5; st++)
    {
        for (int end = st; end < 5; end++)
        {
            for (int i = st; i <=end; i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}
