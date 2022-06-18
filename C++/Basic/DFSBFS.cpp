#include <iostream>
#include <vector>
#include <queue>
#define SZ 9
using namespace std;

bool visited[SZ];
vector<int> graph[SZ];

void dfs(int n)
{
    visited[n] = true;
    cout<<n<<" ";
    for(int i=0; i<graph[n].size(); i++)
    {
        int y = graph[n][i];
        if(!visited[y]) dfs(y);
    }
}

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    visited[n] = true;

    while(!q.empty())
    {
        int x= q.front();
        q.pop();
        cout<<x<<" ";
        for(int i=0; i<graph[x].size(); i++)
        {
            int y=graph[x][i];
            if(!visited[y])
            {
                q.push(y);
                visited[y]=true;
            }
        }
    }
}

int main()
{
    graph[1].push_back(2);
    graph[2].push_back(1);
    dfs(1);
}