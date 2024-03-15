#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> graph[1001];
int cost[1001];

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    cost[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int dis = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if (cost[cur] < dis) continue;
        for (int i = 0; i < graph[cur].size(); i++) {
            int next = graph[cur][i].first;
            int nextDis = dis + graph[cur][i].second;

            if (cost[next] > nextDis) {
                cost[next] = nextDis;
                pq.push({nextDis, next});
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    fill_n(cost, N + 1, 987654321);
    int start, end;
    cin >> start >> end;
    dijkstra(start);

    cout << cost[end];
}
