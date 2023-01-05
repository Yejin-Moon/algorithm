#include <iostream>
#include <algorithm>
using namespace std;

int arr[500001];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}