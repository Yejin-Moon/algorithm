#include <iostream>
#include <deque>
#include <string>
using namespace std;

deque<int> d;

void pushfront(int X)
{
    d.push_front(X);
}

void pushback(int X)
{
    d.push_back(X);
}

int popfront()
{
    if(d.empty()) return -1;
    int t;
    t=d.front();
    d.pop_front();
    return t;
}

int popback()
{
    if(d.empty()) return -1;
    int t;
    t = d.back();
    d.pop_back();
    return t;
}

int size()
{
    return d.size();
}

int empty()
{
    if(d.empty()) return 1;
    else return 0;
}

int front()
{
    if(d.empty()) return -1;
    return d.front();
}

int back()
{
    if(d.empty()) return -1;
    return d.back();
}

int main()
{
    int n;
    cin>>n;
    int a;
    string str;

    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(str=="push_front") 
        {
            cin>>a;
            pushfront(a);
        }
        else if(str=="push_back")
        {
            cin>>a;
            pushback(a);
        }
        else if(str=="pop_front") cout<<popfront()<<'\n';
        else if(str=="pop_back") cout<<popback()<<'\n';
        else if(str=="size") cout<<size()<<'\n';
        else if(str=="empty") cout<<empty()<<'\n';
        else if(str=="front") cout<<front()<<'\n';
        else if(str=="back") cout<<back()<<'\n';
    }
}