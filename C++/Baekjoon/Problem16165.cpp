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
    map<string,string> list;
    for(int i=0; i<n; i++)
    {
        string group;
        int nummem;
        cin>>group>>nummem;
        for(int j=0; j<nummem; j++)
        {
            string name;
            cin>>name;
            list.insert({name,group});
        }
    }
    for(int i=0; i<m; i++)
    {
        string qname;
        int flag;
        cin>>qname>>flag;
        if(flag==1)
        {
            cout<<list[qname]<<'\n';
        }
        else
        {
            bool f=false;
            for(auto it=list.begin(); it!=list.end(); it++)
            {
                if(it->second==qname) 
                {
                    f=true;
                    cout<<it->first<<'\n';
                }
            }
        }
    }
}