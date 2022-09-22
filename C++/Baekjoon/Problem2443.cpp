#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int tmp=(2*n)-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=tmp; j>0; j--)
        {
            cout<<"*";
        }
        tmp-=2;
        cout<<"\n";
    }
}