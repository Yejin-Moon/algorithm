#include <iostream>
using namespace std;

int main()
{
    int mins=101, minm=101, sums=0, summ=0;
    for(int i=0; i<6; i++)
    {
        if(i<4)
        {
            int a;
            cin>>a;
            if(mins>a) mins=a;
            sums+=a;
        }
        else
        {
            int b;
            cin>>b;
            if(minm>b) minm=b;
            summ+=b;
        }
    }
    cout<<(sums-mins)+(summ-minm);
}