#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int maxcnt = 0;

    vector<int> res;
    for (int i = 0; i <= N; i++) { // 두번째수
        vector<int> tmp;
        tmp.push_back(i);
        int nextnum = N - i;
        tmp.push_back(nextnum);
        while (1) {
            nextnum = tmp[tmp.size() - 2] - tmp.back();
            if (nextnum < 0) break;
            tmp.push_back(nextnum);
        }
        if (tmp.size() > maxcnt) {
            res = tmp;
            maxcnt = tmp.size();
        }
    }
    cout << maxcnt + 1 << '\n';
    cout << N << " ";
    for (auto i: res) {
        cout << i << ' ';
    }
}
