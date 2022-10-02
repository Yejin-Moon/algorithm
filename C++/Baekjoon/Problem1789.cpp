#include <iostream>
using namespace std;

int main()
{
    long n;
    cin>>n;
    long sum=0, i=1;
    for(i=1; ; i++)
    {
        if(sum>n) break;
        sum+=i;
    }
    cout<<i-2;
}