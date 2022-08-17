#include<iostream>
using namespace std;
unsigned long long DIV;
unsigned long long A,B,K;

unsigned long long  minval(unsigned long long a, unsigned long long b)
{
    return (a<b)? a:b;
}

unsigned long long pow(unsigned long long b)
{
    if(b==0) return 1;
    unsigned long long tmp = pow(b>>1);//2^(n/2)
    tmp*=tmp;
    tmp%=DIV;

    if(b%2==1){
        tmp<<=1;
        tmp%DIV;
    }
    return tmp;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
    scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        scanf("%llu %llu %llu",&A, &B, &K);
        DIV=A+B;
        unsigned long long p = pow(K);
        printf("#%d %llu\n",test_case,minval((p*A)%DIV,(p*B%DIV)));
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}