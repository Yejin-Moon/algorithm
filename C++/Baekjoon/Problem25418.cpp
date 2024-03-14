#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int a, k;
bool checked[2000001];

int bfs() {
    queue<pair<int, int>> q;
    q.push({a, 0});
    checked[a] = true;

    while (!q.empty()) {
        int cur = q.front().first;
        int curCnt = q.front().second;
        q.pop();

        if (cur > k) continue; // 이렇게 안하면 경계 넘어감
        if (cur == k) return curCnt;
        if (!checked[cur + 1]) {
            q.push({cur + 1, curCnt + 1});
            checked[cur + 1] = true;
        }
        if (!checked[cur * 2]) {
            q.push({cur * 2, curCnt + 1});
            checked[cur * 2] = true;
        }
    }
}

int main() {
    cin >> a >> k;
    cout << bfs();
}
