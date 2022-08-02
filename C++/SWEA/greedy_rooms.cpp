#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int n,cnt=0;
        int rooms[201]={0};
        scanf("%d",&n);
        
        while(n--)
        {
         	int a,b;
            scanf("%d %d",&a,&b);
            if(a>b) swap(a,b);
            if(a%2==1) a++;
            a/=2;
            if(b%2==1) b++;
            b/=2;
            
            for(int i=a; i<=b; i++) rooms[i]++;
        }
        for(int i=1; i<200; i++)
        {
            if(cnt<rooms[i]) cnt=rooms[i];
        }
        printf("#%d %d\n",test_case,cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}