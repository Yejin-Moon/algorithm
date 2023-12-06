#include <iostream>
using namespace std;

int K, N;
int arr[10001];

bool ask(long mid) {
    int gain = 0;
    for (int i = 0; i < K; i++) {
        gain += (arr[i] / mid);
    }
    return gain >= N;
}

int main() {
    cin >> K >> N;

    long maxval = -1;
    for (int i = 0; i < K; i++) {
        cin >> arr[i];
        if (arr[i] > maxval) maxval = arr[i];
    }

    long right = maxval+1;
    long left = 1, ans;

    while (left < right) {
        long mid = (left + right) / 2;
        if (ask(mid)) {
            ans = mid;
            left = mid + 1;
        } else right = mid;
    }

    cout << ans;
}
