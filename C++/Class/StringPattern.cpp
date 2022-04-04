#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s[50];
    string sa;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    
    for(int k=1; k<n; k++)
    {
        for(int j=0; j<s[0].length(); j++)
        {
            if(s[k][j]!=s[0][j])
            {
                s[0][j]='?';
            }
        }
    }

    cout<<s[0]<<endl;
    
    return 0;
}