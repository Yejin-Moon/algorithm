#include <iostream>

using namespace std;
int n, m;
int arr[5001];
int res = 987654321;

bool ask(int mid) {
    int cnt = 1;
    int minval = arr[0], maxval = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minval) minval = arr[i];
        if (arr[i] > maxval) maxval = arr[i];

        if ((maxval - minval) > mid) {
            cnt++;
            minval = arr[i];
            maxval = arr[i];
        }
    }
    return cnt <= m;
}

int main() {
    cin >> n >> m;
    int maxval = -1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxval) maxval = arr[i];
    }

    int right = maxval;
    int left = 0;
    while (left < right) {
        int mid = (left + right) / 2;
        if (ask(mid)) {
            if (res > mid) res = mid;
            right = mid;
        } else left = mid + 1;
    }
    cout << res;
}
