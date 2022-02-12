#include <iostream>
#include "infohiding.h"
using namespace std;

void AAA::setNum(int n)
{
    if(n<0 || n>100)
    {
        cout<<"error"<<endl;
        return;
    }
    num=n;
}

int AAA::getNum()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    return a;
}