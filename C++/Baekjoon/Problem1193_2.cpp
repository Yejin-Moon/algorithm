#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int line = 1;
    while (n > line) { // 입력받은 인덱스가 어느 위치에 있는지 찾기
        n -= line;
        line += 1;
    }

    int a, b;
    if (line % 2 == 1) { // 홀수번째 줄에 있을 때
        a = line - n + 1;
        b = n;
    } else { // 짝수번째 줄에 있을 때
        a = n;
        b = line - n + 1;
    }
    cout << a << "/" << b;
}
