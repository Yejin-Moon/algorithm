#include <iostream>
#include <string>
using namespace std;

int num[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int res = 0;
    for(int i=0; i<len; i++)
    {
        res+=num[s[i]-'A'];
    }
    res+=len;
    cout<<res;
}