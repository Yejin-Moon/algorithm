#include <iostream>
#include <algorithm>
using namespace std;

int n,m, arr[8], res[8];
bool check[8] = {false};

void func(int cnt)
{
    if(cnt==m)
    {
        for(int i=0; i<m; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(!check[i] && arr[i] != x)
        {
            res[cnt] = arr[i];
            x = res[cnt];
            check[i] = true;
            func(cnt+1);
            check[i] = false;
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    func(0);
}