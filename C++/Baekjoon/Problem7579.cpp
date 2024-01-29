#include <iostream>

using namespace std;

int bite[101];
int cost[101];
int dp[101][10001];

int maxx(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int N, M, sum = 0;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> bite[i];
    }

    for (int i = 1; i <= N; i++) {
        cin >> cost[i];
        sum += cost[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= sum; j++) {
            if (j - cost[i] >= 0) dp[i][j] = maxx(dp[i][j], dp[i - 1][j - cost[i]] + bite[i]);
            dp[i][j] = maxx(dp[i][j], dp[i - 1][j]);
        }
    }
    for (int i = 0; i <= sum; i++) {
        if (dp[N][i] >= M) {
            cout << i << '\n';
            break;
        }
    }
}
