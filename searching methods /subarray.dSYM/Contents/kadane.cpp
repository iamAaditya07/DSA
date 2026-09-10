#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //kadane algofor maximum subarray sum
    int arr[]={3,-5,7,-1,5};
    int cs=0 , ms=INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        cs+=arr[i];
        ms=max(ms,cs);
        if(cs<0)
        cs=0;
       
    }
    cout<<"MAx SubArray sum = "<<ms;
    return 0;
}