#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int cnt=0;
    string s;
    map<string,float> m;
    while(getline(cin,s))
    {
        if(m.find(s)!=m.end())
        {
            m[s]++;
        }
        else m.insert({s,1});
        cnt++;
    }

    for(auto iter = m.begin(); iter!=m.end(); iter++)
    {
        cout<<iter->first<<" ";
        printf("%.4f\n",(iter->second/cnt)*100);
    }
}