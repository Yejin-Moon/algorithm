#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int h,w,p;
        cin>>h>>w>>p;
        int a,b;
        a = p%h;
        b = p/h+1;
        if(p%h==0)
        {
            a = h;
            b = b-1;
        }

        cout<<a*100+b<<'\n';
    }
}