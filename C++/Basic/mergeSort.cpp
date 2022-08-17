#include <iostream>
using namespace std;

void mergeSort(int arr[], int size)
{
    if(size==1) return;

    int mid=size/2;
    mergeSort(arr,mid);
    mergeSort(arr+mid,size-mid);

    int* buf = new int[size];//임시 저장
    int i=0, j=mid, k=0;
    while(i<mid&&j<size) //비교해야할 원소 남아있음
        buf[k++] = arr[i]<arr[j] ? arr[i++]:arr[j++];
    while(i<mid) //왼쪽배열에서 남음
        buf[k++]=arr[i++];
    while(j<size) //오른쪽 배열이 남음
        buf[k++]=arr[j++];

    for(i=0; i<size; ++i)//정렬된 값으로 덮어쓰기
        arr[i]=buf[i];

    delete buf;
}
int main()
{

}