#include <iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
    struct node*prev;
}node;

node*head = 0;
node*cur=0;
int cnt=0;

void push(int n)
{
    node* newnode= (node*)malloc(sizeof(node));
    newnode->i=n;
    newnode->next=newnode->prev=0;

    if(head==0)
    {
        head=newnode;
        cur=head;
        cnt++;
        return;
    }
    node*last = cur;
    last->next=newnode;
    newnode->prev=last;
    cur=newnode;
    cnt++;
    return;
}

void pop()
{
    if(head==0)
    {
        cout<<"-1"<<'\n';
        return;
    }
    node*cur=head;
    printf("%d\n",cur->i);
    head=head->next;
    cnt--;
    free(cur);
}

void size()
{
    cout<<cnt<<'\n';
}

void empty()
{
    if(head==0) printf("1\n");
    else printf("0\n");
}

void front()
{
    if(head==0)
    {
        cout<<"-1"<<'\n';
        return;
    }
    printf("%d\n",head->i);
}

void back()
{
    if(head==0)
    {
        printf("-1\n");
        return;
    }
    printf("%d\n",cur->i);
}

int main()
{
    int n;
    scanf("%d",&n);
    char str[10];
    for(int i=0; i<n; i++)
    {
        scanf("%s",str);
        if(str[0]=='p')
        {
            if(str[1]=='u')
            {
                int a;
                scanf("%d",&a);
                push(a);
            }
            else pop();
        }
        else if(str[0]=='s') printf("%d\n",cnt);
        else if(str[0]=='e') empty();
        else if(str[0]=='f') front();
        else back();
    }
}