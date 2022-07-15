#include <iostream>
#include <string>
using namespace std;

typedef struct node
{
    char i;
    struct node*next;
    struct node*prev;
}node;
node*head = 0;
node*cur = 0;
bool flag=false;

void add(char c)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->i=c;
    newnode->next=newnode->prev=0;

    if(flag)
    {
        head->prev=newnode;
        newnode->next=head;
        head=head->prev;
        cur=head;
        flag=false;
        return;
    }
    if(head==0)
    {
        head=newnode;
        cur=newnode;
        return;
    }

    if(cur->next!=0) cur->next->prev=newnode;
    newnode->next=cur->next;
    newnode->prev=cur;
    cur->next=newnode;
    cur=newnode;
}

void Left()
{
    if(cur==head) 
    {
        flag=true;
        return;
    }
    cur=cur->prev;
}

void Right()
{
    if(cur->next==0) return;
    cur=cur->next;
}

void delnode()
{
    node*del = cur;
    if(flag) return;
    if(del==0) return;
    if(del==head)
    {
        head=head->next;
        head->prev=0;
        free(del);
        cur=head;
        return;
    }
    cur=cur->prev;
    del->prev=del->next;
    if(del->next!=0) del->next->prev=del->prev;
    free(del);
}

void printstring()
{
    node*tmp=head;
    while(tmp!=0)
    {
        cout<<tmp->i;
        tmp=tmp->next;
    }
}

int main()
{
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        add(s[i]);
    }
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char c;
        cin>>c;
        if(c=='L') Left();
        else if(c=='D') Right();
        else if(c=='B') delnode();
        else
        {
            char d;
            cin>>d;
            add(d);
        }
    }
    printstring();
}