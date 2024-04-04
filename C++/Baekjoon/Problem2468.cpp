#include <iostream>
#include <queue>

using namespace std;

int N, cnt;
int map[101][101];
bool visited[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int x, int y, int h) {
    queue<pair<int, int>> q;
    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty()) {
        int curx = q.front().first;
        int cury = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int newx = curx + dx[i];
            int newy = cury + dy[i];

            if (newx > N || newx < 0 || newy > N || newy < 0) continue;
            if (!visited[newx][newy] && map[newx][newy] > h) {
                visited[newx][newy] = true;
                q.push({newx, newy});
            }
        }
    }
}

int main() {
    int res = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i <= 100; i++) {
        cnt = 0;
        fill_n(visited[0], 101 * 101, false);
        for (int a = 0; a < N; a++) {
            for (int b = 0; b < N; b++) {
                if (visited[a][b] == false && map[a][b] > i) {
                    bfs(a, b, i);
                    cnt++;
                }
            }
        }
        if (cnt > res) res = cnt;
    }
    cout << res;
}
