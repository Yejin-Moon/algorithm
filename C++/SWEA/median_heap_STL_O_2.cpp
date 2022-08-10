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
        priority_queue<int,vector<int>> maxheap;
        priority_queue<int,vector<int>,greater<int>> minheap;
        
        int n,a;
        int res=0;
        scanf("%d %d",&n,&a);
        maxheap.push(a);
        for(int i=0; i<n; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            minheap.push(x);
            if(maxheap.top()>minheap.top())
            {
                int mxt = maxheap.top();
                int mnt = minheap.top();
                maxheap.pop();
                minheap.pop();
                maxheap.push(mnt);
                minheap.push(mxt);
            }
            maxheap.push(y);
            if(maxheap.top()>minheap.top())
            {
                int mxt = maxheap.top();
                int mnt = minheap.top();
                maxheap.pop();
                minheap.pop();
                maxheap.push(mnt);
                minheap.push(mxt);
            }
            res=(res+maxheap.top())%20171109;
        }
        printf("#%d %d\n",test_case,res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}