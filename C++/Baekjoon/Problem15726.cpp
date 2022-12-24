#include <iostream>
using namespace std;

long long maxval(long long a, long long b)
{
    if(a>b) return a;
    else return b;
}
long long minval(long long a, long long b)
{
    if(a<b) return a;
    else return b;
}

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<a*maxval(b,c)/minval(b,c);
}