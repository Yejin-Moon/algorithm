#include<iostream>
#include<queue>
using namespace std;
int arr[10];

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N,K;
        scanf("%d",&N);
    	for(int i=0; i<N; i++) scanf("%d",&arr[i]);
    	scanf("%d",&K);

    	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    	pq.push(make_pair(0,K));
    	while(pq.top().second)
    	{
        	pair<int,int> tmp = pq.top();
        	pq.pop();
        	pq.push(make_pair(tmp.first+tmp.second,0));
        	for(int i=0; i<N; i++)
        	{
            	pq.push(make_pair(tmp.first+tmp.second % arr[i],tmp.second/arr[i]));
        	}
    	}
        printf("#%d %d\n",test_case,pq.top().first);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}