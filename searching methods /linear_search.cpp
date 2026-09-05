#include <iostream>
#include <vector>
using namespace std;
 
int linearsearch(int arr[] ,int sz,int target){
    
    for (int i = 0; i < sz; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[] = {88, 99, 77, 66, 43};
   
    cout<<linearsearch(arr , 5 , 77)<<endl;
    

    return 0;
}