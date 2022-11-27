#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        int res=0;
        string s;
        getline(cin,s);
        int len = s.length();
        for(int j=0; j<len; j++)
        {
            if(s[j]==' ') continue;
            res+=(s[j]-'A'+1);
        }
        if(res==100) cout<<"PERFECT LIFE\n";
        else cout<<res<<'\n';
    }
}