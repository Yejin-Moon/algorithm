#include <iostream>
#include <vector>

using namespace std;

vector<pair<char, char>> v(26);

void preorder(char cur) {
    if (cur == '.') return;

    cout << cur;
    preorder(v[cur - 'A'].first);
    preorder(v[cur - 'A'].second);
}

void inorder(char cur) { // 중간부터
    if (cur == '.') return;

    inorder(v[cur - 'A'].first);
    cout << cur;
    inorder(v[cur - 'A'].second);
}

void postorder(char cur) {
    if (cur == '.') return;

    postorder(v[cur - 'A'].first);
    postorder(v[cur - 'A'].second);
    cout << cur;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char node, left, right;
        cin >> node >> left >> right;
        v[node - 'A'].first = left;
        v[node - 'A'].second = right;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    cout << '\n';
}
