#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int cnt=0;
    string ans="";
    for(int i=0; i<len; i++)
    {
        if(s[i]=='X') cnt++;
        else 
        {
            if(cnt==2)
            {
                ans+="BB";
                cnt=0;
            }
            else if(cnt%2==1)
            {
                ans="-1";
                break;
            }
            ans+=".";
        }
        if(cnt==4)
        {
            ans+="AAAA";
            cnt=0;
        }
    }
    if(cnt==2)ans+="BB";
    if(cnt%2==1) ans="-1";
    cout<<ans;
}