#include <iostream>
using namespace std;
#define sz 1030
int queue[sz];
int front=0, rear =0;

void enque(int n)
{
    if((rear+1)==front) return;
    rear=rear+1;
    rear=rear%sz;
    queue[rear]=n;
}

int deque()
{
    if(front==rear) return -1;
    front =front+1;
    front = front %sz;
    return queue[front];
}

void change()
{
    int a = deque();
    enque(a);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        enque(i);
    }
    while(front!=rear)
    {
        int a = deque();
        if(a==-1) break;
        cout<<a<<" ";
        change();
    }
}