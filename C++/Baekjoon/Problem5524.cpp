#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int len = s.length();
        int gap = 'a'-'A';
        for(int j=0; j<len; j++)
        {
            if(s[j]>='A'&&s[j]<='Z') s[j]+=gap;
            printf("%c",s[j]);
        }
        cout<<'\n';
    }
}