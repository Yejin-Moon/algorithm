#include <iostream>
#include <algorithm>

using namespace std;

int arr[3];

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    if (N == 2) arr[2] = arr[1];
    for (int i = 1; i <= arr[0]; i++) {
        if (arr[0] % i == 0 && arr[1] % i == 0 && arr[2] % i == 0) cout << i << '\n';
    }
}
