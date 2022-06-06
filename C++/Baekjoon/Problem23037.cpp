#include <iostream>
using namespace std;

int five(int a, int n);

int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n>0)
    {
        sum+=five(n%10,5);
        n/=10;
    }
    cout<<sum;
}

int five(int a, int n)
{
    if(n==1) return a;
    else return five(a,n-1)*a;
}