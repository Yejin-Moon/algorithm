#include <iostream>
using namespace std;

int main()
{
    int cnt=0;
    int n;
    cin>>n;
    int arr[1001]={0};
    int arr2[1001]={0};
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1; i<=n; i++)
    {
        int min=0;
        for(int j=0; j<i; j++)
        {
            if(arr[i]>arr[j])  
            {
                if(min<arr2[j])
                {
                    min = arr2[j];
                }
            }
        }
        arr2[i] = min+1;
        if(cnt<arr2[i])
        {
            cnt = arr2[i];
        }
    }
    cout<<cnt;
}