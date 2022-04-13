#include <iostream>
using namespace std;

int main()
{
    int L,P,V;
    int a,b;
    for(int i=1;; i++)
    {
        cin>>L>>P>>V;
        if(L==0) break;
        a = V/P;
        b = V%P;
        if(b>L) b=L;
        cout<<"Case "<<i<<": "<<a*L+b<<'\n';
    }
}