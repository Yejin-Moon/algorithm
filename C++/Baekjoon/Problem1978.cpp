#include <iostream>
using namespace std;

int cnt=0;
void Prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0) return;
    }
    cnt++;
    return;
}

int main()
{
    int n;
    cin>>n;
    int a;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a!=1) Prime(a);
    }
    cout<<cnt<<'\n';
}