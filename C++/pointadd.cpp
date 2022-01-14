#include <iostream>
#include <string.h>
using namespace std;

typedef struct __point
{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *re1 = new Point[2];
    Point &res = *re1;
    
    re1->xpos = p1.xpos + p2.xpos;
    re1->ypos = p1.ypos + p2.ypos;

    return res;
}

int main()
{
    Point p1,p2;
    p1.xpos = 1;
    p1.ypos = 2;
    p2.xpos = 2;
    p2.ypos = 4;
    Point re = PntAdder(p1,p2);
    cout<<re.xpos<<endl;
    cout<<re.ypos<<endl;
    return 0;
}