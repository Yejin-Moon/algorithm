#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string, int> m;
    string s;
    for(int i=0; i<n; i++)
    {  
        cin>>s;
        m.insert({s,1});
        for(auto iter = m.begin(); iter != m.end(); iter++)
        {
            if(iter->first == s)
            {
                iter->second++;
            }
        }
    }

    int big=0;
    string b;
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        //cout<<iter->second<<'\n';
        if(iter->second>big) 
        {
            big = iter->second;
            b=iter->first;
        }
    }
    cout<<b;
    
}