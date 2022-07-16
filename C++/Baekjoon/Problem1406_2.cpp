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

void add(char c)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->i=c;
    newnode->next=newnode->prev=0;

    if(head->next==0)
    {
        head->next=newnode;
        newnode->prev=head;
        cur=newnode;
    }
    else if(cur->next==0)
    {
        newnode->prev=cur;
        cur->next=newnode;
        cur=newnode;
    }
    else if(cur->next!=0)
    {
        cur->next->prev=newnode;
        newnode->next=cur->next;
        newnode->prev=cur;
        cur->next=newnode;
        cur=newnode;
    }
}

void Left()
{
    if(cur->prev!=0) cur=cur->prev;
}

void Right()
{
    if(cur->next!=0) cur=cur->next;
}

void delnode()
{
    node*del = cur;
    
    if(del!=head)
    {
        del->prev->next=del->next;
        if(del->next!=0) 
        {
            del->next->prev=del->prev;
            free(del);
        }
        else cur->next=0;
        cur=cur->prev;
    }
}

void printstring()
{
    node*tmp=head->next;
    while(tmp!=0)
    {
        cout<<tmp->i;
        tmp=tmp->next;
    }
}

int main()
{
    head = (node*)malloc(sizeof(node));
    head->next=head->prev=0;
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