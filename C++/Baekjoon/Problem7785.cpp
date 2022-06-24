#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    map<string,int,greater<string>> m;
    for(int i=0; i<n; i++)
    {
        string a,b;
        cin>>a>>b;
        if(b=="enter") 
        {
            if(auto i=m.find(a)!=m.end()) m[a]=1;
            else m.insert({a,1});
        }
        else m[a]++;
    }

    for(auto it=m.begin(); it!=m.end();it++)
    {
        if(it->second==1) cout<<it->first<<'\n';
    }
}