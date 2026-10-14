#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //we have to find product of array except self
    //we are not allowed to use division operator
    //optimal approach tc=O(n);
    // will calc prefix and suffix for each index
    vector<int>arr={2,3,4,5,6};
    int n=arr.size();
    // vector<int>prefix(n,1);
    // prefix[0]=1;
    // vector<int>suffix(n,1);
    // suffix[n-1]=1;
    // for (int i = 1; i < n; i++)
    // {
    //    prefix[i]=prefix[i-1]*arr[i-1];
    // }
    
    // for (int j = n-2; j >=0; j--)
    // {
    //    suffix[j]=suffix[j+1]*arr[j+1];
    // }
    vector<int> ans(n,1);
    // for (int i = 0; i < n; i++)
    // {
    //     ans[i]=prefix[i]*suffix[i];
    // }
    
    
    // now we will optimize space complexity
    for (int i = 1; i < n; i++)
    {
       ans[i]=ans[i-1]*arr[i-1];
    }
    int suffix=1;
    for (int j = n-2; j >=0; j--)
    {
        suffix=suffix*arr[j+1];
       ans[j]*=suffix;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<endl;
    }


    return 0;
}