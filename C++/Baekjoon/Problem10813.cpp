#include <iostream>

using namespace std;
int arr[101];

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        swap(arr[a], arr[b]);
    }
    for (int i = 1; i <= N; i++) cout << arr[i] << " ";
}
