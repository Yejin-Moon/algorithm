#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt = 0;

void bfs() {
    queue<int> q;
    visited[1] = true;
    q.push(1);

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        cnt++;
        for (int i = 0; i < graph[x].size(); i++) {
            if (!visited[graph[x][i]]) {
                q.push(graph[x][i]);
                visited[graph[x][i]] = true;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs();
    cout << cnt - 1;
}
