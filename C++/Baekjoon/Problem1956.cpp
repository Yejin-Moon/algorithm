#include <iostream>
#include <algorithm>

using namespace std;

int graph[401][401];
int inf = 987654321;

int main() {
    int N, M;
    cin >> N >> M;
    fill_n(graph[0], 401 * 401, inf);
    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a][b] = min(graph[a][b], c);
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    int minval = inf;
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (graph[i][j] != inf && graph[j][i] != inf) {
                minval = min(minval, graph[i][j] + graph[j][i]);
            }
        }
    }
    if (minval == inf) minval = -1;
    cout << minval;
}
