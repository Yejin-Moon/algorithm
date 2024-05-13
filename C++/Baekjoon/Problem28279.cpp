#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    deque<int> dq;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int com;
        cin >> com;
        if (com == 1 || com == 2) {
            int num;
            cin >> num;
            if (com == 1) dq.push_front(num);
            else dq.push_back(num);
        } else if (com == 3) {
            if (dq.empty()) cout << "-1\n";
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if (com == 4) {
            if (dq.empty()) cout << "-1\n";
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if (com == 5) cout << dq.size() << '\n';
        else if (com == 6) {
            if (dq.empty()) cout << "1\n";
            else cout << "0\n";
        } else if (com == 7) {
            if (dq.empty()) cout << "-1\n";
            else cout << dq.front() << '\n';
        } else {
            if (dq.empty()) cout << "-1\n";
            else cout << dq.back() << '\n';
        }
    }
}
