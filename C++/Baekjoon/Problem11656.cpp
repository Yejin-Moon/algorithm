#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    set<string> stringset;
    for(int i=0; i<len; i++)
    {
        string part = s.substr(i);
        stringset.insert(part);
    }
    for(auto i=stringset.begin(); i!=stringset.end(); i++)
    {
        cout<<*i<<'\n';
    }
}