#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //majority element using Moore's Voting Algo
    vector<int> arr = {2,4,3,4,2,4,4};
    int freq=0;
    int ans=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(freq==0)
        ans=arr[i];
        if(arr[i]==ans) freq++;
        else freq--;
    }
    cout<<ans<<endl;
    return 0;
}