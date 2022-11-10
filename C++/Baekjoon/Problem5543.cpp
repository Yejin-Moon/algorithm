#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sb=2000;
    int sd=2000;
    for(int i=0; i<5; i++)
    {
        int a;
        cin>>a;
        if(i<3&&a<sb) sb=a;
        else if(i>=3&&a<sd) sd=a;
    }
    cout<<sb+sd-50;
}