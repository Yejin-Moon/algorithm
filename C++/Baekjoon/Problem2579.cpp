#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    int cnt=v[n-1];
    int one,two;
    for(int i=n-2; i>=0; i=-3)
    {
        sort(v[i],v[i-2]);
        cout<<v[i]<<' '<<v[i-1]<<' '<<v[i-2];

    }
    //cout<<cnt<<'\n';
}