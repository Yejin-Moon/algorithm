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
        v[i]=v[i]-b;
        ans++;
        if(v[i]<=0) continue;
        v[i]=ceil(v[i]/c);
        ans+=v[i];
    }
    cout<<ans;
}