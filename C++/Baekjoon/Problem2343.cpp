#include <iostream>

using namespace std;
int N, M;
int arr[100001];

bool ask(long long mid) {
    int cnt = 1, sum = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] > mid) return false; // mid 값이 너무 작아서 강의 한 개도 담을 수 없으므로 mid 값을 증가시켜야 함. 
        if (sum + arr[i] > mid) {
            cnt++;
            sum = 0;
        }
        sum += arr[i];
    }
    return cnt <= M;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long right = 1000000000; // 강의 수(10^5)와 강의 길이(10^4)의 최대값의 곱
    long long left = 0;
    long long ans, mid;

    while (left < right) {
        mid = (left + right) / 2;
        if (ask(mid)) {
            ans = mid;
            right = mid;
        } else left = mid + 1;
    }
    cout << ans;
}
