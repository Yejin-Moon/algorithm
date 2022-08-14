#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<string,int>& a, const pair<string,int>& b)
{
    if(a.second<b.second) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<string,int> s;
    for(int i=0; i<m; i++)
    {
        string id;
        cin>>id;
        if(s.find(id)!=s.end())
        {
            s[id]=i;
        }
        else s.insert({id,i});
    }
    vector<pair<string,int>> v(s.begin(),s.end());
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0; i<n; i++)
    {
        if(i==v.size()) break;
        cout<<v[i].first<<'\n';
    }
}