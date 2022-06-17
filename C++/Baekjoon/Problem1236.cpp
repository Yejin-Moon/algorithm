#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

struct cmp
{
    bool operator()(int n1, int n2)
    {
        if(abs(n1)>abs(n2)) return true;
        else if(abs(n1)==abs(n2))
        {
            if(n1>n2) return true;
            else return false;
        }
        return false;
    }
};

int main()
{
    priority_queue<int, vector<int>,cmp> pq;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a==0)
        {
            if(pq.empty()) cout<<"0"<<'\n';
            else 
            {
                cout<<pq.top()<<'\n';
                pq.pop();
            }
        }
        else pq.push(a);
    }
}