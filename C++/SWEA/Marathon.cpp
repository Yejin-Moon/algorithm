#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int dp[501][501];
vector<pair<int,int>> v;
int N,K;

int absval(int x)
{
    if(x<0) return -x;
    else return x;
}

int minval(int a, int b)
{
    if(a<b) return a;
    else return b;
}

int dis(int a, int b)
{
    return absval(v[a].first-v[b].first)+abs(v[a].second-v[b].second);
}

int dpsol(int cur, int k)
{
    if(cur==N-1) return 0;
    if(dp[cur][k]!=-1) return dp[cur][k];
    dp[cur][k]=100000000;
    for(int i=0; i<=K; i++)
    {
        int next = cur+i+1;
        if(next>N-1) continue;
        if(k-i<0) continue;

        dp[cur][k]=minval(dp[cur][k],dpsol(next,k-i)+dis(cur,next));
    }
    return dp[cur][k];
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int x,y;
        scanf("%d %d",&N,&K);
        v.clear();
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<N; i++)
        {
            scanf("%d %d",&x,&y);
            v.push_back(make_pair(x,y));
        }
        printf("#%d %d\n",test_case,dpsol(0,K));
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}