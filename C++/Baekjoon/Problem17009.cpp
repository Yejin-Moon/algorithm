#include <iostream>
using namespace std;

int main()
{
    int A3,A2,A1,tA=0;
    cin>>A3>>A2>>A1;
    tA+=A3*3+A2*2+A1;

    int B3,B2,B1,tB=0;
    cin>>B3>>B2>>B1;
    tB+=B3*3+B2*2+B1;

    if(tA>tB) cout<<"A";
    else if(tA<tB) cout<<"B";
    else cout<<"T";
}