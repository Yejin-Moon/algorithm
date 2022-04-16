#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[5] = {4,1,5,2,6};
    int arr2[5] = {1,3,7,9,4};

    sort(arr1,arr1+5);


    for(auto i:arr2)
    {
        int flag = 0;
        int right = sizeof(arr1)/sizeof(int)-1;
        int left = 0;
        while(left<=right)
        {
            int mid = (right+left)/2;
            if(arr1[mid]==i) 
            {
                flag=1;
                cout<<"1"<<'\n';
                break;
            }
            else if(i>arr1[mid]) left=mid+1;
            else if(i<arr1[mid]) right = mid-1;
        }
        if(flag==0) cout<<"0"<<'\n';
    }
}