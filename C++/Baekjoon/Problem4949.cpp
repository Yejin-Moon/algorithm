#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool balance(string str)
{
    stack<char> s;
    bool flag = true;
    for(int i=0; i<str.length()-1; i++)
    {
        if(str[i]=='(') s.push(str[i]);
        else if(!s.empty() && str[i] ==')' && s.top()=='(') s.pop();
        else if((s.empty()||s.top()!='(') && str[i] ==')') flag = false;
        else if(str[i]=='[') s.push(str[i]);
        else if(!s.empty() && str[i] ==']' && s.top()=='[') s.pop();
        else if((s.empty() || s.top()!='[') && str[i] ==']') flag = false;
    }

    if(s.empty() && flag == true) return true;
    else return false;
}

int main()
{
    string str;
    while(1)
    {
        getline(cin,str);
        /*while(1)
        {
            cin>>strr;
            str += strr;
            if(strr[strr.length()-1]=='.') break;
        }*/
        if(str==".") break;
        //cin>>str;
        if(balance(str)) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
}