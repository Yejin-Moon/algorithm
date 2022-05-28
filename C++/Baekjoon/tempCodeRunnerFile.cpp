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
    s[s.length()-1] = 0;

    for(int i=0; i<s.length(); i++)
    {
        if(a[0]==s[i])
        {
            for(int j=1; j<a.length(); j++)
            {
                i++;
                if(i==s.length()-1) goto EXIT;
                if(a[j]!=s[i]) break;
            }
            cnt++;
        }
    }
    goto EXIT;
EXIT:
    cout<<cnt;
}