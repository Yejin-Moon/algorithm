#include <iostream>
#include <string>
using namespace std;

typedef struct node
{
    char C;
    struct node *next;
    struct node *prev;
}node;

node*head = 0;
node*cur = 0;
bool flag = false;

void add(char c)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->C=c;
    newnode->next=0;
    newnode->prev=0;

    if(head==0)
    {
        head = newnode;
        cur=head;
        return;
    }
    // if(flag)
    // {
    //     newnode->next=head;
    //     head->prev=newnode;
    //     head = newnode;
    //     cur=head;
    //     flag=false;
    //     return;
    // }
    if(cur==head)
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        cur=head;
        flag=false;
        return;
    }
    node *last = cur;
    newnode->next = last->next;
    last->next=newnode;
    newnode->prev = last;
    if(newnode->next!=0)
        newnode->next->prev = newnode;
    cur=newnode;
    return;
}

void left()
{
    if(cur==head) flag=true;
    if(cur->prev) cur=cur->prev;
    
        // if(cur==0)
        // {
        //     // node*newnode = (node*)malloc(sizeof(node));
        //     // newnode->C = '!';
        //     // newnode->prev=0;
        //     // newnode->next=cur;
        //     // cur=newnode;
        //     flag=true;
        // }
    
}

void right()
{
    if(cur==head) flag=true;
    if(cur->next) cur=cur->next;
    
        // if(cur==0)
        // {
        //     node*newnode = (node*)malloc(sizeof(node));
        //     newnode->C = '?';
        //     newnode->prev=cur->prev;
        //     newnode->next=0;
        //     cur=newnode;
        // }
    
}

void del()
{
    node*del = cur;
    if(del==0) return;
    if(del==head)
    {
        head=head->next;
        if(head!=0)
        {
            head->prev=0;
        }
        cur=head;
        //free(del);
        return;
    }
    if(del->next==0)
    {
        del->prev->next = 0;
        cur=del->prev;
        return;
    }
    else
    {
        del->prev->next = del->next;
        if(del->next!=0)
        {
            del->next->prev = del->prev;
            cur=del->prev;
        }
        //free(del);
        return;
    }
}

void printDLL()
{
    node*temp = head;
    while(temp!=0)
    {
        printf("%c",temp->C);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        head=0;
        string s;
        cin>>s;
        int a = s.length();
        for(int i=0; i<a; i++)
        {
            if(s[i]=='<') 
            {
                if(cur==0) continue;
                left();
            }
            else if(s[i]=='>') 
            {
                if(cur==0) continue;
                right();
            }
            else if(s[i]=='-') del();
            else add(s[i]);
        }
        printDLL();
    }
}