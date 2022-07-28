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
