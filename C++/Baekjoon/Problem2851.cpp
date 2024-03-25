#include <iostream>

using namespace std;

int abs(int a) {
    if (a < 0) return -a;
    else return a;
}

int arr[10];

int main() {
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int tmp = 0, max = 0, diff = 100;
    for (int i = 0; i < 10; i++) {
        tmp += arr[i];
        if (abs(100 - tmp) <= diff) {
            if (abs(100 - tmp) == diff) {
                if (tmp > max) max = tmp;
            } else max = tmp;
            diff = abs(100 - tmp);
        }
    }
    cout << max;
}
