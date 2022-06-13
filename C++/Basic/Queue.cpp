#include <iostream>
#define Queue_size 5
using namespace std;
int queue[Queue_size];
int front=0,rear=0;

int isqempty()
{
    return (front==rear) ? 1:0;
}

int isqfull()
{
    return ((rear+1)%Queue_size) == front ? 1:0;
}

void enque(int n)
{
    if(isqfull()==1) return;
    else
    {
        rear=rear+1;
        rear=rear%Queue_size;
        queue[rear]=n;
    }
}

int deque()
{
    if(isqempty()==1) return 0;
    else
    {
        front=front+1;
        front=front%Queue_size;
        return queue[front];
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        enque(a);
    }
    while(!isqempty())
    {
        cout<<deque()<<" ";
    }
}