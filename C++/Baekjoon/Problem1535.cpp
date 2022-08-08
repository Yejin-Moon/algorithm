#include <iostream>
using namespace std;

int maxval(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int dp[21][101];
int main()
{
    int n;
    cin>>n;
    int lose[21],joy[21];
    for(int i=1; i<=n; i++)
    {
        cin>>lose[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>joy[i];
    }
    int res = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=100; j++)
        {
            if(j+lose[i]<100) dp[i][j]=maxval(dp[i-1][j+lose[i]]+joy[i],dp[i-1][j]);
            else dp[i][j]=maxval(dp[i][j],dp[i-1][j]);
            if(dp[i][j]>res) res=dp[i][j];
        }

    }
    cout<<res<<endl;
}