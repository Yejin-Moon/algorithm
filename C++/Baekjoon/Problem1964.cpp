#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int f=7;
    int sum=5;
    for(int i=1; i<n; i++)
    {
        sum+=f;
        f+=3;
        sum=sum%45678;
    }
    cout<<sum;
}