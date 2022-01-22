#include <iostream>
#include "Point.h"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Point.cpp"
using namespace std;

int main()
{
    Point pos1;
    if(!pos1.InitMembers(-2,4))
        cout<<"Init Failed!"<<endl;
    if(!pos1.InitMembers(2,4))
        cout<<"Init Failed!"<<endl;

    Point pos2;
    if(!pos2.InitMembers(5,9))
        cout<<"Init Failed!"<<endl;

    Rectangle rec;
    if(!rec.InitMembers(pos2,pos1))
        cout<<"Rectangle Init Failed!"<<endl;

    if(!rec.InitMembers(pos1, pos2))
        cout<<"Rectangle Init Failed!"<<endl;

    rec.ShowRecInfo();
    return 0;
}