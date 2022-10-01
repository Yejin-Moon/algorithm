#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;

    int h=C/60;
    int m=C%60;

    int rh = (A+h)%24;
    rh+=(B+m)/60;
    if(rh==24) rh=0;
    int rm = (B+m)%60;

    cout<<rh<<" "<<rm;
}