#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    //2 sum problem using hashing 
    vector<int> arr={5,2,11,7,15};
    int target=9; 
    unordered_map<int,int>m;
    for (int i = 0; i < 5; i++)
    {
        int sec=target-arr[i];
        if (m.find(sec)!=m.end())  
        {
            cout<<i<<' '<<m[sec]<<endl;
        }
        
        m[arr[i]]=i;
    }
    
    return 0;
}

