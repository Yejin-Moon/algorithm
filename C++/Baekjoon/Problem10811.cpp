#include <iostream>
#include <stack>

using namespace std;
int arr[101];

int main() {
    stack<int> s;
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) arr[i] = i;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++) s.push(arr[j]);
        for (int j = a; j <= b; j++) {
            int tmp = s.top();
            arr[j] = tmp;
            s.pop();
        }
    }
    for (int i = 1; i <= N; i++) cout << arr[i] << " ";
}
