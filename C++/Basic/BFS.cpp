#include <iostream>
using namespace std;

int graph[100][100];
int queue[100], front, rear,N;

void bfs(int node)
{
    bool visited[100] = {false};
    front = rear = -1;
    visited[node] = true;
    queue[++rear] = node;
    while(front!= rear)
    {
        int cur=queue[++front];

        for(int next=0; next<N; ++next)
        {
            if(!visited[next]&&graph[cur][next])
            {
                visited[next] = true;
                queue[++rear] = next;
            }
        }
    }
}
int main()
{

}