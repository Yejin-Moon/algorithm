#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int res=0;
        int arr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        string s;
        cin>>s;
        int len = s.length();
        for(int j=0; j<len; j++)
        {
            arr[s[j]-'A']++;
        }
        
        for(int j=0; j<26; j++)
        {
            if(arr[j]==0) res+='A'+j;
        }
        cout<<res<<'\n';
    }
}