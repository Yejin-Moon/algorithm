#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.rbegin(),s.rend());
    int len = s.length();
    if(s[len-1]!='0') cout<<-1;
    else
    {
        long long num=0;
        for(int i=0; i<len; i++)
        {
            num+=s[i]-'0';
        }
        if(num%3==0) cout<<s;
        else cout<<-1;
    }
}