#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = s.length();
    int happy=0, sad=0;
    bool flag = false;
    for(int i=0; i<len; i++)
    {
        if(s[i]==':' && s[i+1]=='-')
        {
            flag=true;
            i+=2;
        }
        if(flag)
        {
            if(s[i]==')') happy++;
            else if(s[i]=='(') sad++;
        }
    }
    if(happy==0 && sad==0) cout<<"none";
    else if(happy==sad) cout<<"unsure";
    else if(happy>sad) cout<<"happy";
    else cout<<"sad";
}