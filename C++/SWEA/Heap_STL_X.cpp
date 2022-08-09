#include<iostream>
#include<cstring>
using namespace std;

int arr[100005];

void myswap(int a, int b)
{
    int tmp = arr[b];
    arr[b]=arr[a];
    arr[a]=tmp;
}

void findlocation(int cur, int last)
{
    int leftidx = cur*2;
    int rightidx = leftidx+1;
    int biggest = cur;
    
    if(leftidx<=last && arr[leftidx]>arr[cur]) biggest = leftidx;
    if(rightidx<=last && arr[rightidx]>arr[biggest]) biggest = rightidx;
    if(biggest==cur) return;
    else
    {
        myswap(cur,biggest);
        findlocation(biggest,last);
    }
}

void heapify(int last)
{
    int cur_idx = last/2;
    while(cur_idx>=1)
    {
        findlocation(cur_idx,last);
        cur_idx--;
    }
}

void addToHeap(int v, int last)
{
    int cur = last+1;
    int parent = cur/2;
    arr[cur] = v;
    while(1)
    {
     	if(arr[parent]>arr[cur]) return;
        else
        {
         	myswap(parent, cur);
            cur=parent;
            parent=cur/2;
            if(parent<1) return;
        }
    }
}

int removeRoot(int last)
{
    int ret = arr[1];
    arr[1]=arr[last];
    findlocation(1,last-1);
    return ret;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
    scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        printf("#%d ",test_case);
        memset(arr,0,sizeof(arr));
        int n;
        scanf("%d",&n);
        int last=1;
        for(int i=0; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            if(a==1)
            {
             	int b;
                scanf("%d",&b);
                addToHeap(b,last);
                last++;
            }
            else
            {
                if(last==1) 
                {
                    printf("-1 ");
                    continue;
                }
                printf("%d ",removeRoot(last));
                last--;
            }
        }
        printf("\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}