#include <iostream>
#include <vector>
using namespace std;

int  main()
{
    // vector is similar to array
    // vector is dynamic in nature means it don't have fixed size like array

    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 10};
    // cout<<vec[1]<<endl;

    // for vec we use for each loop
    // here i do not store index but value at that index
    for (int i : vec)
    {
        cout << i << endl;
    }

    // vector functions

    // 1. size function
    cout << vec.size() << endl;

    // push back function :element is pushed to last and increases size
    // vec.push_back(x)
    // pop back function : element is deleted from last
    // vec.pop_back()
    // front and back function which returns first and last value

    // at function : give value at index vec.at(i)

    


    return 0;
}