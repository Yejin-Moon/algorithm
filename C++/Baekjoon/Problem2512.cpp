#include <iostream>

using namespace std;
long N, M;
long arr[10001];

long min(long a, long b) {
    if (a < b) return a;
    else return b;
}

bool ask(long mid) {
    long gain = 0;
    for (int i = 0; i < N; i++) {
        gain += min(arr[i], mid);
    }
    return gain <= M;
}

int main() {
    cin >> N;
    long maxval = -1;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > maxval) maxval = arr[i];
    }
    cin >> M;

    long right = maxval+1;
    long left = 0;
    long mid, ans;

    while (left < right) {
        mid = (left + right) / 2;
        if (ask(mid)) {
            ans = mid;
            left = mid + 1;
        } else right = mid;
    }
    cout << ans;
}
