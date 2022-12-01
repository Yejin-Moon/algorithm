#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A') a++;
        else b++;
    }
    if(a>b) cout<<"A";
    else if(b>a) cout<<"B";
    else cout<<"Tie";
}