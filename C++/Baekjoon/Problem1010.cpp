#include <iostream>
using namespace std;

int arr[31][31];
int main()
{
    for(int i=1; i<=30; i++)
    {
        arr[1][i]=i;
    }

    for(int i=2; i<=30; i++)
    {
        for(int j=i; j<=30; j++)
        {
            for(int k=j-1; k>=1;k--)
            {
                arr[i][j]+=arr[i-1][k];
            }
        }
    }
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m;
        cin>>n>>m;
        cout<<arr[n][m]<<'\n';
    }
}