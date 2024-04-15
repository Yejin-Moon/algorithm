#include <iostream>

using namespace std;

int main() {
    int N, res = 0;
    bool flag = false;
    cin >> N;
    string s;
    cin >> s;
    for (int i = 0; i < N; i++) {
        if (s[i] == 'S') res++;
        else {
            flag = true;
            res++;
            i += 1;
        }
    }
    if (s[N - 1] != 'S') res++;
    else if (flag) res++;
    cout << res;
}
