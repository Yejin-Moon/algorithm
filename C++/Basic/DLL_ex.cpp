#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
    struct node*prev;
}node;

node*head =0;

void add(int a)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->i=a;
    newnode->next=newnode->prev=0;

    if(head==0)
    {
        head = newnode;
        return;
    }
    node*cur = head;
    while(cur->next!=0)
    {
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->prev=cur;
    return;
}

void check(int n)
{
    bool flag=false;
    node*cur=head;
    while(cur!=0)
    {
        if(cur->i==n)
        {
            flag=true;
            if(cur==head)
            {
                cout<<"-999 ";
                if(cur->next!=0)
                {
                    if(cur->next->next!=0) cout<<cur->next->next->i;
                    else cout<<"-999";
                }
                else cout<<"-999";
                return;
            }
            if(cur->prev->prev!=0) cout<<cur->prev->prev->i<<" ";
            else cout<<"-999 ";
            if(cur->next==0) 
            {
                cout<<"-999";
                return;
            }
            if(cur->next->next!=0) cout<<cur->next->next->i<<" ";
            else cout<<"-999";
        }
        cur=cur->next;
    }
    if(!flag) cout<<"-999";
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
    check(k);
}