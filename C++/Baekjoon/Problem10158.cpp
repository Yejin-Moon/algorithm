#include <iostream>

using namespace std;

int main() {
    int W, H, X, Y, T;
    cin >> W >> H >> X >> Y >> T;
    X += T;
    Y += T;
    X %= (2 * W);
    Y %= (2 * H);
    if (X > W) X = 2 * W - X;
    if (Y > H) Y = 2 * H - Y;
    cout << X << " " << Y;
}
