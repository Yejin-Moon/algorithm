#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int dp[12] = {0,1,2,4,};

    for(int i=4; i<=11; i++)
    {
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }

    int n;
    cin>>n;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        cout<<dp[a]<<'\n';   
    }
}