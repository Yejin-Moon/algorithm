#include <iostream>
using namespace std;

int main()
{
    long a,b;
    cin>>a>>b;
    if(b>a) swap(a,b);
    cout<<((a+b)*(a-b+1))/2;
}