#include <iostream>
using namespace std;
int arr[3];

int main()
{
    cin>>arr[0]>>arr[1]>>arr[2];
    for(int i=0; i<2; i++)
    {
        for(int j=i; j<3; j++)
        {
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        }
    }
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}