#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int arr[8]={1,2,3,4,5,6,7,8};
    do{
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }while(next_permutation(arr,arr+n));
}