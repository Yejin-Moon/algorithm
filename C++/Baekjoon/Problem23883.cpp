#include <iostream>
using namespace std;

int arr[10001];

int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        int maxv=arr[0];
        int loc=0;
        for(int j=0; j<n-i; j++)
        {
            if(maxv<arr[j])
            {
                maxv=arr[j];
                loc=j;
            }
        }
        swap(arr[n-i-1],arr[loc]);
        if(n-i-1!=loc) cnt++;
        if(cnt==k) break;
    }
    if(cnt<k) cout<<"-1";
    else for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}