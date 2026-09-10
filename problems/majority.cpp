#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {2,3,4,2,3,2,2};

    sort(vec.begin(), vec.end());

    int freq = 1;
    int ans = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == vec[i-1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = vec[i];
        }

        // CHECK HERE
        if (freq > vec.size()/2)
        {
            cout << "Majority element is "<<ans << endl;
            break;
        }
    }

    return 0;
}
