#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &arr,int n,int c,int mid)
{
    sort(arr.begin(),arr.end());
    int cows=1,lastpos=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]-lastpos >=mid){
            cows++;
            lastpos=arr[i];
        }
        if(cows==c)
        return true;
    }
    return false;

}
int main()
{
    vector<int> arr={1,2,8,4,9};
    int c=3;
    int max = *std::max_element(arr.begin(),arr.end());
    int min = *std::min_element(arr.begin(),arr.end());
    int end=max-min;
    int st=1;
    int ans;
    while(end>=st){
        int mid =(st+end)/2;
        if(isPossible(arr,5,c,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}