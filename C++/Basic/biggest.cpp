#include <iostream>
using namespace std;

int big(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int big(int arr[], int c)
{
    int biggest = arr[0];
    for(int i =1;i<c;i++)
    {
        if(biggest<arr[i])
        {
            biggest = arr[i];
        }
    }
    return biggest;
}

int main()
{
    int array[5] = {5,4,3,2,1};
    cout<<big(2,3)<<endl;
    cout<<big(array,5)<<endl;

    return 0;
}