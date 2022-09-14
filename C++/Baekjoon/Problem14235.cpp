#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            if(pq.empty()) cout<<"-1\n";
            else
            {
                cout<<pq.top()<<'\n';
                pq.pop();
            }
        }
        else
        {
            for(int j=0; j<a; j++)
            {
                int b;
                cin>>b;
                pq.push(b);
            }
        }
    }
}