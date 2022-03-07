#include <iostream>
#include <vector>
#include <queue>

#define MAX 100
#define INF 99999999

using namespace std;

vector<int> dijkstra(int start, int V, vector<pair<int,int>> adj[]) {
    vector<int> dist(V, INF);
    priority_queue<pair<int,int>>pq;

    dist[start] = 0;
    pq.push(make_pair(0,start));

    while(!pq.empty()) {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        for(int i = 0; i< adj[cur].size(); i++) 
        {
            int next = adj[cur][i].first;
            int nCost = cost + adj[cur][i].second;
            if(nCost < dist[next]) {
                dist[next] = nCost;
                pq.push(make_pair(-nCost, next));
            }
        }
    }
    return dist;
}

int main()
{
    int V,E;
    vector<pair<int, int>> adj[MAX];
    cout<<"Enter the number of nodes : ";
    cin>>V;
    cout<<"Enter the number of Edges : ";
    cin>>E;

    for (int i = 0; i<E;i++)
    {
        int from, to, cost;
        cout<<"Enter the graph: ";
        cin>>from>>to>>cost;
        adj[from].push_back(make_pair(to,cost));
        adj[to].push_back(make_pair(from, cost));
    }

    printf("Result\n");
    vector<int>dist = dijkstra(0,V,adj);
    for(int i = 0; i< V; i++)
    {
        printf("Shortest distance (0 node to %d node) : %d\n", i,dist[i]);
    }
    return 0;
}