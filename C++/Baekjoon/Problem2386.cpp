#include <iostream>
#include <string>

using namespace std;

int main() {
    while (1) {
        char c;
        int res = 0;
        cin >> c;
        if (c == '#') break;
        cin.ignore();
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c || s[i] == char(c - 'a' + 'A')) {
                res++;
            }
        }
        cout << c << " " << res << '\n';
    }
}
