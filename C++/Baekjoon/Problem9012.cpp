#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool vps(string ps)
{
    stack<char> s;
    bool flag = true;
    for(int i=0; i<ps.length(); i++)
    {
        if(ps[i]=='(')
        {
            s.push(ps[i]);
        }
        else if(!s.empty() && ps[i]==')')
        {
            s.pop();
        }
        else if(s.empty() && ps[i] ==')')
        {
            flag = false;
            break;
        }
    }
    if(flag && s.empty()) return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    string str;

    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(vps(str)) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }    
}