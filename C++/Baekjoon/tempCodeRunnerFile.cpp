#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    
    for(int i=0; i<n; i++)
    {
        cin>>str;
        int cnt=0, cnt2=0;
        for(int j=0; j<str.length();j++)
        {
            if(str[j]=='(') cnt++;
            else if(str[j]==')') cnt2++;
        }
        if(cnt==cnt2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}