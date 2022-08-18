#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin>>n;
    multimap<string,int> m;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        m.insert({s,1});
    }
    for(int i=0; i<n-1; i++)
    {
        string s;
        cin>>s;
        map<string,int>::iterator it = m.find(s);
        if(it!=m.end()) m.erase(it);
    }
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<'\n';
    }
}