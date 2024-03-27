#include <iostream>

using namespace std;

int arr[1001];

bool func(int num) {
    for (int a = 1; a <= num; a++) {
        for (int b = 1; b <= num; b++) {
            for (int c = 1; c <= num; c++) {
                if (num == arr[a] + arr[b] + arr[c]) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        arr[i] = (i * (i + 1)) / 2;
    }

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        bool res = func(num);
        if (res) cout << "1\n";
        else cout << "0\n";
    }
}
