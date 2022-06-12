#include <iostream>
using namespace std;

typedef struct node
{
    int a;
    struct node *next;
}node;

typedef struct node2
{
    int a;
    struct node2 *next;
}node2;

node*head = 0;
node2*head2= 0;

void add(int i)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->a = i;
    newnode->next = 0;

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
    last->next = newnode;
    return;
}

void add2(int a)
{
    node2 *newnode = (node2*)malloc(sizeof(node2));
    newnode->a = a;
    newnode->next=0;

    if(head2==0)
    {
        head2 = newnode;
        return;
    }

    node2 *last = head2;
    while(last->next!=0)
    {
        last = last->next;
    }
    last->next=newnode;
    return;
}

void printSLL()
{
    node2*cur = head2;
    while(cur!=0)
    {
        cout<<cur->a<<endl;
        cur=cur->next;
    }
}

int comp()
{
    int cnt=0;
    node* cur1 = head;

    while(cur1!=0)
    {
        node2* cur2 = head2;
        while(cur2!=0)
        {
            if(cur1->a==cur2->a) 
            {
                cnt++;
                break;
            }
            cur2=cur2->next;
        }
        cur1= cur1->next;
    }
    return cnt;
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

    int n2;
    cin>>n2;

    for(int i=0; i<n2; i++)
    {
        int b;
        cin>>b;
        add2(b);
    }
    cout<<comp();
}