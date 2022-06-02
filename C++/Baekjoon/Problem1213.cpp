#include <string>
#include <iostream>
using namespace std;

string ans;
int alpha[26];
int main()
{
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        alpha[s[i]-'A']++;
    }

    int cnt=0;
    for(int i=0; i<26; i++)
    {
        if(alpha[i]%2==1) cnt++;
    }
    if(cnt>1) 
    {
        cout<<"I'm Sorry Hansoo";
        return 0;
    }

    for(int i=0; i<26; i++)
    {
        for(int j=0; j<alpha[i]/2; j++)
        {
            ans+=i+'A';
        }
    }
    for(int i=0; i<26; i++)
    {
        if(alpha[i]%2==1) ans+=i+'A';
    }
    for(int i=25; i>=0; i--)
    {
        for(int j=0; j<alpha[i]/2; j++)
        {
            ans+=i+'A';
        }
    }
    cout<<ans;
}