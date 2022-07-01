#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    long long ans=0;
    int n;
    float b,c;
    cin>>n;
    vector<float> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cin>>b>>c;

    for(int i=0; i<n; i++)
    {
        long tmp;
        tmp=v[i]-b;
        ans++;
        if(tmp<=0) continue;
        tmp=ceil(tmp/c);
        ans+=tmp;
    }
    cout<<ans;
}