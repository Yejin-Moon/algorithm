#include <iostream>
using namespace std;

int main()
{
    int a, res=0;

    while(1)
    {
        cin>>a;
        if(a==-1) break;
        res+=a;
    }
    cout<<res;
}