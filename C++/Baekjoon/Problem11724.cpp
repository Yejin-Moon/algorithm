#include <iostream>
#include <vector>
using namespace std;

bool visited[1001];
vector<int> graph[1001];

void dfs(int n)
{
    visited[n]=true;
    for(int i=0; i<graph[n].size(); i++)
    {
        int x = graph[n][i];
        if(!visited[x]) dfs(x);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int answer=0;
    for(int i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            dfs(i);
            answer++;
        }
    }
    cout<<answer;
}