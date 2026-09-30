#include <iostream>
#include <vector>
using namespace std;

long gcd(int a,int b){
    a=abs(a);
    b=abs(b);
    return (b==0)?a:gcd(b,a%b);
}

int main()
{
    int a;
    int b;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    
    cout<<"GCD = "<<gcd(a,b)<<endl;
    
    return 0;
}