#include <iostream>
using namespace std;

void selectionsort_loop(int arr[], int n)
{
    for(int i=0; i<n-1; ++i)
    {
        int min = i;
        for(int j=i+1; j<n; ++j)
        {
            if(arr[j]<arr[min]) min=j;
        }
        int tmp=arr[min];
        arr[min]=arr[i];
        arr[i]=tmp;
    }
}

int fact(int n)
{
    if(n<=1) return 1; //base part
    else return n*fact(n-1); //inductive part
}

//거듭제곱연산의 재귀/반복

int iterativePower(int x, int n)
{
    int ret = 1;
    for(int i=0; i<n; i++)
    {
        ret=ret*x;
    }
    return ret;
}

int recursivePower(int x, int n)
{
    if(n==0) return 1;
    if(n==1) return x;

    return x*recursivePower(x,n-1);
}

int main()
{

}