#include <iostream>
using namespace std;

void plusone(int &a)
{
    a = a+1;
    return;
}

void changepm(int &b)
{
    b = b*-1;
    return;
}

int main()
{
    int v1, v2;
    v1 = 2;
    v2 = -3;
    plusone(v1);
    changepm(v2);
    cout<<v1<<endl;
    cout<<v2<<endl;

    return 0;
}