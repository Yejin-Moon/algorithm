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

static unsigned int seed = 12345;
static unsigned int pseudo_rand(int max) {
	seed = ((unsigned long long)seed * 1103515245 + 12345) & 0x7FFFFFFF;
	return seed % max;
}

#define MAX_N (40)
#define MAX_K (98)
#define MIN_N (2)
#define MAX_CHILD (5)

extern void dfs_init(int N, int path[MAX_N][2]);
extern int dfs(int k);

static int p[MAX_K+2];
static int c[MAX_K+2];
static int path[MAX_N][2];
static void makeTree(int n) {
	for (int i = 1; i < MAX_K+2; ++i) {
		p[i] = c[i] = -1;
	}
	c[pseudo_rand(MAX_K + 1) + 1] = 0;
	for (int i = 0; i < n; ++i) {
		int pi = pseudo_rand(MAX_K + 1) + 1;
		while (c[pi] < 0 || c[pi] >= MAX_CHILD) {
			++pi;
			if (pi == MAX_K + 2)
				pi = 1;
		}
		int ci = pseudo_rand(MAX_K + 1) + 1;
		while (c[ci] >= 0) {
			++ci;
			if (ci == MAX_K + 2)
				ci = 1;
		}
		p[ci] = pi;
		++c[pi];
		c[ci] = 0;
	}
	bool check[MAX_K + 2] = { false };
	for (int i = 0; i < n; ++i) {
		int e = pseudo_rand(MAX_K + 1) + 1;
		while (check[e] || c[e] < 0 || p[e] == -1) {
			++e;
			if (e == MAX_K + 2)
				e = 1;
		}
		check[e] = true;
		path[i][0] = p[e];
        //cout<<"path "<<i<<" 0 - "<<path[i][0]<<'\n';
		path[i][1] = e;
        //cout<<"path "<<i<<" 1 - "<<path[i][1]<<'\n';
	}
}
/*
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
				newnode->data=par;
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

void dfs_init(int N, int path[100][2])
{
    for(int i=0; i<N; i++)
    {
        addnode(path[i][0],path[i][1]);
    }
	idx=0;
}

int dfs(int n)
{
	bool m=false;
    for(int i=0; i<idx; i++)
    {
		node*cur = &nodes[i];
		while(cur->next!=0)
		{
			cur=cur->next;
			if(cur->data==n)
			{
				m=true;
			}
			if(m && cur->data>n) return cur->data;
		}
		if(m) return -1;
        //return -1;
    }
	return -1;
}
*/

int map[100][5];
bool visited[100];
int flag=-1;
void dfs_init(int N, int path[100][2])
{
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<5; j++)
        {
            map[i][j]=0;
        }
    }
    for(int i=0; i<N; i++)
    {
        if(map[path[i][0]][0]==0) map[path[i][0]][0]=path[i][1];
        else
        {
        	for(int chi=0; chi<5; chi++)
        	{
            	if(map[path[i][0]][chi]==0) 
            	{
               		map[path[i][0]][chi]=path[i][1];
                	break;
            	}
        	}
        }
    }
	flag = -1;
}

void init()
{
	for(int i=0; i<100; i++) visited[i]=false;
}

int real_dfs(int node, int n)
{
	//printf("node is : %d\n",node);
	visited[node] =true;
	if(flag==-1 && node>n) 
	{
		flag=node;
	}
	for(int i=0; i<5; i++)
	{
		if(map[node][i]==0) return flag;
		if(!visited[map[node][i]]) real_dfs(map[node][i],n);
	}
	return flag;
}

int dfs(int n)
{
	flag=-1;
	init();
	real_dfs(n,n);
}


int main()
{
    setbuf(stdout, NULL);
	int T;
	//freopen("dfs_input.txt", "r", stdin);
	scanf("%d", &T);

	int totalScore = 0;
	for (int tc = 1; tc <= T; tc++) {
		int n, q;

		scanf("%d %d %d", &n, &q, &seed);

		makeTree(n - 1);
		dfs_init(n, path);
		
		bool check[MAX_K + 2] = { false };
		int score = 100;
		for (int i = 0; i < q; ++i) {
			int k, ret, correct;

			scanf("%d", &k);

			ret = dfs(k);
            //printf("result is %d\n",ret);
			scanf("%d", &correct);

			if (ret != correct)
				score = 0;
		}
		printf("#%d : %d\n", tc, score);
		totalScore += score;
	}
	printf("#total score : %d\n", totalScore / T);

	return 0;
}