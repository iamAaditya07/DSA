#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // here we will sort array of 0,1 and 2
    // we will not use sort function library
    vector<int> arr = {0, 0, 1, 2, 1, 1, 2, 0};
    // first method is to count frequency of all element and put in answer array;
    int cone = 0, ctwo = 0, czero = 0;
    // vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            czero++;
        else if (arr[i] == 1)
            cone++;
        else
            ctwo++;
    }
    int index=0;
    for (int i = 0; i < czero; i++)
    {
        arr[index++]==0;
    }
    
    for (int i = 0; i < cone; i++)
    {
        arr[index++]==1;
    }
    
    for (int i = 0; i < ctwo; i++)
    {
        arr[index++]==2;
    }
    
    for (int i = 0; i < arr.size();i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;
}