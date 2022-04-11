#include <iostream>
using namespace std;

int cnt=1;

int prime(int n)
{
    if(n==1) return 0;
    int flag = 0;
    for(int i=2; i<n; i++)
    {
        flag = 0;
        if(n%i==0) 
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0) 
    {
        if(cnt==1) cnt = n;
        return n;
    }
    return 0;
}

int main()
{
    int sum=0, small = 0;

    int s,e;
    cin>>s>>e;
    for(int i=s; i<=e; i++)
    {
        sum+=prime(i);
    }
    if(sum==0) cout<<-1;
    else 
    {
        cout<<sum<<endl;
        cout<<cnt<<endl;
    }
}