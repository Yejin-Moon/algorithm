#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        long long N,res;
        scanf("%lld",&N);
        long long K = sqrt(2*N);
        if(K*(K+1)==2*N) res=K;
        else res=-1;
        printf("#%d %lld\n",test_case,res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}