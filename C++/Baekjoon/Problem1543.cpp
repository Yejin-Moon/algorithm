#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string a;

    getline(cin,s);
    getline(cin,a);
    int cnt=0;

    int len = (int)a.length();

    if(s.length() < len) cout<<0;
    else
    {
        for(int i=0; i<=s.length()-len; i++)
        {
            if(s[i]==a[0])
            {
                string sub = s.substr(i,len);
                if(sub==a)
                {
                    cnt++;
                    i+=(len-1);
                }
            }
        }
        cout<<cnt;
    }
}