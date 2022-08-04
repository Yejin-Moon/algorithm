#include <iostream>
#include <cstring>
using namespace std;

struct node
{
    char string[50];
    struct node*next;
}nodes[26];

node*getNode(char s[])
{
    int idx = s[0]-'a';
    nodes[idx].next=0;
    strcpy(nodes[idx].string,s);
}

void hashing(char s[])
{
    int idx = s[0]-'a';
    node* cur = &nodes[s[0]-'a'];
    if(cur==0) 
    {
        node*newnode = getNode(s);
        return;
    }
    else
    {
        node*newnode = (node*)malloc(sizeof(node));
        strcpy(newnode->string,s);
        newnode->next=0;
        while(cur->next!=0) cur=cur->next;
        cur->next=newnode;
        return;
    }
}

int findhash(char s[])
{
    node*cur=&nodes[s[0]-'a'];
    while(cur->next!=0)
    {
        cur=cur->next;
        if(strcmp(cur->string,s)==0) return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        int a,b;
        cin>>a>>b;
        for(int j=0; j<a; j++)
        {
            char str[50];
            scanf("%s",str);
            hashing(str);
        }
        for(int j=0; j<b; j++)
        {
            char str2[50];
            scanf("%s",str2);
            int res = findhash(str2);
            cnt+=res;
        }
        cout<<cnt<<endl;
    }
}