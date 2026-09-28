#include <iostream>
#include <vector>
using namespace std;

//tc =O(n^2)
int main()
{
    
    vector<int> arr = {1, 3, 4, 6, 2, 9, 0, 12, 10,4,7};
    int n = arr.size();
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>curr)
        {
           arr[prev+1]=arr[prev];
           prev--;
        }
        
        arr[prev+1]=curr;
    }
    
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}