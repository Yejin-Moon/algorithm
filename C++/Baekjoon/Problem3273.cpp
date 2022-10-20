#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];

int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    sort(arr, arr+n);
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]+arr[i+1]>x) break;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==x) 
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d",cnt);
}