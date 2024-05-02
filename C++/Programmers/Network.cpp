#include <string>
#include <vector>
#include <queue>

using namespace std;
vector<int> graph[201];
bool visited[201];

void bfs(int v) {
    queue<int> q;
    visited[v]=true;
    q.push(v);
    
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(int i=0; i<graph[cur].size(); i++) {
            int node = graph[cur][i];
            if(!visited[node]) {
                visited[node]=true;
                q.push(node);
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(i!=j && computers[i][j]==1) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            answer++;
            bfs(i);
        }
    }
    return answer;
}
