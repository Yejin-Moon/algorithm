#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[501][501] = {0,};

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cin>>dp[i][j];
        }
    }

    int maxarr = dp[1][1];

    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i+1; j++)
        {
            if(j==1) dp[i][j] += dp[i-1][j];
            else if(j==i) dp[i][j] += dp[i-1][j-1];
            else dp[i][j] += max(dp[i-1][j-1], dp[i-1][j]);
            maxarr = max(maxarr, dp[i][j]);
        }
    }

    cout<<maxarr<<'\n';

}