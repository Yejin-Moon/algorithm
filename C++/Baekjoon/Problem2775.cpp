#include <iostream>

using namespace std;

int arr[15][15];

int main() {
    int T;
    cin >> T;

    for (int i = 1; i < 15; i++) arr[0][i] = i;
    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }
    for (int TC = 0; TC < T; TC++) {
        int k, n;
        cin >> k >> n;

        cout << arr[k][n] << '\n';
    }
}
