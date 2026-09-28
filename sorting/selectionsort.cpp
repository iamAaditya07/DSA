#include <iostream>
#include <vector>
using namespace std;

// tme complexity=O(n^2)
int main()
{
     vector<int> arr = {1, 3, 4, 6, 2, 9, 0, 12, 10,4,7};
    int n = arr.size();
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int si=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[si])
            si=j;
        }
        swap(arr[i],arr[si]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}