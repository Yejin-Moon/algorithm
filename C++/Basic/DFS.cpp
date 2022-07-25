#include <iostream>
#define MAX_N 100
#define STACK_SIZE 100
using namespace std;
int Graph[MAX_N][MAX_N];
bool visited[MAX_N];
int Stack[STACK_SIZE], top;
int N;

//재귀
void recur_dfs(int node)
{
    visited[node] = true;
    for(int next=0; next<N; next++)
    {
        if(!visited[next] && Graph[node][next]) recur_dfs(next);
    }
}

//반복 (input 사이즈가 클 때)
void stack_dfs(int node)
{
    bool visited[MAX_N] = {false};
    top = -1;
    Stack[++top] = node; //처음시작노드 추가
    while(top!=-1)
    {
        int curr = Stack[top--];
        if(!visited[curr])
        {
            visited[curr] = true;
            cout<<curr<<' ';
            for(int next=0; next<N; next++)
            {
                if(!visited[next]&&Graph[curr][next])
                {//인접 노드중 정점간 간선있고 방문한 적 없으면
                    Stack[top++] = next;
                }
            }
        }
    }
}

int main()
{
    cin>>N;
}