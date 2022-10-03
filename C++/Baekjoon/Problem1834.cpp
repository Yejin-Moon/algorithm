#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long res=0;
    for(long long i=1; i<n; i++) res+=(n+1)*i;
    cout<<res;
}