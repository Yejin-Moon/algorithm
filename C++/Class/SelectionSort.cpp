#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    for(int j=1; j<=n; j++)
    {
        int smallestidx = j-1;
        for(int k=j; k<n; k++)
        {
            if(arr[k]<arr[smallestidx])
            {
                smallestidx = k;
            }
        }
        swap(arr[j-1],arr[smallestidx]);
    }

    for(int m=0; m<n; m++)
    {
        cout<<arr[m]<<" ";
    }
    return 0;
}