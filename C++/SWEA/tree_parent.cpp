#include<iostream>
#include<queue>
using namespace std;

struct node
{
    int data;
    struct node *child[2];
    struct node *parent;
    int cnt;
}nodes[10001];

node* getNode(int data) {
	nodes[data].data = data;
	nodes[data].child[0] = nullptr;
    nodes[data].child[1]=nullptr;
    nodes[data].parent=nullptr;
    nodes[data].cnt=1;
	return &nodes[data];
}

void addNode(int n, int a)
{
    if(nodes[n].data!=n) node*newnode = getNode(n);
    if(nodes[a].data!=a) node*cnode = getNode(a);
    if(nodes[n].child[0]==0) nodes[n].child[0]=&nodes[a];
    else nodes[n].child[1]=&nodes[a];
    nodes[a].parent=&nodes[n];
    node *cur = &nodes[n];
}

int findpar(int a, int b)
{
    int res=0;
    int arr[10000];
    int idx=0;
    bool flag = false;
    node *cur = &nodes[a];
    while(cur->parent!=0)
    {
        cur=cur->parent;
        arr[idx]=cur->data;
        idx++;
    }
    node*tmp = &nodes[b];
    while(tmp->parent!=0)
    {
        if(flag) break;
        tmp=tmp->parent;
        for(int i=0; i<idx; i++)
        {
            if(tmp->data==arr[i])
            {
                res=arr[i];
                flag=true;
                break;
            }
        }
    }
    return res;
}

int countchild(int n)
{
    queue<int> q;
    q.push(n);
    int count =1;
    
    while(!q.empty())
    {
     	int cur=q.front();
        q.pop();
        
        for(int i=0; i<2; i++)
        {
         	if(nodes[cur].child[i]!=nullptr)
            {
                q.push(nodes[cur].child[i]->data);
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int i=0; i<b; i++)
        {
            int n,m;
            cin>>n>>m;
            addNode(n,m);
        }
        int r = findpar(c,d);
        int res = countchild(r);
        //int r=1;
        
        printf("#%d %d %d\n",test_case,r,res);
        if(test_case<10)
        {
        	for(int i=0; i<=a; i++)
        	{
            	nodes[i].cnt=1;
            	nodes[i].data=0;
            	nodes[i].child[0]=0;
            	nodes[i].child[1]=0;
            	nodes[i].parent=0;
        	}
        }
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}