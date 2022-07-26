#include <iostream>
using namespace std;
int top=-1;
int rn;
int stack[100];
bool visited[100];
int rpath[100][2];
void dfs_init(int N, int path[100][2])
{
    rn=N;
    for(int i=0; i<N; i++)
    {
        rpath[i][0]=path[i][0];
        rpath[i][1]=path[i][1];
    }
    for(int i=0; i<N; i++)
    {
        visited[i]=false;
    }
    //int stack[N];
    top=-1;
}

int dfs(int n)
{
    stack[++top]=n;
    while(top!=-1)
    {
        //cout<<top<<endl;
        int cur = stack[top--];
        //cout<<"top is :"<<cur<<endl;
        if(!visited[cur])
        {
            //cout<<cur<<' ';
            visited[cur]=true;
            if(cur>n) 
            {
                cout<<"tes";
                return cur;
            }
            for(int next=0; next<2; next++)
            {
                if(!visited[rpath[next][1]] && rpath[next][1]) 
                {
                    top++;
                    stack[top] = rpath[next][1];
                    cout<<stack[top]<<endl;
                    //break;
                }
            }
        }
    }
	return -1;
}

int main()
{
    int a,b;
    cin>>a>>b;
    rpath[0][0]=a;
    rpath[0][1]=b;
    rpath[1][0]=b;
    rpath[1][1]=0;
    int res = dfs(a);
    cout<<"res is "<<res;
}