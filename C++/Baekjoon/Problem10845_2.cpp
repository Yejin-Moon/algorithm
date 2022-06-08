#include <iostream>
using namespace std;

char str[7];

typedef struct node
{
    int X;
    struct node *next;
}node;

node *head = 0;

void push(int x)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->X = x;
    newnode->next = 0;

    if(head==0)
    {
        head=newnode;
        return;
    }
    else
    {
        node *last = head;
        while(last->next!=0)
        {
            last=last->next;
        }
        last->next = newnode;
    }
}

void pop()
{
    node *cur=head;
    if(head==0)
    {
        cout<<"-1"<<'\n';
        return;
    }
    cout<<cur->X<<'\n';
    head=cur->next;
    free(cur);
}

void size()
{
    node *cur = head;
    if(head==0)
    {
        cout<<"0"<<'\n';
        return;
    }
    int cnt=1;
    while(cur->next!=0)
    {
        cnt++;
        cur=cur->next;
    }
    cout<<cnt<<'\n';
}

void empty()
{
    if(head==0) cout<<"1"<<'\n';
    else cout<<"0"<<'\n';
}

void front()
{
    node*cur = head;
    if(head==0)
    {
        cout<<"-1"<<'\n';
        return;
    }
    cout<<cur->X<<'\n';
}

void back()
{
    node*cur = head;
    if(head==0)
    {
        cout<<"-1"<<'\n';
        return;
    }
    while(cur->next!=0)
    {
        cur=cur->next;
    }
    cout<<cur->X<<'\n';
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%s",str);
        if(str[0]=='p' && str[1]=='u')
        {
            int a;
            cin>>a;
            push(a);
        }
        else if(str[0]=='p') pop();
        else if(str[0]=='s') size();
        else if(str[0]=='e') empty();
        else if(str[0]=='f') front();
        else back();
    }
}