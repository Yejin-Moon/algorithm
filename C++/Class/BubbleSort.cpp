#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int j=0; j<n; j++)
    {
        int a;
        cin>>a;
        arr[j]=a;
    }
    for(int i=0; i<n; i++)
    {
        for(int k=0; k<n-i-1; k++)
        {
            if(arr[k]>arr[k+1])
            {
                swap(arr[k],arr[k+1]);
            }
        }
    }

    for(int q=0;q<n;q++)
    {
        cout<<arr[q]<<" ";
    }
    return 0;
}