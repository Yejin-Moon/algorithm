#include <iostream>
#include <algorithm>

using namespace std;

int map[101][101];
int item[101];
int inf = 987654321;

int main() {
    int N, M, R;
    cin >> N >> M >> R;

    fill_n(map[0], 101 * 101, inf);
    for (int i = 1; i <= N; i++) {
        cin >> item[i];
    }
    for (int i = 1; i <= R; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        map[a][b] = c;
        map[b][a] = c;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
            }
        }
    }

    int res = 0;
    for (int i = 1; i <= N; i++) {
        int tmp = item[i];
        for (int j = 1; j <= N; j++) {
            if (i == j) continue;
            if (map[i][j] <= M) tmp += item[j];
        }
        res = max(res, tmp);
    }
    cout << res;
}
