#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int total = N + M;

    for (int i = 1; i < total; i++) {
        if (total % i == 0 && 2 * (i + total / i) - 4 == N) {
            int a = i, b = total / i;
            if (a < b) swap(a, b);
            cout << a << " " << b;
            return 0;
        }
    }
}
