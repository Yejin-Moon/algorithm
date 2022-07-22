#include<iostream>
using namespace std;

typedef struct node
{
    int i;
    struct node*next;
}node;

node*head;
node*tail;
node*loc;

void init()
{
    head=0;
    tail=0;
    loc=0;
}

void addtolist(int a)
{
    node*newnode = (node*)malloc(sizeof(node));
    newnode->i=a;
    newnode->next=0;
    tail->next=newnode;
    tail=newnode;
    return;
}

void findloc(int n)
{
    int where=0;
    loc=head;
    while(loc->next!=0)
    {
        if(where==n) return;
        where++;
        loc=loc->next;
    }
    loc=0;
}

void inserttolist(int a)
{
    if(loc==0) return;
    node*newnode = (node*)malloc(sizeof(node));
    newnode->i=a;
    newnode->next=0;

    newnode->next=loc->next;
    loc->next=newnode;
    return;
}

void deletelist()
{
    if(loc==0) return;
    node*del=loc->next;
    loc->next=del->next;
    return;
}

void changelist(int a)
{
    if(loc==0) return;
    loc->next->i=a;
    return;
}

void printlist(int idx)
{
    node*tmp=head->next;
    if(tmp==0)
    {
        printf("-1\n");
        return;
    }
    for(int i=0; i<idx; i++)
    {
        if(tmp==0)
        {
        	printf("-1\n");
        	return;
        }
        tmp=tmp->next;
    }
    printf("%d\n",tmp->i);
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        init();
        node*newnode = (node*)malloc(sizeof(node));
        newnode->i=-1;
        newnode->next=0;
        head=newnode;
        tail=newnode;
		int n,m,idx;
        cin>>n>>m>>idx;
        for(int i=0; i<n; i++)   
        {
            int a;
            scanf("%d",&a);
            addtolist(a);
        }
        for(int i=0; i<m; i++)
        {
            char c;
            cin>>c;
            if(c=='I')
            {
                int a,b;
                cin>>a>>b;
                //scanf("%d %d",&a,&b);
                findloc(a);
                inserttolist(b);
            }
            else if(c=='D')
            {
                int a;
                cin>>a;
                findloc(a);
                deletelist();
            }
            else
            {
                int a,b;
                cin>>a>>b;
                findloc(a);
                changelist(b);
            }
        }
        cout<<"#"<<test_case<<" ";
        printlist(idx);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}