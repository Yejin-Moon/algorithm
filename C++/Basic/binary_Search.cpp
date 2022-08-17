#include <iostream>
using namespace std;
//반복
int binarySearch(int arr[], int size, int key)
{
    int low=0, high = size-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

//재귀
int binarySearch_rec(int arr[],int low, int high, int key)
{
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) return binarySearch_rec(arr,low,mid-1,key);
    else return binarySearch_rec(arr,mid+1,high,key);
}