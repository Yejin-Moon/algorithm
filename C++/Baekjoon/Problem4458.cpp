#include <iostream>
#include <string>
using namespace std;

int main()
{
    int gap = 'a'-'A';
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        string s;
        getline(cin,s);
        int len = s.length();
        for(int j=0; j<len; j++)
        {
            if(j==0&&(s[j]>='a'&&s[j]<='z')) printf("%c",s[j]-gap);
            else printf("%c",s[j]);
        }
        cout<<'\n';
    }
}