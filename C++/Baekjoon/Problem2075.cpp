#include <iostream>
using namespace std;

int arr[1510*1510];

void myswap(int a, int b)
{
    int tmp = arr[b];
    arr[b]=arr[a];
    arr[a]=tmp;
}

void findlocation(int cur, int last)
{
    int left = cur*2;
    int right = left+1;
    int biggest = cur;

    if(left<=last && arr[left]>arr[cur])
    {
        biggest = left;
    }
    if(right<=last && arr[right]>arr[biggest])
    {
        biggest = right;
    }
    if(biggest==cur) return;
    else
    {
        myswap(cur, biggest);
        findlocation(biggest, last);
    }
}

void heapify(int last)
{
    int cur = last/2;
    while(cur>=1)
    {
        findlocation(cur,last);
        cur--;
    }
}

void addToHeap(int v, int last)
{
    int cur = last+1;
    int parent = cur/2;
    arr[cur]=v;

    if(last==1 && v<0) 
    {
        arr[1]=v;
        return;
    }
    while(1)
    {
        if(arr[parent]>arr[cur])
        {
            return;
        }
        else
        {
            myswap(parent,cur);
            cur=parent;
            parent=cur/2;
            if(parent<1) return;
        }
    }
}

int removeRoot(int last)
{
    int ret = arr[1];
    arr[1] = arr[last];
    findlocation(1,last-1);
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n*n; i++)
    {
        int a;
        scanf("%d",&a);
        addToHeap(a,i);
    }
    heapify(n*n);
    for(int i=0; i<n; i++)
    {
        int k = removeRoot(n*n-i);
        if(i==n-1) printf("%d",k);
    }
}