#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;

int n, m, start;

vector<pair<int, int>> graph[100001];

bool visited[100001];
int d[100001];

int getSmallestNode()
{
    int min = INF;
    int idx = 0;

    for(int i = 0; i<= n; i++)
    {
        if((d[i]<min)&&!visited[i])
        {
            min = d[i];
            idx = i;
        }
    }
    return idx;
}

void dijkstra(int start)
{
    d[start] = 0;
    visited[start] = true;

    for(int j = 0; j<graph[start].size(); j++)
    {
        d[graph[start][j].first] = graph[start][j].second;
    }

    for(int i = 0; i<n; i++)
    {
        int now = getSmallestNode();
        visited[now] = true;

        for(int j = 0; j < graph[now].size(); j++)
        {
            int cost = d[now] + graph[now][j].second;

            if(cost < d[graph[now][j].first])
            {
                d[graph[now][j].first]= cost;
            }
        }
    }
}

int main()
{
    cin>>n>>m>>start;

    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a>> b>> c;

        graph[a].push_back({b,c});
    }
    fill_n(d,100001,INF);
    dijkstra(start);

    for(int i = 1; i<=n; i++)
    {
        if(d[i]==INF)
        {
            cout<<"INF"<<'n';
        }
        else
        {
            cout<<d[i]<<'\n';
        }
    }
    return 0;
}