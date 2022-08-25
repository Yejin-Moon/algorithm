#include<iostream>
#include<string>
#include<cstring>
using namespace std;
long long DP[10001][16];

int main(int argc, char** argv)
{
	int test_case,T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        char str[10001];
        scanf("%s",&str);
        int len = strlen(str);
        memset(DP,0,sizeof(DP));
        
        for(int i=0; i<len; i++)
        {
            int first = 1<<(str[i]-'A');
            for(int j=1; j<16; j++)
            {
                if(i==0)
                {
                 	if((j&first)!=0 && (j&1) !=0) DP[i][j]=1;   
                }
                else
                {
                    if(DP[i-1][j]!=0)
                    {
                        for(int k=1; k<16; k++)
                        {
                            if((k&j)!=0 &&(k&first)!=0)
                            {
                                DP[i][k]+=DP[i-1][j];
                                DP[i][k] %= 1000000007;
                            }
                        }
                    }
                }
            }
        }
        long long res = 0;
        for(int i=1; i<16; i++)
        {
            res+=DP[len-1][i];
            res%=1000000007;
        }
        printf("#%d %lld\n",test_case,res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}