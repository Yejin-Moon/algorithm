#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int len;
    if(n%2==0) len=n/2;
    else len = n/2+1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<len; j++)
        {
            cout<<"* ";
        }
        cout<<'\n';
        for(int k=0; k<n/2; k++)
        {
            cout<<" *";
        }
        cout<<'\n';
    }
}