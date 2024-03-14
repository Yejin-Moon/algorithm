#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt = 0;

void dfs(int x) {
    visited[x] = true;

    for (int i = 0; i < graph[x].size(); i++) {
        if (!visited[graph[x][i]]) {
            cnt++;
            visited[graph[x][i]] = true;
            dfs(graph[x][i]);
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
    dfs(1);
    cout << cnt;
}
