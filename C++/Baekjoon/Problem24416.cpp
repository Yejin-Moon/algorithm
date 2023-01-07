#include <iostream>
using namespace std;

int reccnt=1, dpcnt=0;
int arr[50];

int recfib(int n)
{
    if(n==1 || n==2) return 1;
    else 
    {
        reccnt++;
        return recfib(n-1)+recfib(n-2);
    }
}

int dpfib(int n)
{
    for(int i=3; i<=n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        dpcnt++;
    }
    return arr[n];
}

int main()
{
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    int n;
    cin>>n;
    recfib(n);
    dpfib(n);
    cout<<reccnt<<" "<<dpcnt;
}