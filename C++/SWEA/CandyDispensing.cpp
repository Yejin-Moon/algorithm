#include<iostream>
using namespace std;

long long maxval(long long a, long long b)
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
        long long n,m;
        scanf("%lld %lld",&n,&m);
        long long arr[101];
        for(int i=0; i<n; i++) scanf("%lld",&arr[i]);
        
        long long low = 0, high = 1e18, res = 0;
        while(low<=high)
        {
            long long mid = (low+high)/2;
            long long sum=0;
            
            if(mid==0) sum=1e18;
            else
            {
                for(int i=0; i<n; i++) 
                {
                    sum+=arr[i]/mid;
                }
            }
            if(sum>=m)
            {
                res=maxval(res,mid);
                low=mid+1;
            }
            else high = mid-1;
        }
        printf("#%d %lld\n",test_case,res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}