#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int dp[7];
int mod = 1000000007;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    scanf("%d",&T);
    vector<int> res;
    for(test_case = 1; test_case <= T; ++test_case)
	{
        memset(dp,0,sizeof(dp));
        char s[10002];
        scanf("%s",s);
        int len = strlen(s);
        for(int i=0; i<len; i++)
        {
            if(s[i]=='S')
            {
                dp[0]=(dp[0]+1)%mod;
                dp[3]=(dp[2]+dp[3])%mod;
            }
            else if(s[i]=='A') dp[1] = (dp[0]+dp[1])%mod;
            else if(s[i]=='M') dp[2] = (dp[1]+dp[2])%mod;
            else if(s[i]=='U') dp[4] = (dp[3]+dp[4])%mod;
            else if(s[i]=='N') dp[5] = (dp[4]+dp[5])%mod;
            else if(s[i]=='G') dp[6] = (dp[5]+dp[6])%mod;
        }
        res.push_back(dp[6]);
    }
    int vsize = res.size();
    for(int i=0; i<vsize; i++)
    {
        printf("#%d %d\n",i+1,res[i]);
    }
    return 0;
}