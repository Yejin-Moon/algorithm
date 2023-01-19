#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    int res=0;
    while(B>1)
    {
        if(res>=A) break;
        B-=2;
        res++;
    }
    while(C>0)
    {
        if(res>=A) break;
        C--;
        res++;
    }
    cout<<res;
}