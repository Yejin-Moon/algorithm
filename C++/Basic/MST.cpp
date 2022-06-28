#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getparent(int set[], int x)
{
    if(set[x]==x) return x;
    return set[x] = getparent(set,set[x]);
}

void unionparent(int set[],int a, int b)
{
    a=getparent(set,a);
    b=getparent(set,b);
    //숫자가 작은 부모로 병합
    if(a<b) set[b]=a;
    else set[a]=b;
}

int find(int set[], int a, int b)
{
    a=getparent(set, a);
    b=getparent(set, b);
    if(a==b) return 1;
    else return 0;
}

class Edge
{
public:
    int node[2];
    int distance;
    Edge(int a, int b, int distance)
    {
        this->node[0]=a;
        this->node[1]=b;
        this->distance=distance;
    }
    bool operator <(Edge &edge)
    {
        return this->distance < edge.distance;
    }
};

int main()
{
    int n=8;
    int m=14;
    vector<Edge> v;
    v.push_back(Edge(1,2,8));
    v.push_back(Edge(1,6,10));
    v.push_back(Edge(1,8,5));
    v.push_back(Edge(2,6,4));
    v.push_back(Edge(2,3,4));
    v.push_back(Edge(2,8,4));
    v.push_back(Edge(2,5,4));
    v.push_back(Edge(3,6,3));
    v.push_back(Edge(3,4,3));
    v.push_back(Edge(4,5,1));
    v.push_back(Edge(4,6,6));
    v.push_back(Edge(4,7,3));
    v.push_back(Edge(5,7,3));
    v.push_back(Edge(7,8,3));

    sort(v.begin(),v.end());

    int set[8];
    for(int i=0; i<n; i++) set[i]=i;

    int sum=0;
    for(int i=0; i<v.size(); i++)
    {
        if(!find(set,v[i].node[0]-1,v[i].node[1]-1))
        {
            sum+=v[i].distance;
            unionparent(set,v[i].node[0]-1,v[i].node[1]-1);
        }
    }

    cout<<sum;
}