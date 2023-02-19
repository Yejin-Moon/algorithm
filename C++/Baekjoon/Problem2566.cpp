#include <iostream>
using namespace std;

int main()
{
    int biggest = -1;
    int rc=0,rr=0;
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            int a;
            cin>>a;
            if(a>biggest)
            {
                biggest=a;
                rc=i;
                rr=j;
            }
        }
    }
    cout<<biggest<<'\n';
    cout<<rc<<' '<<rr;
}