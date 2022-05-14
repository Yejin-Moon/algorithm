#include <iostream>
using namespace std;

int a[1000000];
int d[1000000];
int main()
{
    int n;
    int ans;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ans = a[0];
    for(int i=0; i<n; i++)
    {
        d[i]=a[i];
        if(i==0) continue;
        if(d[i] < d[i-1]+a[i])
        {
            d[i] = d[i-1] + a[i];
        }
        if(d[i]>ans) ans= d[i];
    }
    cout<<ans<<'\n';
}