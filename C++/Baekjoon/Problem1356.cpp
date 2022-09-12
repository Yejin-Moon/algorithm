#include <iostream>
using namespace std;

int arr[11];
int main()
{
    bool flag = false;
    int n;
    cin>>n;
    int idx=0;
    while(n>0)
    {
        arr[idx]=n%10;
        n/=10;
        idx++;
    }
    for(int i=0; i<idx; i++)
    {
        int a=1,b=1;
        for(int j=0; j<=i; j++)
        {
            a*=arr[j];
        }
        for(int j=i+1; j<idx; j++)
        {
            b*=arr[j];
        }
        if(a==b)
        {
            flag=true;
            break;
        }
    }
    if(flag&&idx!=1) cout<<"YES";
    else cout<<"NO";
}