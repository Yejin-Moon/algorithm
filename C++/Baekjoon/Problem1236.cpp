#include <iostream>
using namespace std;

int rcnt[51];
int ccnt[51];

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char c;
            cin>>c;
            if(c!='.')
            {
                rcnt[i]=1;
                ccnt[j]=1;
            }
        }
    }
    int rsum=0, csum=0;
    for(int i=0; i<n; i++) rsum+=rcnt[i];
    for(int j=0; j<m; j++) csum+=ccnt[j];
    cout<<max(n-rsum, m-csum);
}