#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int len = s.length();
        if(len==4 && (s[2]=='9'&&s[3]!='0')) res--;
        else if(len==5) res--;
    }
    cout<<res;
}