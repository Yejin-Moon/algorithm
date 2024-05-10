#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[100001];
int answer[100001];
bool visited[100001];

void dfs(int v) {
    visited[v] = true;
    for (int i = 0; i < graph[v].size(); i++) {
        int node = graph[v][i];
        if (!visited[node]) {
            answer[node] = v;
            dfs(node);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    for (int i = 2; i <= n; i++) {
        cout << answer[i] << '\n';
    }
}
