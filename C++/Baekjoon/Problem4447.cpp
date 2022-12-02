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
        int g=0, b=0;
        string s;
        getline(cin,s);
        int len = s.length();
        for(int j=0; j<len; j++)
        {
            if(s[j]=='G'||s[j]=='g') g++;
            else if(s[j]=='B'||s[j]=='b') b++;
        }
        if(g>b) cout<<s<<" is GOOD\n";
        else if(g<b) cout<<s<<" is A BADDY\n";
        else cout<<s<<" is NEUTRAL\n";
    }
}