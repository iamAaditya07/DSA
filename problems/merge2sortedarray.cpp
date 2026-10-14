#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,0,0,0};
    vector<int> vec={4,5,6};
    int n=3,m=3;
    int idx=m+n-1;
    int i=n-1;
    int j=m-1;
    while (i>=0 && j>=0)
    {
        if (arr[i]>=vec[j])
        {
           arr[idx]=arr[i];
           idx--;i--;
        }
        else{
            arr[idx]=vec[j];
            idx--;j--;
        }
        
    }
    while(j>=0)
    {
         arr[idx]=vec[j];
            idx--;j--;
    }
    for (int i = 0; i < m+n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}