#include <iostream>

using namespace std;

int n;
char map[51][51];

int cntMax() {
    int max = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n - 1; j++) {
            if (map[i][j] == map[i][j + 1]) {
                cnt++;
                if (max < cnt) max = cnt;
            } else cnt = 0;
        }
    }
    for (int j = 0; j < n; j++) {
        cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (map[i][j] == map[i + 1][j]) {
                cnt++;
                if (max < cnt) max = cnt;
            } else cnt = 0;
        }
    }
    return max;
}

int main() {
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (map[i][j] != map[i][j + 1]) {
                swap(map[i][j], map[i][j + 1]);
                int tmp = cntMax();
                if (res < tmp) res = tmp;
                swap(map[i][j], map[i][j + 1]);
            }
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (map[i][j] != map[i + 1][j]) {
                swap(map[i][j], map[i + 1][j]);
                int tmp = cntMax();
                if (res < tmp) res = tmp;
                swap(map[i][j], map[i + 1][j]);
            }
        }
    }
    cout << res + 1;
}
