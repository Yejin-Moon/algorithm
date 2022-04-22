#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int* arr = new int[n];
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        arr[i] = a;
    }
    int cnt=0;
    while(k>0)
    {
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i]>k) continue;
            while(arr[i]<=k)
            {
                k=k-arr[i];
                cnt++;
            }
        }
    }
    cout<<cnt<<'\n';
}