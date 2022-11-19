#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int idx;
        cin>>idx;
        string s;
        cin>>s;
        int len = s.length();
        for(int j=0; j<len; j++)
        {
            if(j!=idx-1) cout<<s[j];
        }
        cout<<'\n';
    }
}