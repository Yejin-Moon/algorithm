#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
    struct node*prev;
}node;

node*head= 0;

void add(int n)
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

void pop()
{
    if(head==0) return;

    node*cur = head;
    while(cur->next!=0)
    {
        cur=cur->next;
    }
    if(cur==head)
    {
        head=head->next;
        free(cur);
        return;
    }
    cur->prev->next=0;
    free(cur);
    return;
}

void deque()
{
    if(head==0) return;
    node*cur= head;
    head=head->next;
    free(cur);
    return;
}

void printqt()
{
    if(head==0)
    {
        cout<<"Nothing";
        return;
    }
    node*cur = head;
    while(cur!=0)
    {
        cout<<cur->i<<" ";
        cur=cur->next;
    }
}

int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if(a==-1||a==-3)
        {
            add(b);
        }
        else if(a==-2&&b==-2) pop();
        else if(a==-4&&b==-4) deque();
        else break;
    }
    printqt();
}