#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    int res=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            res += v[j];
        }
    }
    cout<<res<<'\n';
}