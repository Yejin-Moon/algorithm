#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> pairst;
    int result = 0, tmp = 1, val = 0;

    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i]=='(' || s[i]==')') val=2;
        else if(s[i]=='[' || s[i]==']') val=3;
        if(s[i]=='(' || s[i]=='[')
        {
            tmp*=val;
            pairst.push(s[i]);
        }
        else
        {
            if(i==0 || pairst.empty()) 
            {
                result = 0;
                break;
            }
            if((pairst.top()=='(' && s[i]==']') || (pairst.top()=='[' && s[i]==')'))
            {
                result = 0;
                break;
            }
            if(s[i-1]=='('||s[i-1]=='[') result+=tmp;
            tmp/=val;
            pairst.pop();
        }
    }
    if(!pairst.empty()) result = 0; //()[와 같은 경우
    cout<<result;
}