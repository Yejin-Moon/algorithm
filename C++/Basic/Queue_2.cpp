#include <iostream>
#define queue_size 7
using namespace std;
int queue[queue_size];
int front=0, rear = 0;

int isempty()
{
    return (front==rear)?1:0;
}

int isfull()
{
    return ((rear+1)%queue_size==front)?1:0;
}

void enque(int n)
{
    if(isfull()==1) return;
    rear=rear+1;
    rear=rear%queue_size;
    queue[rear]=n;
}

int deque()
{
    if(isempty()==1) return -1;
    front=front+1;
    front=front%queue_size;
    return queue[front];
}

int main()
{
    int sum=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(!isfull()&&a==100)
        {
            while(!isempty())
                sum+=deque();
            enque(sum);
        }
        else enque(a);
    }

    while(!isempty())
    {
        cout<<deque()<<" ";
    }
}