#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<long,long> v1, pair<long,long> v2)
{
    /*if(v1.second < v2.second) return true;
    else if(v1.second==v2.second)
    {
        if(v1.first<v2.first) return true;
    }
    else return false;
    */
   if(v1.second==v2.second) return v1.first<v2.first;
   else return v1.second<v2.second;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    vector<pair<long,long>> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        long a, b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),compare);

    int cnt=1;
    int f = v[0].second;
    for(int i=1; i<n; i++)
    {
        if(v[i].first>=f)
        {
            cnt++;
            f = v[i].second;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}