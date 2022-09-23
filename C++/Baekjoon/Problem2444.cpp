#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int tmp=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<tmp; j++)
        {
            cout<<"*";
        }
        tmp+=2;
        cout<<"\n";
    }
    tmp-=4;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<tmp; j++)
        {
            cout<<"*";
        }
        tmp-=2;
        cout<<"\n";
    }
}