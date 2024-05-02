#include <string>
#include <vector>
#include <queue>

using namespace std;
vector<int> graph[101];
bool visited[101];
int cnt=0;

void bfs(int v1, int v2) {
    queue<int> q;
    visited[v1]=true;
    visited[v2]=true;
    q.push(v1);
    
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        cnt++;
        
        for(int i=0; i<graph[cur].size(); i++) {
            int node = graph[cur][i];
            if(!visited[node]) {
                q.push(node);
                visited[node]=true;
            }
        }
    }
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 987654321;
    int len = wires.size();
    for(int i=0; i<len; i++) {
        graph[wires[i][0]].push_back(wires[i][1]);
        graph[wires[i][1]].push_back(wires[i][0]);
    }
    for(int i=0; i<len; i++) {
        cnt=0;
        fill_n(visited,101,false);
        int v1 = wires[i][0];
        int v2 = wires[i][1];
        bfs(v1,v2);
        int diff = abs(n-2*cnt);
        if(diff<answer) answer=diff;
        
    }
    return answer;
}
