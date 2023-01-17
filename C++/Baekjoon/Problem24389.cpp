#include <iostream>
using namespace std;

int main()
{
    int n, nc, res=0;
    cin>>n;
    nc=~n;
    nc+=1;
    for(int i=31; i>=0; i--)
    {
        if(n&(1<<i)^nc&(1<<i)) res++;
    }
    cout<<res;
}