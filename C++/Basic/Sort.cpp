#include <iostream>
using namespace std;
/*
//버블
int main()
{
    int arr[5] = {5,4,3,2,1};
    int len = sizeof(arr)/sizeof(int); //배열 크기
    for(int i=0; i<len; i++) //요소 개수만큼 반복
    {
        for(int j=0; j<len-i-1; j++) //배열 안을 하나하나 비교
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(auto i:arr)
    {
        cout<<i<<" "; // 1 2 3 4 5
    }
}
*/

/*
//선택 정렬
int main()
{
    int arr[5] = {5,4,3,2,1};
    int len = sizeof(arr)/sizeof(int); //배열 크기
    for(int i=0; i<len; i++) //요소 개수만큼 반복
    {
        int smallidx = i;
        for(int j=i+1; j<len; j++)
        {
            if(arr[smallidx]>arr[j]) smallidx=j;
        }
        swap(arr[i],arr[smallidx]);
    }
    for(auto i:arr)
    {
        cout<<i<<" "; // 1 2 3 4 5
    }
}
*/

/*
//삽입 정렬
int main()
{
    int arr[5] = {5,4,3,2,1};
    int len = sizeof(arr)/sizeof(int); //배열 크기
    int i,j,key;
    for(i=1; i<len; i++) //요소 개수만큼 반복
    {
        key = arr[i];
        for(j=i-1; j>=0 && arr[j]>key; j--) //자기 위치를 찾을때까지
        {
            arr[j+1] = arr[j];//옆으로 민다
        }
        arr[j+1] = key;
    }
    for(auto i:arr)
    {
        cout<<i<<" "; // 1 2 3 4 5
    }
}
*/
