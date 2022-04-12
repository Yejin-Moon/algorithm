#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[8];
    int idx[8];
    for(int i=0; i<8; i++)
    {
        cin>>arr[i];
        idx[i]=arr[i];
    }
    sort(arr,arr+8);
    int sum=0;
    for(int i=7; i>2; i--)
    {
        sum+=arr[i];
    }
    cout<<sum<<'\n';
    for(int i=0; i<8; i++)
    {
        for(int j=7; j>2; j--)
        {
            if(idx[i]==arr[j]) cout<<i+1<<' ';
        }
    }
}