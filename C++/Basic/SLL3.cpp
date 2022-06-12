#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
}node;

node*head = 0;

void add(int a)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->i=a;
    newnode->next=0;

    if(head==0)
    {
        head = newnode;
        return;
    }
    node*last = head;
    if(last->next==0 && last->i==a)
    {
        free(newnode);
        return;
    }
    while(last->next!=0)
    {
        if(last->i==a)
        {
            if(last==head) 
            {
                head = head->next;
                if(head->next==0)
                {
                    head->next=newnode;
                    return;
                }
            }
            node*del = last;
            node*cur = head;
            while(cur->next!=del)
            {
                cur=cur->next;
            }
            cur->next = del->next;
            last=cur;
            free(del);
        }
        last=last->next;
    }
    last->next=newnode;
    return;
}

void printsll()
{
    while(1)
    {
        node*cur = head;
        if(head->next==0) 
        {
            cout<<head->i<<" ";
            break;
        }
        while(cur->next->next!=0)
        {
            cur=cur->next;
        }
        cout<<cur->next->i<<" ";
        cur->next=0;
        free(cur->next);
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
    printsll();
}