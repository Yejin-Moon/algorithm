#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i, tmpres = 0;
        while (tmp > 1) {
            if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9) {
                tmpres++;
            }
            tmp = tmp / 10;
        }
        res += tmpres;
    }
    cout << res;
}
