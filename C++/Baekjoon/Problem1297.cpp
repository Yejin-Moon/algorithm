#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int len, h, w;
    cin>>len>>h>>w;

    int x,y;
    x=len/sqrt(h*h+w*w)*h;
    y=len/sqrt(h*h+w*w)*w;

    cout<<x<<" "<<y;
}