#include <iostream>

using namespace std;

int sum(int a)
{
    int sres = 0;
    for(int k = 0;k<=a;k++)
    {
        sres = sres+k;
    }
    return sres;
}

int sum(int start, int end)
{
    int res = 0;
    for(int i = start;i<=end;i++)
    {
        res = res + i;
    }
    return res;
}

int main()
{
    cout<<sum(3,5)<<endl;
    cout<<sum(10)<<endl;
    cout<<sum(2,3)<<endl;
}