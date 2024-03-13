#include <iostream>
#include <queue>

using namespace std;

int n;
int map[4][4];
int visited[4][4];
int dx[] = {1, 0};
int dy[] = {0, 1};

bool bfs() {
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        if (map[curX][curY] == -1) return true;
        if (map[curX][curY] == 0) return false;

        for (int i = 0; i < 2; i++) {
            int nextX = 0, nextY = 0;
            nextX = curX + dx[i] * map[curX][curY];
            nextY = curY + dy[i] * map[curX][curY];
            if (nextX >= n || nextY >= n || nextX < 0 || nextY < 0) continue;
            if (!visited[nextX][nextY]) {
                q.push({nextX, nextY});
                visited[nextX][nextY] = true;
            }

        }
    }
    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    bool res = bfs();
    if (res) cout << "HaruHaru";
    else cout << "Hing";
}
