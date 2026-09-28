#include <iostream>
#include <vector>
using namespace std;
// binary search using recursive method

int bs(int tar, vector<int>arr, int st, int end)
{

    if (st <= end)
    {

        int mid = (st + end) / 2;
        if (tar > arr[mid])
        {
            bs(tar, arr, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            bs(tar, arr, st, mid - 1);
        }
        else
            return mid;
    }
    return -1;
}

int main()
{
    vector<int> vec ={1,2,3,4,5,6,7};
    int t=3;
    int st=0;
    int end=vec.size();
    cout<<bs(t,vec,st,end)<<endl;
    return 0;
}