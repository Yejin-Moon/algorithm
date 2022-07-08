#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long absdiff(int a, int b)
{
    if(a>b) return a-b;
    else return b-a;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    vector<int> temp;
    for(int i=0; i<n; i++)
    {
        int s, b;
        cin>>s>>b;
        v.push_back(make_pair(s,b));
    }
    sort(v.begin(),v.end());
    int iter=1;
    long long small = 1000000005;

    for(int i=1; i<(1<<v.size()); i++)
    {
        long long rs=1, rb=0;
        for(int j=0; j<v.size(); j++)
        {
            if(i&(1<<j))
            {
                rs*=v[j].first;
                rb+=v[j].second;
            }
        }
        if(small>absdiff(rs,rb)) small = absdiff(rs,rb);
    }
    cout<<small;
}