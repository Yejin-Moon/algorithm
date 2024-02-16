#include <iostream>

using namespace std;

string board[5];
char number[10][5][3] = {
        {
                {'*', '*', '*'},
                {'*', ' ', '*'},
                {'*', ' ', '*'},
                {'*', ' ', '*'},
                {'*', '*', '*'}
        },
        {
                {' ', ' ', '*'},
                {' ', ' ', '*'},
                {' ', ' ', '*'},
                {' ', ' ', '*'},
                {' ', ' ', '*'}
        },
        {
                {'*', '*', '*'},
                {' ', ' ', '*'},
                {'*', '*', '*'},
                {'*', ' ', ' '},
                {'*', '*', '*'}
        },
        {
                {'*', '*', '*'},
                {' ', ' ', '*'},
                {'*', '*', '*'},
                {' ', ' ', '*'},
                {'*', '*', '*'}
        },
        {
                {'*', ' ', '*'},
                {'*', ' ', '*'},
                {'*', '*', '*'},
                {' ', ' ', '*'},
                {' ', ' ', '*'}
        },
        {
                {'*', '*', '*'},
                {'*', ' ', ' '},
                {'*', '*', '*'},
                {' ', ' ', '*'},
                {'*', '*', '*'}
        },
        {
                {'*', '*', '*'},
                {'*', ' ', ' '},
                {'*', '*', '*'},
                {'*', ' ', '*'},
                {'*', '*', '*'}
        },
        {
                {'*', '*', '*'},
                {' ', ' ', '*'},
                {' ', ' ', '*'},
                {' ', ' ', '*'},
                {' ', ' ', '*'}
        },
        {
                {'*', '*', '*'},
                {'*', ' ', '*'},
                {'*', '*', '*'},
                {'*', ' ', '*'},
                {'*', '*', '*'}
        },
        {
                {'*', '*', '*'},
                {'*', ' ', '*'},
                {'*', '*', '*'},
                {' ', ' ', '*'},
                {'*', '*', '*'}
        },
};

int main() {
    for (int i = 0; i < 5; i++) getline(cin, board[i]);

    bool flag = false;
    int sum = 0;
    for (int i = 0; i < board[0].size(); i += 4) {
        int n;
        for (n = 0; n < 10; n++) {
            bool flag2 = true;
            int cnt = 0;
            for (int x = 0; x < 5; x++) {
                for (int y = 0; y < 3; y++) {
                    if (board[x][i + y] == '*') cnt++;
                    if (board[x][i + y] != number[n][x][y]) flag2 = false;
                }
            }
            if (cnt == 0) break;
            if (flag2) {
                sum = sum * 10 + n;
                break;
            }
        }
        if (n == 10) {
            flag = true;
            break;
        }
    }
    if (sum % 6 != 0 || flag) cout << "BOOM!!\n";
    else cout << "BEER!!\n";
}