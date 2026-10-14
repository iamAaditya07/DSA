#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> arr, int n, int m, int mp)
{
    int student = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mp)
            return false;
        else if (mp >= (arr[i] + pages))
        {
            pages = pages + arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }
    if (student > m)
        return false;
    else 
        return true;
}

int main()
{
    vector<int> nums = {2, 1, 3, 4};
    int m = 2;
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    int st = 0, end = sum;
    int ans=-1;
    if(m>n) return -1;
    while (st < end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(nums, n, m, mid))
        {
            end=mid-1;
            ans=mid;
        }
        else 
        st=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}