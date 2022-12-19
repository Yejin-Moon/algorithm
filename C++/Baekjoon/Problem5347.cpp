#include <iostream>
using namespace std;

long long GCD(long long a, long long b)
{
    while(b!=0)
    {
        long long tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}

long long LCM(long long a, long long b)
{
    return a*b/GCD(a,b);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long a,b;
        cin>>a>>b;
        cout<<LCM(a,b)<<'\n';
    }
}