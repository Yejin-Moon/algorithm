#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getparent(int cycle[], int x)
{
    if(cycle[x]==x) return x;
    return cycle[x]=getparent(cycle,cycle[x]);
}

void unionparent(int cycle[],int a, int b)
{
    a=getparent(cycle,a);
    b=getparent(cycle,b);
    if(a<b) cycle[b]=a;
    else cycle[a]=b;
}

int find(int cycle[], int a, int b)
{
    a=getparent(cycle,a);
    b=getparent(cycle,b);
    if(a==b) return 1;
    else return 0;
}

class Edge
{
public:
    int node[2];
    int weight;
    Edge(int a, int b, int weight)
    {
        this->node[0]=a;
        this->node[1]=b;
        this->weight=weight;
    }
    bool operator <(Edge &edge)
    {
        return this->weight < edge.weight;
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    vector<Edge> v;
    for(int i=0; i<m; i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        v.push_back(Edge(a,b,w));
    }
    sort(v.begin(),v.end());

    int *cycle = new int[n];
    for(int i=0;i<n; i++) cycle[i]=i;

    int sum=0;
    for(int i=0; i<v.size(); i++)
    {
        if(!find(cycle,v[i].node[0]-1,v[i].node[1]-1))
        {
            sum+=v[i].weight;
            unionparent(cycle,v[i].node[0]-1,v[i].node[1]-1);
        }
    }
    cout<<sum;
    delete []cycle;
}