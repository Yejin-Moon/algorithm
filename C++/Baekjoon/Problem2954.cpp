#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            cout<<s[i];
            i+=2;
        }
        else cout<<s[i];
    }
}