#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

void bfs(int start)
{
    fill_n(visited,1001,false);
    graph->assign(1001,0);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(int i=0; i<graph[x].size(); i++)
        {
            int y = graph[x][i];
            if(!visited[y])
            {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

void dfs(int x)
{
    visited[x] = true;
    cout<<x<<" ";
    
    for(int i=0; i<graph[x].size(); i++)
    {
        sort(graph[x].begin(),graph[x].end());
        int y = graph[x][i];
        if(!visited[y])
            dfs(y);
    }
}

int main()
{
    int n,m,s;
    cin>>n>>m>>s;

    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(s);
    cout<<'\n';
    bfs(s);
}