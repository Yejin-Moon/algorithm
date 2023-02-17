#include <iostream>
#include <vector>
using namespace std;

int main()
{
    while(1)
    {
        int n, tmp=1;
        cin>>n;
        int hn=n/2;
        if(n==-1) break;
        vector<int> v;
        v.push_back(1);
        for(int i=2; i<=hn; i++)
        {
            if(n%i==0)
            {
                tmp+=i;
                v.push_back(i);
            }
        }
        if(tmp==n)
        {
            int sz=v.size();
            printf("%d = ",n);
            for(int i=0; i<sz-1; i++)
            {
                printf("%d + ",v[i]);
            }
            printf("%d\n",v[sz-1]);
        }
        else printf("%d is NOT perfect.\n",n);
    }
}