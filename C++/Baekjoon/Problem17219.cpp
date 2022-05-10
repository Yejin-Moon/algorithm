#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<string,string> ms;

    for(int i=0; i<n; i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        ms.insert({s1,s2});
    }

    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        for(map<string,string>::iterator iter = ms.begin(); iter!=ms.end();iter++)
        {
            if(iter->first==s) cout<<iter->second<<'\n';
        }
    }
}