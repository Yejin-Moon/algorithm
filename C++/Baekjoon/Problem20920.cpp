#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

map<string,int> smap;
bool cmp(string a, string b)
{
    if(a.size() == b.size()&&smap[a]==smap[b]) return a<b;
    else if(smap[a]==smap[b]) return a.size() > b.size();
    return smap[a]>smap[b];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> v;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s.length()<m) continue;
        if(smap.find(s)==smap.end())
        {
            smap[s]=0;
            v.push_back(s);
        }
        smap[s]++;
    }
    sort(v.begin(),v.end(),cmp);

    int len = v.size();
    for(int i=0; i<len; i++)
    {
        cout<<v[i]<<'\n';
    }
}