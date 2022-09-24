#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int tmp=n*2;
    if(tmp%2==0) tmp-=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
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
    tmp=3;
    for(int i=2; i<=n; i++)
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
}