#include <iostream>

using namespace std;

int arr[101];

int main() {
    int N, res = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int pre = arr[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] < pre) pre = arr[i];
        else {
            int tmp = (arr[i] - (pre - 1));
            pre = arr[i] - tmp;
            res += tmp;
        }
        if (pre <= 0) continue;
    }
    cout << res;
}
