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
    cout<<arr[1]<<endl; //6(힙으로 만들기 전 루트)
    heapify(7);
    cout<<arr[1]<<endl; //10(Max heap이므로 가장 큰 수가 루트)
    addToHeap(30,7);
    cout<<arr[1]<<endl; //30(10보다 큰 30이 추가되었으므로)
    addToHeap(40,8);
    cout<<arr[1]<<endl; //40(30보다 큰 40이 추가되었으므로)
    k=removeRoot(8);
    cout<<arr[1]<<endl; //30(루트에 있던 40이 제거됨)
}