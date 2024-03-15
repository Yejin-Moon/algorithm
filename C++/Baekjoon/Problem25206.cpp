#include <iostream>
#include <map>

using namespace std;

map<string, double> m{{"A+", 4.5},
                      {"A0", 4.0},
                      {"B+", 3.5},
                      {"B0", 3.0},
                      {"C+", 2.5},
                      {"C0", 2.0},
                      {"D+", 1.5},
                      {"D0", 1.0},
                      {"F",  0.0}};

int main() {
    double res = 0;
    double cnt = 0;
    for (int i = 0; i < 20; i++) {
        string s;
        double d;
        string grade;

        cin >> s >> d >> grade;

        if (grade == "P") continue;

        res += d * m[grade];
        cnt += d;
    }
    res = res / cnt;
    if (cnt == 0) res = 0.0;
    cout.setf(ios::showpoint);
    cout.precision(7);
    cout << res;
}
