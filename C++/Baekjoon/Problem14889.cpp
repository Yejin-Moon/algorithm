#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int arr[21][21];

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }
    int min = 987654321;
    int subarr[N + 1];

    fill_n(subarr, N + 1, 1);
    for (int i = 1; i <= N / 2; i++) {
        subarr[i] = 0;
    }

    do {
        vector<int> v;
        vector<int> v2;
        for (int i = 1; i <= N; i++) {
            if (subarr[i] == 0) {
                v.push_back(i);
            } else v2.push_back(i);
        }
        int tmpa = 0, tmpb = 0;
        for (int i = 0; i < N / 2 - 1; i++) {
            int a = v[i];
            int a2 = v2[i];
            for (int j = i + 1; j < N / 2; j++) {
                int b = v[j];
                int b2 = v2[j];
                tmpa += arr[a][b] + arr[b][a];
                tmpb += arr[a2][b2] + arr[b2][a2];
            }
        }
        int tmp = abs(tmpa - tmpb);
        if (tmp < min) min = tmp;
    } while (next_permutation(subarr + 1, subarr + N + 1));
    cout << min;
}
