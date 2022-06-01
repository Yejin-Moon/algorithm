#include <iostream>
using namespace std;

int main()
{
    int a;
    int n,m;
    cin>>a>>n>>m;

    int cnt=0;

    while(n>0)
    {
        if(m==2&&n==1)
        {
            cnt++;
            break;
        }
        if(m==n) break;
        if(n%2!=0) n++;
        if(m%2!=0) m++;
        n/=2;
        m/=2;
        cnt++;
    }

    cout<<cnt;
}