#include <iostream>

using namespace std;
int arr[81];

int main() {
    int A, B, C, max = 0;
    cin >> A >> B >> C;
    for (int i = 1; i <= A; i++) {
        for (int j = 1; j <= B; j++) {
            for (int k = 1; k <= C; k++) {
                arr[i + j + k]++;
                if (arr[i + j + k] > max) max = arr[i + j + k];
            }
        }
    }
    for (int i = 1; i <= 80; i++) {
        if (arr[i] == max) {
            cout << i;
            break;
        }
    }
}
