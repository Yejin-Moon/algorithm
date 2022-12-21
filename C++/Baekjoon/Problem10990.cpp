#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++) cout<<" ";
        cout<<"*";
        for(int k=0; k<=(i-2)*2; k++) cout<<" ";
        if(i!=1) cout<<"*";
        cout<<'\n';
    }
}