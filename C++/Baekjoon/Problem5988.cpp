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
        if((s[len-1]-'0')%2==0) cout<<"even\n";
        else cout<<"odd\n";
    }
}