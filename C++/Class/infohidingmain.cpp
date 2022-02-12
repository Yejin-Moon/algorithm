#include <iostream>
#include "infohiding.h"
#include "infohiding.cpp"
using namespace std;

int main()
{
    AAA a1;
    int res = a1.getNum();
    a1.setNum(res);

    return 0;
}