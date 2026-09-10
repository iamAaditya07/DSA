#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //binary search method 
    // works on sorted array/vector
    vector<int>vec={2,3,4,5,6,7,8};
    int target=8;
    int st=0,end=vec.size()-1;
    bool a=false;
    while (st<=end)
    {
        int mid =(st+end)/2;
        if(target>vec[mid]){
            st=mid+1;
        }
        else if(target<vec[mid]){
            end=mid-1;
        }
        else if(vec[mid]==target){
            a=true;
            break;
        }

    }
    if(a==true) cout<<"Target found"<<endl;

    return 0;
}