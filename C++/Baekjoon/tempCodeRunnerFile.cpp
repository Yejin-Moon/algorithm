#include <iostream>
#include <string>
using namespace std;

typedef struct node
{
    char C;
    struct node *next;
    struct node *prev;
}node;

// node*head = 0;
// node*cur = 0;
bool flag = false;

// void add(char c)
// {
//     node *newnode = (node*)malloc(sizeof(node));
//     newnode->C=c;
//     newnode->next=0;
//     newnode->prev=0;

//     if(head==0)
//     {
//         head = newnode;
//         cur=head;
//         return;
//     }

//     if(cur==head&&flag)
//     {
//         newnode->next=head;
//         head->prev=newnode;
//         head=newnode;
//         cur=head;
//         flag=false;
//         return;
//     }
//     node *last = cur;
//     newnode->next = last->next;
//     last->next=newnode;
//     newnode->prev = last;
//     if(newnode->next!=0)
//         newnode->next->prev = newnode;
//     cur=newnode;
//     return;
// }

// void left()
// {
//     if(cur==head) flag=true;
//     if(cur->prev) cur=cur->prev;
    
//         // if(cur==0)
//         // {
//         //     // node*newnode = (node*)malloc(sizeof(node));
//         //     // newnode->C = '!';
//         //     // newnode->prev=0;
//         //     // newnode->next=cur;
//         //     // cur=newnode;
//         //     flag=true;
//         // }
    
// }

// void right()
// {
//     if(cur->next) cur=cur->next;
    
//         // if(cur==0)
//         // {
//         //     node*newnode = (node*)malloc(sizeof(node));
//         //     newnode->C = '?';
//         //     newnode->prev=cur->prev;
//         //     newnode->next=0;
//         //     cur=newnode;
//         // }
    
// }

// void del()
// {
//     node*del = cur;
//     if(del==0) return;
//     if(del==head)
//     {
//         head=head->next;
//         if(head!=0)
//         {
//             head->prev=0;
//         }
//         //free(del);
//         return;
//     }

//     else
//     {
//         del->prev->next = del->next;
//         if(del->next!=0)
//         {
//             del->next->prev = del->prev;
//             cur=del->next;
//         }
//         else cur=0;
//         free(del);
//         return;
//     }
// }

// void printDLL()
// {
//     node*temp = head;
//     while(temp!=0)
//     {
//         printf("%c",temp->C);
//         temp=temp->next;
//     }
//     printf("\n");
// }

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        node*head = 0;
        node*cur = 0;
        string s;
        cin>>s;
        int a = s.length();
        for(int i=0; i<a; i++)
        {
            if(s[i]=='<') 
            {
                if(cur==0) continue;

                if(cur==head) flag=true;
                if(cur->prev) cur=cur->prev;
            }
            else if(s[i]=='>') 
            {
                if(cur==0) continue;
                if(cur->next) cur=cur->next;
            }
            else if(s[i]=='-')
            {
                node*del = cur;
                if(del==0) continue;
                if(del==head)
                {
                    head=head->next;
                    if(head!=0) 
                    {
                        head->prev=0;
                    }
        //free(del);
                    continue;
                }

                else
                {
                    del->prev->next = del->next;
                    if(del->next!=0)
                    {
                        del->next->prev = del->prev;
                        cur=del->next;
                    }
                    else cur=0;
                    free(del);
                    continue;
                }
            }
            else
            {
                node *newnode = (node*)malloc(sizeof(node));
                newnode->C=s[i];
                newnode->next=0;
                newnode->prev=0;

                if(head==0)
                {
                    head = newnode;
                    cur=head;
                    continue;
                }

                if(cur==head&&flag)
                {
                    newnode->next=head;
                    head->prev=newnode;
                    head=newnode;
                    cur=head;
                    flag=false;
                    continue;
                }
                node *last = cur;
                newnode->next = last->next;
                last->next=newnode;
                newnode->prev = last;
                if(newnode->next!=0)
                    newnode->next->prev = newnode;
                cur=newnode;
                continue;
            }
        }
        node*temp = head;
        while(temp!=0)
        {
            printf("%c",temp->C);
            temp=temp->next;
        }
        printf("\n");
    }
}