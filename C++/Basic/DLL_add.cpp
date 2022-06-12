#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
    struct node*prev;
}node;

node*head = 0;

void add(int a)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->i=a;
    newnode->next=newnode->prev=0;

    if(head==0)
    {
        head=newnode;
        return;
    }
    node *last = head;
    while(last->next!=0)
    {
        last=last->next;
    }
    last->next=newnode;
    newnode->prev=last;
    return;
}

void printsll()
{
    node *cur = head;
    while(cur!=0)
    {
        cout<<cur->i<<" ";
        cur=cur->next;
    }
}

void revprintsll()
{
    node*cur = head;
    while(cur->next!=0)
    {
        cur=cur->next;
    }
    while(cur!=0)
    {
        cout<<cur->i<<" ";
        cur=cur->prev;
    }
}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==-999) break;
        add(n);
    }
    int a;
    cin>>a;
    if(a==1) printsll();
    else revprintsll();
}