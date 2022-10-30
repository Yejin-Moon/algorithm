#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<string> sset;
    int n;
    cin>>n;
    string res;
    int reslen=0;
    for(int i=0; i<n; i++)
    {
        bool flag = true;
        string s;
        cin>>s;
        int len = s.length();
        for(int j=0; j<len/2; j++)
        {
            if(s[j]!=s[len-j-1]) 
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            res=s;
            reslen = len;
        }
        else
        {
            reverse(s.begin(),s.end());
            if(sset.find(s)!=sset.end())
            {
                res=s;
                reslen = len;
            }
            else
            {
                reverse(s.begin(),s.end());
                sset.insert(s);
            }
        }
    }
    cout<<reslen<<' '<<res[reslen/2];
}