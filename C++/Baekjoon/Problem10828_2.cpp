#include <iostream>
using namespace std;

char str[7];

typedef struct node
{
    int X;
    struct node *next;
}node;

node *head = NULL;
void push(int x)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->X = x;
    newnode->next = 0;

    if(head == 0)
    {
        head = newnode;
        return;
    }
    else
    {
        node *last = 0;
        last = head;
        while(last->next!=0)
        {
            last = last->next;
        }
        last->next = newnode;
        return;
    }
}

void pop()
{
    node *last = 0;
    last = head;
    if(head==0)
    {
        cout<<"-1"<<'\n';
        return;
    }
    if(last->next==0)
    {
        cout<<last->X<<'\n';
        free(last);
        head=0;
        return;
    }
    while(last->next->next!=0)
    {
        last=last->next;
    }
    
    cout<<last->next->X<<'\n';
    free(last->next->next);
    last->next=0;
    return;
}

void size()
{
    node *cur=head;
    int cnt=1;
    if(head==0)
    {
        cout<<"0"<<'\n';
        return;
    }
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

void top()
{
    node *last = 0;
    last = head;
    if(head==0)
    {
        cout<<"-1"<<'\n';
        return;
    }
    while(last->next!=0)
    {
        last=last->next;
    }
    cout<<last->X<<'\n';
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        scanf("%s",str);
        if(str[0]=='p'&&str[1]=='u')
        {
            int a;
            cin>>a;
            push(a);
        }
        else if(str[0]=='p') pop();
        else if(str[0]=='s') size();
        else if(str[0]=='e') empty();
        else top();
    }
}