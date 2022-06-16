#include <iostream>
using namespace std;
#define lastIdx 7

int arr[lastIdx+1] = {0,6,3,5,7,10,1,2};

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

    if(leftidx<=last && arr[leftidx]>arr[cur])
    {
        biggest = leftidx;
    }
    if(rightidx<=last && arr[rightidx]>arr[biggest])
    {
        biggest = rightidx;
    }
    if(biggest==cur) return;
    else //cur idx가 자기자리로 가도록 biggest 와 자리 교체
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
    int cur = last +1;
    int parent = cur/2;
    arr[cur] = v;

    while(1)
    {
        if(arr[parent]>arr[cur])
        {
            return;
        }
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
    arr[1]= arr[last];
    findlocation(1,last-1);
    return ret;
}

int main()
{
    int k;
    cout<<arr[1]<<endl;
    heapify(7);
    cout<<arr[1]<<endl;
    addToHeap(30,7);
    cout<<arr[1]<<endl;
    addToHeap(40,8);
    cout<<arr[1]<<endl;
    k=removeRoot(8);
    cout<<arr[1]<<endl;
}