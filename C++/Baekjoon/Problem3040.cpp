#include <iostream>
using namespace std;

int arr[9];

int main()
{
    int sum=0,idx1,idx2;
    for(int i=0; i<9; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    for(int i=0; i<9; i++)
    {
        sum-=arr[i];
        for(int j=0; j<9; j++)
        {
            if(i==j) continue;
            sum-=arr[j];
            if(sum==100)
            {
                for(int k=0; k<9; k++)
                {
                    if(k==i || k==j) continue;
                    cout<<arr[k]<<'\n';
                }
                return 0;
            }
            else sum+=arr[j];
        }
        sum+=arr[i];
    }
}