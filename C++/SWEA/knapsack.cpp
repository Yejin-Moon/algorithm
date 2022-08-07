#include<iostream>
using namespace std;

int maxval(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int v[101][1001];
        int w[101];
        int c[101];
        int N,W,ans=0;
        scanf("%d %d",&N,&W);

        for(int i=1; i<=N; i++)
        {
            scanf("%d %d",&w[i],&c[i]);
        }

        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=W; j++)
            {
                if(w[i]>j) v[i][j]=v[i-1][j];
                else v[i][j] = maxval(c[i] + v[i - 1][j - w[i]], v[i - 1][j]);
            }
        }
        printf("#%d %d\n",test_case,v[N][W]);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}