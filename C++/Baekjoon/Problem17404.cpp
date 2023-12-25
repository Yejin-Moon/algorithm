#include <iostream>
#include <algorithm>

using namespace std;

int maxval = 987654321;
int rgb[1001][3];

int main() {
    int N;
    int ans = maxval;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> rgb[i][j];
        }
    }

    for (int start = 0; start < 3; start++) {
        int dp[1001][3];
        for (int i = 0; i < 3; i++) {
            if (i == start) dp[1][start] = rgb[1][start];
            else dp[1][i] = maxval;
        }
        for (int i = 2; i <= N; i++) {
            dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + rgb[i][0];
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + rgb[i][1];
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + rgb[i][2];
        }
        for (int i = 0; i < 3; i++) {
            if (i == start) continue;
            ans = min(ans, dp[N][i]);
        }
    }
    cout << ans;
}
