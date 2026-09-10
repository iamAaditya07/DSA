#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //pair sum problem
    // array is sorted
    // optimized using two pointers
    vector<int> arr = {2, 3, 4, 6, 10, 12};
    int target = 10;
    int ps = 0;
    int st = 0, end = arr.size()-1;
    while (st < end)
    {
        ps = arr[st] + arr[end];
        if(ps>target){
            end--;
        }
        else if(ps<target){
            st++;
        }
        else if(ps==target)
        break;
    }
    cout<<st<<","<<end<<endl;
    return 0;
}