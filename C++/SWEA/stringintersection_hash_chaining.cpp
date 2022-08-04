#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct node
{
 	char s[50];
    struct node*next;
}nodes[100001];

node*getNode(int key, char s[])
{
    nodes[key].next=0;
    strcpy(nodes[key].s,s);
}

int djb2(string str) {
	unsigned long hash = 5381;
	int c;
	int len = str.length();
	for(int i=0; i<len; i++)
    {
        c=str[i];
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (int)hash%100000;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int cnt=0;
        int a,b;
        scanf("%d %d",&a,&b);
        for(int i=0; i<a; i++)
        {
            char s[50];
            scanf("%s",s);
            int key = djb2(s);
            node*cur=&nodes[key];
            while(cur->next!=0) cur=cur->next;
            node*newnode = (node*)malloc(sizeof(node));
            strcpy(newnode->s,s);
            newnode->next=0;
            cur->next=newnode;
        }
        for(int i=0; i<b; i++)
        {
            char s[50];
            scanf("%s",s);
            int key = djb2(s);
            node*cur=&nodes[key];
            while(cur->next!=0)
            {
                cur=cur->next;
                if(strcmp(cur->s,s)==0)
                {
                    cnt++;
                    break;
                }
            }
        }
        printf("#%d %d\n",test_case,cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}