#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin>>n;
    queue<int> q;

    for(int i=1;i<=n; i++)
    {
        q.push(i);
    }
    int tmp;
    while(q.size()>1)
    {
        q.pop();
        tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    cout<<q.front()<<'\n';
}