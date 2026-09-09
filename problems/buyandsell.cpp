#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 5, 1, 7, 8};
           int mp=0,bb=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>bb){
             mp=max(mp,(arr[i]-bb));
            }
            bb=min(bb,arr[i]);
        }
        cout<<mp<<endl;
    return 0;
}