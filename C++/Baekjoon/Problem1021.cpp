#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n,m,idx,cnt=0;
    scanf("%d %d",&n,&m);
    deque<int> q;

    for(int i=1; i<=n; i++) q.push_back(i);
    while(m--)
    {
        int a;
        scanf("%d",&a);
        for(int i=0; i<q.size(); ++i)
        {
            if(q[i]==a) 
            {
                idx=i;
                break;
            }
        }
        if(idx<q.size()-idx)
        {
            while(1)
            {
                if(q.front()==a)
                {
                    q.pop_front();
                    break;
                }
                ++cnt;
                q.push_back(q.front());
                q.pop_front();
            }
        }
        else{
            while(1)
            {
                if(q.front()==a)
                {
                    q.pop_front();
                    break;
                }
                ++cnt;
                q.push_front(q.back());
                q.pop_back();
            }
        }
    }
    printf("%d",cnt);
}