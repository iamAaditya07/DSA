#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr={1,7,8,4,3,2,3,4,9};
     int l=0;
        int r=arr.size()-1;
        int w=0 , v;
        while(l<r){
            v=(min(arr[l],arr[r]))*(r-l);
            w=max(v,w);
            if(arr[l]<arr[r]){
                l++;
            }
           else r--;
            
        }
        cout<<"Maximum volume "<<w<<endl;
    return 0;
}