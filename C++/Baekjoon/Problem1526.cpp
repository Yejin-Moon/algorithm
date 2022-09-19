#include <iostream>
using namespace std;

bool sol(int n)
{
    while(n)
    {
        if(n%10==4 || n%10==7) n/=10;
        else return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=n; i>=4; i--)
    {
        if(sol(i))
        {
            cout<<i<<'\n';
            return 0;
        }
    }
}