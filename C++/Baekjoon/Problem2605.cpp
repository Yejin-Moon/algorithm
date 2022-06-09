#include <iostream>
using namespace std;

typedef struct node
{
    int a;
    struct node *next;
    struct node *prev;
}node;

node*head = 0;
node*cur=0;

void add(int n, int s)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->a = n;
    newnode->next=0;
    newnode->prev=0;

    if(head==0)
    {
        head = newnode;
        cur=head;
        return;
    }
    
    node *last = head;
    while(last->next!=0)
    {
        last = last->next;
    }
    for(int i=0; i<s; i++)
    {
        last=last->prev;
    }
    if(last==0)
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;
    }
    newnode->next = last->next;
    last->next = newnode;
    newnode->prev = last;
    if(newnode->next!=0)
        newnode->next->prev=newnode;
    cur=newnode;
    return;
}

void printdll()
{
    node *tmp = head;

    while(tmp!=0)
    {
        cout<<tmp->a<<' ';
        tmp=tmp->next;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        add(i,a);
    }
    printdll();
}