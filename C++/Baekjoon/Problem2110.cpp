#include <iostream>
#include <algorithm>
using namespace std;

int N, C;
long arr[200001];

bool ask(long mid) {
    long minval = arr[0];
    long maxval = arr[0];
    
    int cnt = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < minval) minval = arr[i];
        if (arr[i] > maxval) maxval = arr[i];

        if (maxval - minval >= mid) {
            cnt++;
            minval = arr[i];
            maxval = arr[i];
        }
    }

    return cnt >= (C-1);
}

int main() {

    cin >> N >> C;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    sort(arr,arr+N);
    
    long right = arr[N-1]-arr[0]+1;
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
