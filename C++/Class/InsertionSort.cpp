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

    for(int b=0; b<n; b++)
    {
        for(int j=1; j<n; j++)
        {
            int s = j-1;
            while(arr[j]<arr[s])
            {
                if(s<0) break;
                swap(arr[j],arr[s]);
                s--;
            }
        }
    }

    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}