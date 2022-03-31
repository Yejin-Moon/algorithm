#include <iostream>
using namespace std;

int *origin;
int on;

void QuickSort(int *base, int n);
void ViewArr(int *arr, int n);
int main()
{
    int arr[5] = {5,4,3,2,1};
    origin = arr;
    on = 5;
    ViewArr(arr, 5);
    QuickSort(arr, 5);
    ViewArr(arr, 5);
    return 0;
}

void PrintSpace(int n);
void QuickSort(int *base, int n)
{
    int pivot = 0;
    int left = 0, right = 0;

    if(n <= 1)
    {
        return;
    }
    left = 0;
    right = n;

    while(1)
    {
        for(left++; (left<n)&&(base[0] >= base[left]); left++);
        for(right--; (right>0)&&(base[0]<base[right]); right--);

        if(left<right)
        {
            swap(base[left], base[right]);
            PrintSpace(base-origin);
            ViewArr(base, n);
        }
        else
        {
            break;
        }
    }

    swap(base[0],base[right]);
    PrintSpace(base-origin);
    ViewArr(base, n);

    QuickSort(base, right);
    QuickSort(base+left, n-left);
}

void PrintSpace(int n)
{
    int i=0;
    for(i=0; i<n; i++)
    {
        printf("    ");
    }
}

void ViewArr(int *arr, int n)
{
    int i=0;
    for(i=0; i<n; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}