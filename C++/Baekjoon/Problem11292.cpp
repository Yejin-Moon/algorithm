#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    while(1)
    {
        multimap<float,string,greater<float>> m;
        int n;
        cin>>n;
        if(n==0) break;
        for(int i=0; i<n; i++)
        {
            string s;
            float f;
            cin>>s>>f;
            m.insert({f,s});

        }
        float tmp=0;
        for(auto iter = m.begin();iter!=m.end(); iter++)
        {
            if(tmp>iter->first) break;
            cout<<iter->second<<" ";
            tmp=iter->first;
        }
        cout<<'\n';
    }
}