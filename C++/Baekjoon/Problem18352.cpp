#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[300001];
int d[300001];

void dijk(int start) {
    d[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int cur = pq.top().second;
        int dis = pq.top().first;
        pq.pop();

        if (d[cur] < dis) continue;
        for (int i = 0; i < graph[cur].size(); i++) {
            int next = graph[cur][i];
            int nextDis = dis + 1;

            if (d[next] > nextDis) {
                d[next] = nextDis;
                pq.push({nextDis, next});
            }
        }
    }

}

int main() {
    int N, M, K, X;
    cin >> N >> M >> K >> X;
    fill_n(d, N + 1, 987654321);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    dijk(X);

    vector<int> res;
    for (int i = 1; i <= N; i++) {
        if (d[i] == K) res.push_back(i);
    }
    if (res.size() == 0) cout << "-1";
    else {
        for (int i = 0; i < res.size(); i++) cout << res[i] << '\n';
    }
}
