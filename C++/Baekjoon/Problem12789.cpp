#include <iostream>
#include <stack>

using namespace std;

int arr[1001];

int main() {
    stack<int> st;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    int std = 1;
    int idx = 0;
    while (1) {
        if (idx >= N) break;
        if (arr[idx] == std) {
            std++;
            if (!st.empty() && st.top() == std) {
                st.pop();
                std++;
            }
            idx++;
        } else if (!st.empty() && st.top() == std) {
            st.pop();
            std++;
        } else {
            st.push(arr[idx]);
            idx++;
        }
    }
    while (!st.empty()) {
        if (st.top() != std) break;
        if (st.top() == std) {
            st.pop();
            std++;
        }
    }
    if (std == N + 1) cout << "Nice";
    else cout << "Sad";
}
