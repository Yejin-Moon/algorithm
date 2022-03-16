#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check[7];

class Edge
{
public:
    int node[2];
    int distance;
    Edge(int a, int b, int distance){
        this->node[0] = a;
        this->node[1] = b;
        this->distance = distance;
    }

    bool operator<(Edge &edge){
        return this->distance < edge.distance;
    }
};

int getParent(int node)
{
    if(check[node] == node) return node;
    return getParent(check[node]);
}

void unionParent(int node1, int node2)
{
    node1=getParent(node1);
    node2=getParent(node2);
    if(node1 < node2) check[node2] = node1;
    else check[node1] = node2;
}

bool isCycle(int node1, int node2)
{
    node1= getParent(node1);
    node2= getParent(node2);
    if(node1==node2) return true;
    else return false;
}