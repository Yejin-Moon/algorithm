#include <iostream>

using namespace std;

int arr[3] = {300, 60, 10};

int main() {
    int N;
    cin >> N;
    if (N % 10 != 0) cout << "-1";
    else {
        for (int i = 0; i < 3; i++) {
            cout << N / arr[i] << " ";
            N -= ((N / arr[i] * arr[i]));
        }
    }
}
