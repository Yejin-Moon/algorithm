#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr)
{
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
    {
        cout<<"Wrong position"<<endl;
        return false;
    }
    upLeft=ul;
    lowRight=lr;
    return true;
}

void Rectangle::ShowRecInfo() const
{
    cout<<"Up Left"<<'['<<upLeft.GetX()<<", ";
    cout<<upLeft.GetY()<<']'<<endl;
    cout<<"Low Right"<<'['<<lowRight.GetX()<<", ";
    cout<<lowRight.GetY()<<']'<<endl<<endl;
}