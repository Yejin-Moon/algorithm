#include <iostream>
#include <algorithm>
#include <vector>
#define SZ 8
using namespace std;

int getparent(int cycle[], int x)
{//cycledetection 배열에서 부모가 누군지 가져옴
    if(cycle[x]==x) return x;
    return cycle[x] = getparent(cycle,cycle[x]);
}

void unionparent(int cycle[],int a, int b)
{//연결되었다는 의미로 부모를 같게 해준다.
    a=getparent(cycle,a);
    b=getparent(cycle,b);
    //숫자가 앞서는 부모를 기준으로 연결
    if(a<b) cycle[b]=a;
    else cycle[a]=b;
}

int find(int cycle[], int a, int b)
{//부모가 같은지 확인
    a=getparent(cycle, a);
    b=getparent(cycle, b);
    if(a==b) return 1;
    else return 0;
}

class Edge
{
public:
    int vertext[2];
    int weight;
    Edge(int a, int b, int weight)
    {
        this->vertext[0]=a;
        this->vertext[1]=b;
        this->weight=weight;
    }
    bool operator <(Edge &edge)
    {
        return this->weight < edge.weight;
    }
};

int main()
{
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
    v.push_back(Edge(4,7,2));
    v.push_back(Edge(5,7,3));
    v.push_back(Edge(7,8,3));

    sort(v.begin(),v.end());

    int cycledetection[SZ];
    for(int i=0; i<SZ; i++) cycledetection[i]=i;

    int sum=0;
    for(int i=0; i<v.size(); i++)
    {
        if(!find(cycledetection,v[i].vertext[0]-1,v[i].vertext[1]-1))
        {
            sum+=v[i].weight;
            unionparent(cycledetection,v[i].vertext[0]-1,v[i].vertext[1]-1);
        }
    }

    cout<<"weight is : "<<sum;
}