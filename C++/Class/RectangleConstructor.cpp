#include <iostream>
#include "conPoint.h"
#include "conRectangle.h"
#include "conPoint.cpp"
#include "conRectangle.cpp"
using namespace std;

int main()
{
    Rectangle rec(1,1,5,5);
    rec.ShowRecInfo();
    return 0;
}