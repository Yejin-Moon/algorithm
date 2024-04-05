#include <iostream>

using namespace std;

int arr[4] = {25, 10, 5, 1};

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int money;
        cin >> money;
        for (int j = 0; j < 4; j++) {
            int tmp = money / arr[j];
            cout << tmp << " ";
            money -= arr[j] * tmp;
        }
    }
}
