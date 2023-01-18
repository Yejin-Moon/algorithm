#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int total = a+b;
    if(total>=c*2) cout<<total-c*2;
    else cout<<total;
}