#include<iostream>
using namespace std;

struct node
{
    int i;
    struct node*next;
};

node Node[10000000];
node*head;
node*tail;
node*loc;
int nodecnt;
int where;
void init()
{
    //node Node[10000000];
	head=0;
	tail= 0;
	loc=0;
	nodecnt=0;
    where=0;
}

node* getNode(int data) {
	Node[nodecnt].i = data;
	Node[nodecnt].next = nullptr;
	return &Node[nodecnt++];
}

void addtolist(int a)
{
    node*newnode = getNode(a);
    tail->next = newnode;
    tail=newnode;
}

void findloc(int x)
{
    if(x>nodecnt) return;
    loc=head;
    where=0;
    if(x==0) return;
    while(loc->next!=0)
    {
        if(where==x) return;
        loc=loc->next;
        where++;
    }
    loc=0;
    return;
}

void inserttolist(int s)
{
    node*newnode = getNode(s);
    
    if(loc==0) return;

    newnode->next=loc->next;
    loc->next=newnode;
    loc=loc->next;
}

void deletelist()
{
    if(loc==0) return;
    node*del;
	if(loc->next==0) return;
    del=loc->next;
    loc->next=del->next;
    //nodecnt--;
    return;
}

void printlist()
{
    node*tmp = head->next;
    for(int i=0; i<10; i++)
    {
        if(tmp==0) return;
        cout<<tmp->i<<" ";
        tmp=tmp->next;
    }
}

int main(int argc, char** argv)
{  
	int test_case;
	int T=10;
	//freopen("input.txt", "r", stdin);
	//cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        init();
        node*newnode = getNode(-1);
        head=newnode;
        tail=newnode;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            addtolist(a);
        }
        int m;
        scanf("%d",&m);
        for(int i=0; i<m; i++)
        {
            char c;
            cin>>c;
            if(c=='I')
            {
                int a,b;
                cin>>a>>b;
                findloc(a);
                for(int j=0; j<b; j++)
                {
                    int d;
                    scanf("%d",&d);
                    inserttolist(d);
                }
                loc=0;
            }
            else if(c=='D')
            {
                int a,b;
                cin>>a>>b;
                findloc(a);
                for(int j=0; j<b; j++)
                {
                    deletelist();
                }
                loc=0;
            }
            else
            {
                int a;
                cin>>a;
                for(int j=0; j<a; j++)
                {
                    int b;
                    scanf("%d",&b);
                    addtolist(b);
                }
            }
        }
        cout<<"#"<<test_case<<" ";
        printlist();
        cout<<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}