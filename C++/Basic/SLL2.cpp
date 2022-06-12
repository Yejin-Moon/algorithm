#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node *next;
    struct node *prev;
}node;

node*head = 0;
node*cur=0;

void add(int a)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->i=a;
    newnode->next=0;
    newnode->prev=0;

    if(head==0)
    {
        head=newnode;
        cur=head;
        return;
    }
    node*last = head;
    while(last->next!=0)
    {
        if(last->i==a) 
        {
            free(newnode);
            return;
        }
        last=last->next;
    }
    if(last->i==a)
    {
        free(newnode);
        return;
    }
    last->next=newnode;
    newnode->prev=last;
    cur=newnode;
    return;
}

int revprint()
{
    node*tmp = cur;
    while(tmp!=0)
    {
        cout<<tmp->i<<" ";
        tmp=tmp->prev;
    }
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n<0) break;
        add(n);
    }
    revprint();
}