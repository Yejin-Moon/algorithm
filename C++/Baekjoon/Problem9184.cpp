#include <iostream>

using namespace std;

int arr[52][52][52];

int recur(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return recur(20, 20, 20);
    if (arr[a][b][c]) return arr[a][b][c];
    if (a < b && b < c) {
        arr[a][b][c] = recur(a, b, c - 1) + recur(a, b - 1, c - 1) - recur(a, b - 1, c);
        return arr[a][b][c];
    }
    arr[a][b][c] = recur(a - 1, b, c) + recur(a - 1, b - 1, c) + recur(a - 1, b, c - 1) - recur(a - 1, b - 1, c - 1);
    return arr[a][b][c];
}

int main() {

    while (1) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << recur(a, b, c) << '\n';
    }
    return 0;
}
