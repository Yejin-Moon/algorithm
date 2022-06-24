#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    set<string> set1;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        set1.insert(s);
    }
    for(int j=0; j<m; j++)
    {
        string s;
        cin>>s;
        if(set1.find(s)!=set1.end()) cnt++;
    }
    cout<<cnt;
}