#include <iostream>

using namespace std;

int arr[101][101];

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        for (int x = a; x < a + 10; x++) {
            for (int y = b; y < b + 10; y++) {
                arr[x][y] = 1;
            }
        }
    }

    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            if (arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
}
