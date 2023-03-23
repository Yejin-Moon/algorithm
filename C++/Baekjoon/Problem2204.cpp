#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n;
    int dis = 'a'-'A';
    while(1)
    {
        map<string,string> ss;
        cin>>n;
        if(n==0) break;
        for(int i=0; i<n; i++)
        {
            string str,tstr;
            cin>>str;
            tstr=str;
            int len = str.length();
            for(int j=0; j<len; j++)
            {
                if(str[j]>='A' && str[j]<='Z') tstr[j]+=dis;
            }
            ss.insert({tstr,str});
        }
        auto iter = ss.begin();
        cout<<iter->second<<'\n';
    }
}