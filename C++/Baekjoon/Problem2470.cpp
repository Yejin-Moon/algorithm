#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int minVal = 2147483647;
    int idx = 0;
    int min1, min2;

    while (idx < N - 1) {
        int low = idx + 1, high = N - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid] + v[idx] == 0) {
                minVal = 0;
                min1 = v[idx];
                min2 = v[mid];
                break;
            } else if (v[mid] + v[idx] < 0) {
                if (abs(v[mid] + v[idx]) < minVal) {
                    minVal = abs(v[mid] + v[idx]);
                    min1 = v[idx];
                    min2 = v[mid];
                }
                low = mid + 1;
            } else {
                if (abs(v[mid] + v[idx]) < minVal) {
                    minVal = abs(v[mid] + v[idx]);
                    min1 = v[idx];
                    min2 = v[mid];
                }
                high = mid - 1;
            }
        }
        idx++;
    }
    cout << min1 << " " << min2;
}
