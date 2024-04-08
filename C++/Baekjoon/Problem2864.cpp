#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string min1, min2, max1, max2;
    int len1 = s1.length();
    int len2 = s2.length();

    for (int i = 0; i < len1; i++) {
        if (s1[i] == '6') {
            min1 += '5';
            max1 += '6';
        } else if (s1[i] == '5') {
            min1 += '5';
            max1 += '6';
        } else {
            min1 += s1[i];
            max1 += s1[i];
        }
    }
    for (int i = 0; i < len2; i++) {
        if (s2[i] == '6') {
            min2 += '5';
            max2 += '6';
        } else if (s2[i] == '5') {
            min2 += '5';
            max2 += '6';
        } else {
            min2 += s2[i];
            max2 += s2[i];
        }
    }
    cout << stoi(min1) + stoi(min2) << " " << stoi(max1) + stoi(max2);
}
