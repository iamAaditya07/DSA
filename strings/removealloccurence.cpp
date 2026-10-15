#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s="dabcdbcddabcdadbc";
    string part="abc";
    while(s.find(part)<s.length()){
        int i=s.find(part);
        s.erase(i,part.length());
    }
    cout<<s<<endl;
    return 0;
}