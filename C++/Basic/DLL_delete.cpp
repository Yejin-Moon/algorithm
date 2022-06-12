#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node *next;
    struct node *prev;
}node;

node *head = 0;

void add(int a)
{
    node * newnode = (node*)malloc(sizeof(node));
    newnode->i = a;
    newnode->next=newnode->prev=0;

    if(head==0)
    {
        head = newnode;
        return;
    }
    if(head->next==0 && head->i==a)
    {
        return;
    }
    node *last = head;
    while(last->next!=0)
    {
        if(last->i==a)
        {
            if(last==head)
            {
                head=head->next;
                head->prev=0;
            }
            else
            {
                node*del = last;
                del->prev->next=del->next;
                if(del->next!=0)
                {
                    del->next->prev=del->prev;
                }
                free(del);
            }
            head->prev=newnode;
            newnode->next=head;
            head=newnode;
            return;
        }
        last = last->next;
    }
    last->next=newnode;
    newnode->prev=last;
    return;
}

void revprintsll()
{
    node *cur=head;
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
    int n;
    while(1)
    {
        cin>>n;
        if(n==-999) break;
        add(n);
    }
    revprintsll();
}