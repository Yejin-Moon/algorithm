#include <iostream>
using namespace std;

int main()
{
    int r;
    float CArea, Cference;
    cout << "Enter the radius : ";
    cin >> r;
    CArea = r*r*(float)3.14;
    Cference = 2*(float)3.14*r;
    cout << "circle area:"<< CArea << endl;
    cout << "circumference:"<< Cference << endl;
    return 0;
}