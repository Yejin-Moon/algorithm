#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
    struct node*prev;
}node;

node*head=0;

void enque(int n)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->i=n;
    newnode->next=newnode->prev=0;

    if(head==0)
    {
        head=newnode;
        return;
    }
    node*last = head;
    while(last->next!=0)
    {
        last=last->next;
    }
    last->next=newnode;
    newnode->prev=last;
    return;
}

void deque()
{
    node*cur = head;
    if(head==0) return;
    head=head->next;
    free(cur);
    return;
}

void printque()
{
    node*cur=head;
    if(head==0)
    {
        cout<<"Nothing";
        return;
    }
    while(cur!=0)
    {
        cout<<cur->i<<" ";
        cur=cur->next;
    }
}

int main()
{
    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==-3) enque(b);
        else if(a==-4&&b==-4) deque();
        else break;
    }
    printque();
}