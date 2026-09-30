#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={3,4,5,6,7,0,1,2};
    int tar=9;
    int n=arr.size();
    int st=0;
    int end =n-1;
    while (st<=end)
    {
        int mid=st +(end-st)/2;
        if(arr[mid]==tar){
            cout<<"succesful"<<endl;
            return 0;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar && tar<=arr[mid]) end=mid-1;
            else st=mid+1;
        }
        else {
            if(arr[mid]<=tar && tar<=arr[end]) st=mid+1;
            else end=mid-1;
        }
    }
    cout<<"Unsuccesful"<<endl;
    return 0;
}