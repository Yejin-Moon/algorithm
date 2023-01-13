#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=0;
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
        {
            for(int j=0; j<n+(n-1); j++) cout<<"*";
            break;
        } 
        for(int j=n-i-1; j>0; j--) cout<<" ";
        cout<<"*";
        if(i==0) 
        {
            cout<<"\n";
            continue;
        }
        for(int j=0; j<i+t; j++) cout<<" ";
        if(i!=n-1) cout<<"*\n";
        t++;
    }
}