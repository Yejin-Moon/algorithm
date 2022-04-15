#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> v;

void push(int X)
{
    v.push_back(X);
    return;
}

int pop()
{
    int res=0;
    if(v.empty()) return -1;
    res = v.back();
    v.pop_back();
    return res;
}

int size()
{
    return v.size();
}

int empty()
{
    if(v.empty()) return 1;
    else return 0;
}

int top()
{
    if(v.empty()) return -1;
    else return v.back();
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    cin.ignore();
    string str;
    int a=0;
    vector<int> num;

    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(str[1]=='u') cin>>a;
        if(str[0]=='p')
        {
            if(str[1]=='u') push(a);
            else cout<<pop()<<'\n';
        }
        else if(str[0]=='s') cout<<size()<<'\n';
        else if(str[0]=='e') cout<<empty()<<'\n';
        else if(str[0]=='t') cout<<top()<<'\n';
    }
    return 0;
}