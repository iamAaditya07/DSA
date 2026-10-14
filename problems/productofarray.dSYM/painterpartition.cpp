#include <iostream>
#include <vector>
using namespace std;

//painter partition problem

bool isvalid(vector<int> arr, int n, int m, int mat)
{
    int painter = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mat)
            return false;
        else if (mat>= (arr[i] + time))
        {
            time = time + arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    if (painter > m)
        return false;
    else
        return true;
}
int main()
{
    vector<int>vec={40,10,20,30};
    int n=4;
    int m=2;
    int sum=0;
    int mv=vec[0];
    for (int i = 0; i < n; i++)
    {
       sum+=vec[i];
       if(vec[i]>mv) mv=vec[i];
    }
    int st=mv;
    int end=sum;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(vec,n,m,mid)){
            ans=mid;
            end=mid-1;

        }
        else
        st=mid+1;
    }
    
    cout<<ans<<endl;
    return 0;
}