#include <iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    b=n%10;
    if(b==0)
    {
        b=10;
        n/=100;
    }
    else n/=10;
    a=n%10;
    if(a==0) a=10;
    cout<<a+b;
}