#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int res = 10;
    char prev = s[0];
    for (int i = 1; i < s.length(); i++) {
        if (prev != s[i]) res += 10;
        else res += 5;
        prev = s[i];
    }
    cout << res;
}
