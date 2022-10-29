#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    while(b!=0)
    {
        long long tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a*b/gcd(a,b);
}

int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}