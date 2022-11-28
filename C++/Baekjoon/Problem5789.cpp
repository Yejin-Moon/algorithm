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
        int len = s.length()/2;
        if(s[len]==s[len-1]) cout<<"Do-it\n";
        else cout<<"Do-it-Not\n";
    }
}