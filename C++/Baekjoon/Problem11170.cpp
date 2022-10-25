#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int res=0;
        int a,b;
        cin>>a>>b;
        if(a==0) res++;
        for(int j=a; j<=b; j++)
        {
            int tmp=j;
            while(tmp>0)
            {
                if(tmp%10==0) res++;
                tmp/=10;
            }
        }
        cout<<res<<'\n';
    }
}