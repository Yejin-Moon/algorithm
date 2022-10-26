#include <iostream>
using namespace std;

int main()
{
    int arr1[3];
    int arr2[3];
    for(int i=0; i<3; i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    cout<<(arr1[0]^arr1[1]^arr1[2])<<" "<<(arr2[0]^arr2[1]^arr2[2]);
}