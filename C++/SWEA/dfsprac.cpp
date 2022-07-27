#include <iostream>
using namespace std;
int idx=0;

struct node
{
    int data;
    struct node*next;
    struct node*prev;
}nodes[100];

node* getNode() {
	nodes[idx].data = idx;
	nodes[idx].next = 0;
    nodes[idx].prev = 0;
	return &nodes[idx++];
}

void addnode(int par, int chi)
{
    bool flag=false;
    for(int i=0; i<=idx; i++)
    {
        node*cur = &nodes[i];
        while(cur->next!=0)
        {
            cur=cur->next;
            if(cur->data==par || cur->data==chi)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            node*newnode = (node*)malloc(sizeof(node));
            newnode->prev=newnode->next=0;
            if(cur->data==par)
            {
                while(cur->next!=0) cur=cur->next;
                newnode->data=chi;
                if(cur->next!=0)
                {
                    cur->next->prev=newnode;
                }
                newnode->prev=cur;
                newnode->next=cur->next;
                cur->next=newnode;
            }
            else if(cur->data==chi)
            {
                if(cur->prev!=0)
                {
                    cur->prev->next=newnode;
                }
                newnode->prev=cur->prev;
                newnode->next=cur;
                cur->prev=newnode;
            }
            flag=false;
        }
    }
    node*head = getNode();
    node*newnode = (node*)malloc(sizeof(node));
    node*childnode = (node*)malloc(sizeof(node));
    head->next=newnode;
    newnode->prev=head;
    newnode->data=par;
    newnode->next=childnode;
    childnode->data=chi;
    childnode->prev=newnode;
    childnode->next=0;
}

int main()
{
    addnode(1,2);
    addnode(1,3);
    //cout<<nodes[0].data<<' ';
    cout<<nodes[0].next->data<<' ';
    cout<<nodes[0].next->next->data<<' ';
    cout<<nodes[0].next->next->next->data<<' ';
}