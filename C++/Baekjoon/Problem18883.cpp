#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            cout<<j+(i*m)<<" ";
        }
        cout<<m+(i*m);
        cout<<'\n';
    }
}