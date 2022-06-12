#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
    struct node*prev;
}node;

node *head =0;

void add(int a)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->i=a;
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

void deletedll(int n)
{
    node*cur=head;
    while(1)
    {
        if(cur==0) return;
        if(cur->i!=n) cur=cur->next;
        else
        {
            node*del = cur;
            if(del==head)
            {
                if(head->next==0)
                {
                    head=0;
                    cur=cur->next;
                    continue;
                }
                head=head->next;
                if(head->next!=0)
                {
                    head->prev=0;
                }
                //free(del);
                cur=cur->next;
            }
            else
            {
                del->prev->next=del->next;
                if(del->next!=0)
                {
                    del->next->prev=del->prev;
                }
                //free(del);
                cur=cur->next;
            }
        }
    }   
}

void printdll()
{
    node*cur = head;
    if(head==0) cout<<"-999";
    while(cur!=0)
    {
        cout<<cur->i<<" ";
        cur=cur->next;
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
        add(a);
    }
    int k;
    cin>>k;
    deletedll(k);
    printdll();
}