#include <iostream>
using namespace std;

int main()
{
    long n;
    cin>>n;

    for(long i=1; i<=n; i++)
    {
        long a=i;
        long sum=i;
        while(a>0)
        {
            sum+=a%10;
            a=a/10;
        }
        if(sum==n) 
        {
            cout<<i;
            goto EXIT;
        }
    }
    cout<<"0";
EXIT:
    return 0;
}