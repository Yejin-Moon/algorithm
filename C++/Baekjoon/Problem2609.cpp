#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
        int w = a%b;
        a=b;
        b=w;
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    /*int t=a,q=b;
    int w;
    while(1)
    {
        if(q==0) break;
        w = t%q;
        t = q;
        q = w;
    }*/
    int w = gcd(a,b);
    cout<<w<<'\n';
    cout<<(a*b)/w<<'\n';
}