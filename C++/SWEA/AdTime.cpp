#include<iostream>
#include<cstring>
using namespace std;

int maxval(int a, int b)
{
 	return (a>b)?a:b;   
}

int L,N;
struct node
{
    int begin;
    int end;
    int per;
    int sum;
};
node nodes[100000];

int find(int ADend)
{
    int left = 0, right = N-1;
    while(left!=right)
    {
        int mid = right-(right-left)/2;

        if(nodes[mid].begin<ADend) left=mid;
        else right= mid-1;
    }
    return left;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        memset(nodes,0,sizeof(nodes));
        scanf("%d %d",&L,&N);

        int tmp = 0;
        for(int i=0; i<N; i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            tmp+=(b-a);

            nodes[i].begin = a;
            nodes[i].end = b;
            nodes[i].per = b-a;
            nodes[i].sum = tmp;
        }
        int res = 0;
        for(int i=0; i<N; i++)
        {
            int ADend = nodes[i].begin+L;
            int last_peak = find(ADend);

            int total = nodes[last_peak].sum-(nodes[i].sum-nodes[i].per);

            if(ADend<nodes[last_peak].end) total -=(nodes[last_peak].end-ADend);

            res = maxval(res,total);
        }
        printf("#%d %d\n",test_case,res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}