#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int tall=0;
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    int res=0;
    while(s.size())
    {
        if(tall<s.top())
        {
            tall=s.top();
            res++;
        }
        s.pop();
    }
    cout<<res;
}