#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    stack<string> s;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1; i<=n; i++)
    {
        string str;
        getline(cin,str);
        stringstream ss(str);
        string word;
        while(getline(ss,word,' '))
        {
            s.push(word);
        }
        cout<<"Case #"<<i<<": ";
        while(!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<'\n';
    }
}