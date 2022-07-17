#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool comp(pair<string,vector<int>> v1, pair<string,vector<int>> v2)
{
    if(v1.second[0]>v2.second[0]) return true;
    else if(v1.second[0]==v2.second[0])
    {
        if(v1.second[1]<v2.second[1]) return true;
        else if(v1.second[1]==v2.second[1])
        {
            if(v1.second[2]>v2.second[2]) return true;
            else if(v1.second[2]==v2.second[2])
            {
                if(v1.first.compare(v2.first)<0) return true;
                else return false;
            }
            else return false;
        }
        else return false;
    }
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin>>n;
    vector<pair<string,vector<int>>> v;
    vector<int> v2[100003];
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<3; j++)
        {
            int a;
            cin>>a;
            v2[i].push_back(a);
        }
        v.push_back(make_pair(s,v2[i]));
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<'\n';
    }
}