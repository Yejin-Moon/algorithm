#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a,b,c;
    a=n*(m%10);
    cout<<a<<endl;
    m/=10;
    b=(n*(m%10));
    cout<<b<<endl;
    m/=10;
    c=n*m;
    cout<<c<<endl;
    cout<<a+(b*10)+(c*100);
}