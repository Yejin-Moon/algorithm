#include <iostream>
using namespace std;

int w[200000], s[200000];
int N,K;

bool life(int val)
{
    int pivot = -1;
    for(int i=0; i<K; i++)
    {
        for(int j=0; j<s[i]; j++)
        {
            pivot++;
            if(pivot == N) return false;
            if(w[pivot]>val)
            {
                i--;
                break;
            }
        }
    }
    return true;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        scanf("%d %d",&N,&K);
        for(int i=0; i<N; i++) scanf("%d",&w[i]);
        for(int i=0; i<K; i++) scanf("%d",&s[i]);
        
        int left = 0, right = 200000;
        while(left<right)
        {
            int mid = (left+right) /2;
            if(life(mid)) right = mid;
            else left = mid+1;
        }
        printf("#%d %d\n",test_case,right);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}