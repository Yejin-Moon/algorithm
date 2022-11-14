#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
    }
    int idx=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int a;
            cin>>a;
            cout<<v[idx]+a<<" ";
            idx++;
        }
        cout<<'\n';
    }
}