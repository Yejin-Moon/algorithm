#include <iostream>
#include <algorithm>

using namespace std;

int graph[101][101];
int inf = 987654321;

int main() {
    int N, M;
    cin >> N >> M;
    fill_n(graph[0], 101 * 101, inf);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
    int min = inf;
    int res = 0;
    for (int i = 1; i <= N; i++) {
        int tmp = 0;
        for (int j = 1; j <= N; j++) {
            tmp += graph[i][j];
        }
        if (min > tmp) {
            res = i;
            min = tmp;
        }
    }
    cout << res;
}
