#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[50001]={0,};
    arr[1]=1;
    int n;
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        arr[i]=arr[1]+arr[i-1];
        for(int j=2; j*j<=i;j++)
        {
            arr[i] = min(arr[i],1+arr[i-j*j]);
        }
    }
    cout<<arr[n];
}