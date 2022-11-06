#include <iostream>
using namespace std;

int main()
{
    int bigp=0, bigs=0;
    for(int i=1; i<=5; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=a+b+c+d;
        if(sum>bigs) 
        {
            bigs=sum;
            bigp=i;
        }
    }
    cout<<bigp<<' '<<bigs;
}