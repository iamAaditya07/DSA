#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string c=s;
    int st=0;
    int l=s.length()-1;
    while (l>=st)        
    {
        swap(s[st],s[l]);
        l--;
        st++;
    }
    if(c==s)cout<<"Palindrome"<<endl;
    else cout<<"Not a palindrome"<<endl;
    return 0;
}