#include <iostream>
#include <cmath>



int main() {
    int n ,r;
    int digit=0;
    int sum=0;
    std::cout << "Enter a number:";
    std::cin >> n;
    int c=n;
    int d=c;
    while(c>0){
        digit++;
        c=c/10;
    }
    while(n>0){
        r=n%10;
        sum += static_cast<int>(std::pow(r, digit));
        n=n/10;
    }
    if(sum==d)
    std::cout << "Armstrong Number\n";
    else
    std::cout << "Not Armstrong no.\n";

    return 0;
}