#include <iostream>
using namespace std;

char str[100001];
int cnt=0;
typedef struct node
{
    char C;
    struct node *next;
    struct node *prev;
}node;

node *head = 0;
node *cur = 0;

void add(char c)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->C = c;
    newnode->next=0;
    newnode->prev=0;

    if(head==0)
    {
        head=newnode;
        cur=head;
        return;
    }
    else
    {
        node *last = cur;
        last ->next = newnode;
        newnode->prev = last;
        cur=newnode;
        return;
    }
}

void Left()
{
    if(cur->prev==0) return;
    cur=cur->prev;
    
}

void Right()
{
    if(cur->next==0) return;
    // if(cur==0) 
    // {
    //     cur=head;
    //     return;
    // }
     cur=cur->next;
}

void del()
{
    node* del = cur;
    if(del==0) 
    {
        return;
    }
    if(del==head)
    {
        head=head->next;
        cur=0;
        if(head!=0)
        {
            head->prev=0;
            cur=head->prev;
        }
        free(del);
    }
    else
    {
        cur=del->prev;
        del->prev->next = del->next;
        if(del->next!=0 && del->prev==0)
        {
            head= del->next;
            cur=head;
        }
        else if(del->next!=0)
        {
            del->next->prev = del->prev;
        }
        free(del);
    }
}

void push(char c)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->C = c;
    newnode->next=0;
    newnode->prev=0;

    if(cur==0&&cur->next!=0)
    {
        newnode->next= head;
        head->prev=newnode;
        head=newnode;
        cur=head;
        return;
    }
    if(cur==0)
    {
        head=newnode;
        cur=head;
        return;
    }

    if(cur==head)
    {
        newnode->next = head->next;
        head->next=newnode;
        newnode->prev=head;
        //head=newnode;
        cur=newnode;
        return;
    }
    else
    {
        // if(cur==head->prev)
        // {
        //     newnode->next=head;
        //     head->prev = newnode;
        //     newnode->prev = 0;
        //     head=newnode;
        //     cur=head;
        //     return;
        // }
        node *last = cur;
        newnode->next = last->next;
        last ->next = newnode;
        newnode->prev = last;
        if(newnode->next!=0)
            newnode->next->prev = newnode;
        cur=newnode;
        return;
    }
}

void printDll()
{
    node *tmp = head;
    while(tmp!=0)
    {
        cout<<tmp->C;
        tmp=tmp->next;
    }
}

int main()
{
    //ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    bool flag = false;
    scanf("%s",str);
    for(int i=0; str[i]!=0; i++)
    {
        if(str[i]==0) break;
        add(str[i]);
    }
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char cmd;
        cin>>cmd;
        if(cmd == 'P')
        {
            char ch;
            cin>>ch;
            push(ch);
        }
        else if(cmd == 'L') Left();
        else if(cmd == 'D') Right();
        else del();
    }
    printDll();
}