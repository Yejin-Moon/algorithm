#include <iostream>
using namespace std;

void quickSort(int arr[],int left, int right)
{
    if(left<right)
    {
        int p=left, i=left+1, j=right;//피봇,왼쪽끝,오른쪽끝
        while(i<=j) //교차여부확인
        {
            while(arr[i]<=arr[p]) i++; //피봇보다 작을때
            while(arr[j]>arr[p]) j--; //피봇보다 클때

            if(i<j) //교차하지 않음 = 교환가능
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        //교차하면 피봇을 가운데로 위치시킴
        int tmp=arr[p];
        arr[p]=arr[j];
        arr[j]=tmp;

        quickSort(arr,left,j-1);//피봇은 정렬됐으니까 제외(j-1)
        quickSort(arr,j+1,right);
    }
}