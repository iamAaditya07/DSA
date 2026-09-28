#include <iostream>
#include <vector>
using namespace std;

// time complexity = O(n^2);
int main()
{
    vector<int> arr = {1, 3, 4, 6, 2, 9, 0, 12, 10,4,7};
    int n = arr.size();
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}