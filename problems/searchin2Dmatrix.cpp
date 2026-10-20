#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    int arr[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 34;
    bool a;
    int sr = 0, er = 2;
    bool ans = false;
    while (sr <= er)
    {
        int mid = (sr + er) / 2;

        if (target >= arr[mid][0] && target <= arr[mid][3])
        {
            int st = 0, end = 3;
            while (st <= end)
            {
                int m = (st + end) / 2;
                if (arr[mid][m] == target)
                {
                    ans = true;
                    break;
                }
                else if (target > arr[mid][m])
                {
                    st = m + 1;
                }
                else if (target < arr[mid][m])
                {
                    end = m - 1;
                }
                
            }
        }
        if(ans) break;
        else if (target >= arr[mid][3])
            sr = mid + 1;
        else
            er = mid - 1;
    }
    if (ans == true)
        cout << "Found" << endl;
    else 
        cout<<"Not found"<<endl;
    return 0;



}