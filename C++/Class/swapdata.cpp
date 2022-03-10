#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0) : xpos(x), ypos(y)
    { }
    void ShowPosition() const{
        cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
    }
};

template <typename T>
T SwapData(T &num1, T &num2)
{
    T tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
}

int main()
{
    Point p1(20,30);
    Point p2(50,40);
    p1.ShowPosition();
    p2.ShowPosition();
    SwapData(p1,p2);
    p1.ShowPosition();
    p2.ShowPosition();

    return 0;
}