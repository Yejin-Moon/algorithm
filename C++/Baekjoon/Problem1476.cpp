#include <iostream>
using namespace std;

int main()
{
    int e,s,m;
    cin>>e>>s>>m;
    int res=1;
    while(1)
    {
        if((res-e)%15==0 && (res-s)%28==0 && (res-m)%19==0) break;
        res++;
    }
    cout<<res;
}