#include <iostream>
#include <string>
using namespace std;

int main()
{
    while(1)
    {
        int cnt=0;
        string s;
        getline(cin,s);
        if(s=="#") break;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U') cnt++;
        }
        cout<<cnt<<'\n';
    }
}