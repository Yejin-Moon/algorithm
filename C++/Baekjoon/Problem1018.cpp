#include <iostream>
#include <algorithm>
using namespace std;

int arr[51][51];

int check(int x, int y)
{
    int cntb=0;
    int cntw=0;

    for(int i=x; i<x+8; i++)
    {
        for(int j=y; j<y+8; j++)
        {
            if((i+j)%2==arr[i][j]) cntb++;
            if((i+j+1)%2 ==arr[i][j]) cntw++;
        }
    }
    return min(cntb, cntw);
}


int main()
{
    int n,m;
    cin>>n>>m;
    char c;
    int mini = 2500;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>c;
            if(c=='B') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    for(int i=0; i<=n-8; i++)
    {
        for(int j=0; j<=m-8; j++)
        {
            if(mini>check(i,j)) mini = check(i,j);
        }
    }
    cout<<mini;
}