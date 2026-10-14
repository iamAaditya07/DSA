#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s="Hello";
    int st=0;
    int l=s.length()-1;
    while (l>=st)        
    {
        swap(s[st],s[l]);
        l--;
        st++;
    }
    cout<<s<<endl;
    return 0;
}