#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int>& arr,int target,int st,int end)
{
    int mid=(st+end)/2;
    if(arr[mid]==target)
    return mid;
    else if(target>arr[mid])
    return bs(arr,target,mid+1,end);
    else
    return bs(arr,target,st,mid-1);
return -1;
}

int main()
{ 
    vector <int> arr={-1,0,3,5,9,12};
    int target=9;
    int idx=bs(arr,target,0,5);
    cout<<idx<<endl;
    return 0;
}