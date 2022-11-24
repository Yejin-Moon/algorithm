#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    if(a>b) return true;
    else return false;
}

int main()
{
    vector<int> v;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),comp);
    cout<<v[m-1];
}