#include <iostream>
#include <string>
using namespace std;

char c[20];
void Add(int x)
{
    c[x-1] = 1;
    return;
}

void Remove(int x)
{
    if(c[x-1]) c[x-1] = 0;
    return;
}

int Check(int x)
{
    return c[x-1];
}

void Toggle(int x)
{
    if(c[x-1]) c[x-1]=0;
    else c[x-1]=1;
    return;
}

void all()
{
    for(int i=0; i<20; i++)
    {
        c[i] = 1;
    }
    return;
}

void Emptys()
{
    for(int i=0; i<20; i++)
    {
        c[i]=0;
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s=="all") all();
        else if(s=="empty") Emptys();
        else 
        {
            cin>>a;
            if(s=="add") Add(a);
            else if(s=="remove") Remove(a);
            else if(s=="check") cout<<Check(a)<<'\n';
            else if(s=="toggle") Toggle(a);
        }
    }
    return 0;
}