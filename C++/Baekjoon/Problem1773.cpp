#include <iostream>

using namespace std;

int arr[101];

int main() {
    int N, C, res = 0;
    cin >> N >> C;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= C; i++) {
        for (int j = 0; j < N; j++) {
            if (i % arr[j] == 0) {
                res++;
                break;
            }
        }
    }
    cout << res;
}
