#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        char arr[26]={0,};
        string s;
        cin>>s;
        arr[s[0]-'a'] = 1;
        for(int k=1; k<s.length(); k++)
        {
            if(arr[s[k]-'a']==0 || s[k]==s[k-1])
            {
                arr[s[k]-'a'] = 1;
            }
            else if(arr[s[k]-'a']==1)
            {
                cnt++;
                break;
            }
        }
    }
    cout<<n-cnt;
}