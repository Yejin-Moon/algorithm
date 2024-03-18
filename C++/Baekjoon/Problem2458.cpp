#include <iostream>
#include <algorithm>

using namespace std;

int graph[501][501];
int graph2[501][501];
int score[501];
int inf = 987654321;

int main() {
    int N, M, res = 0;
    cin >> N >> M;

    fill_n(graph[0], 501 * 501, inf);
    fill_n(graph2[0], 501 * 501, inf);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        //graph[b][a]=1;
        graph2[b][a] = 1;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                graph2[i][j] = min(graph2[i][j], graph2[i][k] + graph2[k][j]);
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (graph[i][j] != inf) score[i]++;
            if (graph2[i][j] != inf) score[i]++;
        }
        if (score[i] == N - 1) res++;
    }
    cout << res;
}
