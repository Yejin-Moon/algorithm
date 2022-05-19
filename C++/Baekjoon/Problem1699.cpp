#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100001];
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        arr[i]=i;
        for(int j=1; j*j<=i; j++)
        {
            arr[i] = min(arr[i],arr[i-j*j]+1);
        }
    }
    cout<<arr[n]<<endl;
}