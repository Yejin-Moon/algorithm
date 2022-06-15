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

int main()
{
    cout<<arr[1]<<endl;
    heapify(7);
    cout<<arr[1]<<endl;
}