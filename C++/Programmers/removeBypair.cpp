#include <iostream>
#include <string>

using namespace std;
char st[1000001];
int top=-1;

char topp()
{
    if(top==-1) return -1;
    return st[top];
}
void push(char c)
{
    top++;
    st[top]=c;
    return;
}
void pop()
{
    top--;
}
int empty()
{
    if(top==-1) return 1;
    else return 0;
}
int solution(string s)
{
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(topp()==s[i]) pop();
        else push(s[i]);
    }
    return empty();
}