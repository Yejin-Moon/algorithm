#include <iostream>
using namespace std;

int *origin;
int on;

void QuickSort(int *arr, int n)
{
    int pivot = 0, left=0;
    int right = n;
    if(n<=1)
    {
        return;
    }

    while (1)
    {
        for(left++; (left<n)&&(arr[0] >= arr[left]); left++);
        for(right--; (right>0)&&(arr[0]< arr[right]);right--);
        
        if(left<right)
        {
            swap(arr[right], arr[left]);
        }
        else
        {
            break;
        }
    }

    swap(arr[right], arr[pivot]);
    QuickSort(arr,right);
    QuickSort(arr+left, n-left);

}

int main()
{
    int arr[6] = {6,5,4,3,2,1};
    origin = arr;
    on = 6;
    QuickSort(arr,on);

    for(int i=0; i<on; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}