#include<iostream>
#include<queue>
#include<functional>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        printf("#%d ",test_case);
        priority_queue<int,vector<int>> maxheap;
    	priority_queue<int,vector<int>,greater<int>> minheap;
    	int res = 0;
    	int n,a;
        scanf("%d %d",&n,&a);
        for(int i=0; i<n; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            if(a>x) maxheap.push(x);
            else minheap.push(x);
            if(a>y) maxheap.push(y);
            else minheap.push(y);
            while(maxheap.size()>minheap.size())
            {
                minheap.push(a);
                a=maxheap.top();
                maxheap.pop();
            }
            while(minheap.size()>maxheap.size())
            {
                maxheap.push(a);
                a = minheap.top();
                minheap.pop();
            }
        	res=(res+a)%20171109;
        }
        printf("%d\n",res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}