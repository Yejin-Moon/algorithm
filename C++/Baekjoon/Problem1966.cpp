#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int n,m,pt;
    for(int i=0; i<test; i++)
    {
        int cnt=0;
        cin>>n>>m;
        queue<pair<int,int>> q;
        priority_queue<int> pq;
        for(int j=0; j<n; j++)
        {
            cin>>pt;
            q.push({j,pt});
            pq.push(pt);
        }

        while(!q.empty())
        {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            if(pq.top()==val)
            {
                pq.pop();
                cnt++;
                if(idx == m)
                {
                    cout<<cnt<<endl;
                    break;
                }
            }
            else q.push({idx,val});
        }
    }
    return 0;
}