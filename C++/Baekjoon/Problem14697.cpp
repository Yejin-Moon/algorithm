#include <iostream>

using namespace std;

int main() {
    int A, B, C, N;
    cin >> A >> B >> C >> N;
    if (A == 1) {
        cout << "1";
        return 0;
    }
    for (int i = 0; i <= (N / A); i++) {
        int tmp = N - (A * i);
        if (tmp == 0) {
            cout << "1";
            return 0;
        }
        for (int j = 0; j <= (N / B); j++) {
            tmp -= B * j;
            if (tmp == 0) {
                cout << "1";
                return 0;
            }
            tmp = N - (A * i);
            for (int k = 0; k <= (N / C); k++) {
                tmp -= C * k;
                if (tmp == 0) {
                    cout << "1";
                    return 0;
                }
                tmp = N - (A * i) - (B * j);
            }
            tmp = N - (A * i);
        }
    }
    cout << "0";
}
