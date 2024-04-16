#include <iostream>

using namespace std;

int arr[30001];

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int cur = arr[0];
    int tmp = 0, res = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < cur) {
            tmp++;
            if (i == N - 1 && res < tmp) res = tmp;
        } else {
            cur = arr[i];
            if (res < tmp) res = tmp;
            tmp = 0;
        }
    }
    cout << res;
}
