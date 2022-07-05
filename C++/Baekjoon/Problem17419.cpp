#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len = s.length();
    int cnt=0;

    for(int i=0; i<len; i++)
    {
        if(s[i]=='1') cnt++;
    }
    cout<<cnt;
}