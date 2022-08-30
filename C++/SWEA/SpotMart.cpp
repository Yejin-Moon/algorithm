#include <iostream>
#include <algorithm>
#include <cstring>
#include <functional>
using namespace std;

int arr[3002], arr2[102];
int dp[3002][102][102][2];
int N,M;

int maxval(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int fun(int a, int i, int j, int pick)
{
    if(dp[a][i][j][pick]!=-1) return dp[a][i][j][pick];
    int val1 = 0, val2 = 0, val3 = 0, val4 = 0;
    if(pick)
    {
        if(a<N) val1 = fun(a+1,i,j,0);
        if(i+j<M) val2 = fun(a,i,j+1,0);
    }
    else
    {
        if(a<N)
        {
            val1 = fun(a+1,i,j,1)+arr[a];
            val2 = fun(a+1,i,j,0);
        }
        if(i+j<M)
        {
            val3 = fun(a,i+1,j,1)+arr2[i];
            val4 = fun(a,i+1,j,0);
        }
    }
    return dp[a][i][j][pick] = maxval(val1,maxval(val2,maxval(val3,val4)));
}

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        memset(dp,-1,sizeof(dp));
        memset(arr2,0,sizeof(arr2));
        scanf("%d",&N);
        for(int i=0; i<N; i++) scanf("%d",&arr[i]);
        scanf("%d",&M);
        for(int i=0; i<M; i++) scanf("%d",&arr2[i]);
        sort(arr2,arr2+102,greater<int>());
        printf("#%d %d\n",test_case,fun(0,0,0,0));
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}