#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        int res=0;
        for(int j=0; j<m; j++)
        {
            int a;
            cin>>a;
            res+=a;
        }
        cout<<res<<'\n';
    }
}