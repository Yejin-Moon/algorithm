#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;

    int h=C/60;
    int m=C%60;

    int rh = (A+h)%23;
    rh+=(B+m)/60;
    int rm = (B+m)%60;

    cout<<rh<<" "<<rm;
}