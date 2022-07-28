#include <iostream>
using namespace std;
int map[100][5];
bool visited[100];
int stack[100];
int top=-1, sz=0, ret=0;

void push(int data)
{
    stack[++top] = data;
    sz++;
}

bool empty()
{
    if(top==-1) return true;
    else return false;
}

int pop()
{
    if(empty()) return -1;
    sz--;
    return stack[top--];
}

void dfs_init(int N, int path[100][2])
{
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<5; j++)
        {
            map[i][j]=0;
        }
    }
    for(int i=0; i<100; i++)
    {
        visited[i]=false;
    }
    int childcnt=0;

    for(int i=0; i<N; i++)
    {
        if(i<=N-1 && path[i][0]==path[i+1][0])
        {
            map[path[i][0]][childcnt++] = path[i][1];
            continue;
        }
        map[path[i][0]][childcnt]=path[i][1];
        childcnt=0;
    }
    top=-1;
}

int dfs(int n)
{
    ret = n;
    push(n);
    while(!empty())
    {
        int cur = pop();
        if(!visited[cur])
        {
            visited[cur]=true;
            if(cur>ret) return cur;

            for(int next=4; next>=0; next--)
            {
                if(!visited[next] && map[cur][next]!=0)
                {
                    push(map[cur][next]);
                }
            }
        }
    }
    return -1;
}