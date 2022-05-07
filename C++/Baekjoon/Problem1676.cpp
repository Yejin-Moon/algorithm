#include <iostream>
using namespace std;

int main()
{
    int n;
    int m5=0;
    int m25=0;
    int m125=0;

    cin>>n;

    m5=n/5;
    m25=n/25;
    m125=n/125;

    cout<<m5+m25+m125;
}