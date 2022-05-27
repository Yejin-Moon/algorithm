#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int small=0;
    int sum=0;
    bool flag = false;

    for(int i=n; i<=m; i++)
    {
        if(sqrt(i)==int(sqrt(i)))
        {
            if(flag==false)
            {
                small=i;
                flag=true;
            }
            sum+=i;
        }
    }

    if(flag)
    {
        cout<<sum<<'\n';
        cout<<small<<'\n';
    }
    else cout<<"-1";
}