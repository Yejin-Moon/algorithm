#include <iostream>
using namespace std;

int main()
{
    int min=0, max=0;
    int n;
    cin>>n;
    int* arr = new int[n+1];
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    //min = max = arr[0];
    for(int i=0; i<n/2; i++)
    {
        for(int j=i; j<n-i; j++)
        {
            if(arr[j]<arr[min]) min=j;
            if(arr[j]>arr[max]) max=j;
        }
        swap(arr[i],arr[min]);
        swap(arr[n-1-i],arr[max]);
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<' ';
    }

    const char *s = "EMMA";
    printf("%c",*s);
}