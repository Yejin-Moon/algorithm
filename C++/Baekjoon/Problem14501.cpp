#include <iostream>
using namespace std;

int arr[2][16];
int res[16];

int big(int a, int b)
{
    return a>b ? a:b;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[0][i] = a;
        arr[1][i] = b;
    }

    int d;
    for(int i=n-1; i>=0; i--)
    {
        d = i+arr[0][i];
        if(d>n) res[i] = res[i+1];
        else res[i] = big(res[i+1], res[d]+arr[1][i]);
    }
    cout<<res[0];
}