#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(4);
    pq.push(7);
    pq.push(3);
    pq.push(1);
    pq.push(9);

    cout<<"Size of queue : "<<pq.size()<<"\n";
    while(!pq.empty())
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
    return 0;
}