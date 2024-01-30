#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[101];

int main() {
    int N, res = 0;
    cin >> N;
    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        v[i] = {A, B};
    }
    sort(v.begin(), v.end());
    dp[0] = 1;
    for (int i = 1; i < N; i++) {
        int maxval = 0;
        for (int j = 0; j < i; j++) {
            if (v[i].second > v[j].second && dp[j] > maxval) maxval = dp[j];
        }
        dp[i] = maxval + 1;
    }
    for (int i = 0; i < N; i++) {
        if (dp[i] > res) res = dp[i];
    }
    cout << N - res;
}
