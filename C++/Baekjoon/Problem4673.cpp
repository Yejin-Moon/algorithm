#include <iostream>
using namespace std;

int s(int n)
{
    int sum = n;
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}

int main()
{
    bool arr[10001] = {false,};
    for(int i=1; i<10001; i++)
    {
        int r = s(i);
        if(r<10001) arr[r] = true;
    }

    for(int i=1; i<10001; i++)
    {
        if(!arr[i]) cout<<i<<'\n';
    }

    return 0;
}