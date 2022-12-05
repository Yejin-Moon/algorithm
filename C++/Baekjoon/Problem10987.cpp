#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int res=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') res++;
    }
    cout<<res;
}