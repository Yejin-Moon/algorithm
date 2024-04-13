#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> q;
    int N, one, res = 0;
    cin >> N;
    if (N == 1) {
        cout << "0";
        return 0;
    }
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (i == 0) one = a;
        else q.push(a);
    }
    while (q.top() >= one) {
        int tmp = q.top();
        q.pop();
        res++;
        one++;
        q.push(--tmp);
    }
    cout << res;
}
