#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        printf("#%d ",test_case);
        priority_queue<int> pq;
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
         	int a;
            scanf("%d",&a);
            if(a==1)
            {
                int b;
                scanf("%d",&b);
                pq.push(b);
            }
            else
            {
                if(pq.empty())
                {
                    printf("-1 ");
                    continue;
                }
                printf("%d ",pq.top());
                pq.pop();
            }
        }
        printf("\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}