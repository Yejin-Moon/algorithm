#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a= 1;
    int ans=0;
    
    while(a<=n)
    {
        int bit = n&a;
        if(bit!=0) ans++;
        a=a<<1;
    }
    cout<<ans;
}