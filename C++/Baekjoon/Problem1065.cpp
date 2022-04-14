#include <iostream>
using namespace std;

int func(int n)
{
    int res = 99;
    for(int i=110; i<=n; i++)
    {
        int a1,a2,a3=0;
        a1 = i%10;
        a2 = (i/10)%10;
        a3 = (i/100)%10;
        int gap1, gap2, gap3=0;
        gap1 = a1-a2;
        gap2 = a2-a3;
        if(gap1==gap2) res++;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int res = 0;

    for(int i=1; i<=n; i++)
    {
        if(n<100) 
        {
            res = n;
            break;
        }
        else 
        {
            if(n==1000) n=999;
            res = func(n);
        }
    }
    cout<<res<<'\n';
}