#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    stack<int> s;
    
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==0) s.pop();
        else s.push(a);
    }

    int sum=0;

    while(!s.empty())
    {
        sum+=s.top();
        s.pop();
    }
    cout<<sum<<'\n';
}