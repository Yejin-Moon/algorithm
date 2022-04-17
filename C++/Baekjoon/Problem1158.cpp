#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int a,b;
    cin>>a>>b;
    for(int i=1; i<=a; i++)
    {
        q.push(i);
    }

    int tmp;
    cout<<'<';
    while(q.size()>1)
    {
        for(int i=1; i<b; i++)
        {
            tmp = q.front();
            q.push(tmp);
            q.pop();
        }
        cout<<q.front()<<", ";
        q.pop();
    }
    cout<<q.front()<<'>'<<'\n';
}