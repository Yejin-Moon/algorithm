#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    map<string, int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        istringstream ss(s);
        string w;
        vector<string> str;
        while(getline(ss,w,'.')) str.push_back(w);
        m[str[1]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<'\n';
    }
}