#include <iostream>
using namespace std;

int fac(int n)
{
    int res = 1;
    for(int i=n; i>0; i--)
    {
        res *= i;
    }
    return res;
}
int main()
{
    int n,k;
    cin>>n>>k;

    int res = fac(n)/(fac(k)*fac(n-k));
    cout<<res;
}