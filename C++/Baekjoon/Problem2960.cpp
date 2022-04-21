#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    bool* prime = new bool[n+1];
    prime[1] = false;
    for(int i=2; i<=n; i++)
    {
        prime[i] = true;
    }
    int cnt=0;
    for(int i=2; i<=n; i++)
    {
        if(prime[i])
        {
            cnt++;
            if(cnt==k)
            {
                cout<<i<<'\n';
                break;
            }
            for(int j=i*i; j<=n; j+=i)
            {
                if(prime[j])
                {
                    prime[j]=false;
                    cnt++;
                }
                if(cnt==k)
                {
                    cout<<j<<'\n';
                    break;
                }
            }
        }
    }
}