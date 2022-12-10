#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res = 0, st=1;
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            flag=false;
            continue;
        }
        if(flag) st++;
        else if(!flag) 
        {
            flag=true;
            st=1;
        }
        res+=st;
    }
    cout<<res;
}