#include <iostream>

using namespace std;

int arr[31];

int main() {
    for (int i = 0; i < 28; i++) {
        int n;
        cin >> n;
        arr[n]++;
    }
    for (int i = 1; i <= 30; i++) {
        if (arr[i] == 0) cout << i << '\n';
    }
}
