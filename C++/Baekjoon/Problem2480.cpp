#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int a, b, c;
    cin >> a >> b >> c;
    v = {a, b, c};
    sort(v.begin(), v.end());
    a = v[0], b = v[1], c = v[2];
    if (a == b && b == c) cout << a * 1000 + 10000 << endl;
    else if (a == b) cout << a * 100 + 1000 << endl;
    else if (b == c) cout << b * 100 + 1000 << endl;
    else if (a == c) cout << c * 100 + 1000 << endl;
    else cout << c * 100 << endl;
}
