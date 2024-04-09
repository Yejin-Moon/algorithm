#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int res = 0;
    res = N / 5;
    N -= res * 5;
    while (N % 2 != 0) {
        res--;
        if (res < 0) {
            cout << "-1";
            return 0;
        }
        N += 5;
    }
    res += N / 2;
    cout << res;
}
