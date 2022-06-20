#include <iostream>
using namespace std;
int n;

void printstar(int i)
{
    for(int a=0;a<i;a++) cout<<" ";
    for(int b=0; b<n; b++)
    {
        if(i==0 || (i!=0&&(b==0||b==n-1))) cout<<"*";
        else cout<<" ";
    }
    for(int c=0; c<n+n-3-(i*2); c++) cout<<" ";
    for(int b=0; b<n; b++)
    {
        if(i==0 || (i!=0&&(b==0||b==n-1))) cout<<"*";
        else cout<<" ";
    }
    cout<<'\n';
}

int main()
{
    cin>>n;

    for(int i=0; i<n-1; i++)
    {
        printstar(i);
    }
    //중간줄
    for(int i=0; i<n-1; i++) cout<<" ";
    for(int i=0; i<n*2-1; i++)
    {
        if(i==0 ||i==n*2-2|| i==n-1) cout<<"*";
        else cout<<" ";
    }
    cout<<'\n';
    
    for(int i=n-2; i>=0; i--)
    {
        printstar(i);   
    }
    
}