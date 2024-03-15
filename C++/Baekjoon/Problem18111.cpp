#include <iostream>

using namespace std;

int map[501][501];
int N, M, B;

int main() {
    int max = 0, min = -1, mintime = 987654321, height = -1;
    cin >> N >> M >> B;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            if (max < map[i][j]) max = map[i][j];
            if (min > map[i][j]) min = map[i][j];
        }
    }

    for (int h = min; h <= max; h++) {
        int build = 0, remove = 0, time = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (map[i][j] < h) {
                    build += h - map[i][j];
                } else if (map[i][j] > h) {
                    remove += map[i][j] - h;
                }
            }
        }
        if (build <= remove + B) {
            time += remove * 2 + build;

            if (mintime >= time) {
                mintime = time;
                height = h;
            }
        }
    }
    cout << mintime << " " << height;
}
