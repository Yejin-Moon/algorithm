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
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        tmp+=2;
        cout<<"\n";
    }
}