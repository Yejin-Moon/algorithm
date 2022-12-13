#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"String #"<<i<<'\n';
        string s;
        cin>>s;
        int len = s.length();
        for(int j=0; j<len; j++)
        {
            if(s[j]=='Z') cout<<"A";
            else printf("%c",s[j]+1);
        }
        cout<<"\n";
        cout<<"\n";
    }
}