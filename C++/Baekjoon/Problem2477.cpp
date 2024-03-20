#include <iostream>
#include <algorithm>

using namespace std;

int arr[6][2];

int main() {
    int N, h = 0, w = 0, idx = 0;
    cin >> N;
    for (int i = 0; i < 6; i++) {
        int a, b;
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
        if (a == 1 || a == 2) w = max(w, b);
        else if (a == 3 || a == 4) h = max(h, b);
    }
    while (1) {
        if ((arr[idx % 6][1] == h && arr[(idx + 1) % 6][1] == w) ||
            arr[(idx + 1) % 6][1] == h && arr[idx % 6][1] == w) {
            int mh = arr[((idx + 1) + 2) % 6][1];
            int mw = arr[((idx + 1) + 3) % 6][1];
            cout << ((h * w) - (mh * mw)) * N;
            break;
        }
        idx++;
    }
}
